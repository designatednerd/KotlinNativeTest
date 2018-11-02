package no.bakkenbaeck.mpp.mobile

import no.bakkenbaeck.mpp.mobile.localization.Localized


expect fun platformName(): String

fun createApplicationScreenMessage() : String {
    return Localized.kotlinRocks(platformName())
}