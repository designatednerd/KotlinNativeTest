package no.bakkenbaeck.mpp.mobile

sealed class RequestMethod(val stringValue: String) {
    class Get: RequestMethod("GET")
    class Put: RequestMethod("PUT")
    class Post: RequestMethod("POST")
    class Delete: RequestMethod("DELETE")
    class Patch: RequestMethod("PATCH")
}

sealed class NetworkResult<T> {
    class Success<T>(val item: T): NetworkResult<T>()
    class Error<T>(val message: String): NetworkResult<T>()
}

expect fun sendToNetwork(method: RequestMethod,
                         urlString: String,
                         callback: (NetworkResult<String>) -> Unit)

open class NetworkClient(val rootURLString: String) {

    private fun fullURLStringForPath(path: String): String {
        return "$rootURLString/$path"
    }

    fun <T> get(
        fromPath: String,
        transformationFunction: (String) -> T,
        callback: (NetworkResult<T>) -> Unit) {
        perform(
            RequestMethod.Get(),
            fullURLStringForPath(fromPath),
            transformationFunction,
            callback
        )
    }

    fun <T> perform(method: RequestMethod,
                    urlString: String,
                    transformationFunction: (String) -> T,
                    callback: (NetworkResult<T>) -> Unit) {

        sendToNetwork(
            method,
            urlString
        ) { networkResult ->
            when (networkResult) {
                is NetworkResult.Error -> callback(NetworkResult.Error(networkResult.message))
                is NetworkResult.Success -> {
                    val transformed = transformationFunction(networkResult.item)
                    callback(NetworkResult.Success(transformed))
                }
            }
        }
    }

}