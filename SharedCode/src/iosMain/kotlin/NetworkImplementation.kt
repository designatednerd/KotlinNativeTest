package no.bakkenbaeck.mpp.mobile

import platform.Foundation.*
import kotlin.native.concurrent.TransferMode
import kotlin.native.concurrent.Worker
import kotlin.native.concurrent.freeze

actual fun sendToNetwork(method: RequestMethod,
                         urlString: String,
                         callback: (NetworkResult<String>) -> Unit) {


    val url = NSURL(string = urlString)
    val mutableUrlRequest = NSMutableURLRequest(url)
    mutableUrlRequest.setHTTPMethod(method.stringValue)

    val worker = Worker.start()
    worker.execute(TransferMode.SAFE, producer = {
            mutableUrlRequest.freeze()
        },
        job = { request: NSURLRequest ->
            val result: NetworkResult<String>
            val data = NSURLConnection.sendSynchronousRequest(request, null, null)
            if (data == null) {
                result = NetworkResult.Error("No data received")
            } else {
                val decoded = NSString.create(data = data, encoding = NSUTF8StringEncoding)

                // Warning: Awful hack
                val kotlinString = decoded?.stringByAppendingString("")
                result = if (kotlinString == null) {
                     NetworkResult.Error("Could not decode string!")
                } else {
                    NetworkResult.Success(kotlinString)
                }
            }

            result
    }).consume { result ->
        callback(result)
    }
}

/*
NOTES:

 - NSURLSession causes an error because it fires off to another thread and can't be called synchronously
    "Uncaught Kotlin exception: kotlin.IllegalStateException: Illegal transfer state"
 - Even trying to work around this using dispatch semaphores doesn't work.

 */