package no.bakkenbaeck.mpp.mobile


expect fun platformName(): String

fun createApplicationScreenMessage() : String {
    return "Kotlin rocks on ${platformName()}"
}