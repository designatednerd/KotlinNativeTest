package no.bakkenbaeck.mpp.mobile

class HttpBinClient: NetworkClient("https://httpbin.org") {

    fun runGet() {
        get(
            fromPath = "get",
            transformationFunction = { string ->
                string
            },
            callback = { result ->
                when (result) {
                    is NetworkResult.Error -> println("Error! : ${result.message}")
                    is NetworkResult.Success -> println("Success! Got: \n${result.item}")
                }
            }
        )
    }
}