package no.bakkenbaeck.mpp.mobile.localization

import platform.Foundation.NSLocale
import platform.Foundation.autoupdatingCurrentLocale
import platform.Foundation.languageCode

actual fun currentLanguageCode(): String {
    return NSLocale.autoupdatingCurrentLocale.languageCode
}
