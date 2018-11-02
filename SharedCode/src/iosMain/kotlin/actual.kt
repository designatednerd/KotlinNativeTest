package no.bakkenbaeck.mpp.mobile

import platform.Foundation.NSLocale
import platform.Foundation.autoupdatingCurrentLocale
import platform.Foundation.languageCode
import platform.UIKit.UIDevice

actual fun platformName(): String {
    return UIDevice.currentDevice.systemName() + " " + UIDevice.currentDevice.systemVersion
}

public actual fun currentLanguageCode(): String {
    return NSLocale.autoupdatingCurrentLocale.languageCode
}
