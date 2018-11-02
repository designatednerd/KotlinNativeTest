package no.bakkenbaeck.mpp.mobile.localization

import java.util.*

public actual fun currentLanguageCode(): String {
    val language = Locale.getDefault().language
    val country = Locale.getDefault().country
    val code = "${language}_$country"
    println("Android language: $code")
    return code
}