package no.bakkenbaeck.mpp.mobile


expect fun platformName(): String

fun createApplicationScreenMessage() : String {
    return "Kotlin/Native rocks on ${platformName()}"
}