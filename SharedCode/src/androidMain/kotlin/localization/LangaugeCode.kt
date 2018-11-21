package no.bakkenbaeck.mpp.mobile.localization

import java.util.*

actual fun currentLanguageCode(): String {
    val language = "es"// Locale.getDefault().language
    val country = Locale.getDefault().country
    val code = "${language}_$country"
    println("Android language: $code")
    return code
}