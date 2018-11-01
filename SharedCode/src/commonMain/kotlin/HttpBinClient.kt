package no.bakkenbaeck.mpp.mobile

class HttpBinClient: NetworkClient("https://httpbin.org") {

    fun runGet() {
        executeRequest(
            path = "get",
            callback = { result ->
                when (result) {
                    is NetworkResult.Error<String> -> println("Error! : ${result.message}")
                    is NetworkResult.Success<String> -> println("Success! Got: \n${result.item}")
                }
            }
        )
    }

    fun runPost(body: String) {
        executeRequest(
            method = RequestMethod.Post(body),
            path = "post",
            callback = { result ->
                when (result) {
                    is NetworkResult.Error<String> -> println("Error! : ${result.message}")
                    is NetworkResult.Success<String> -> println("Success! Got: \n${result.item}")
                }
            }
        )
    }
}