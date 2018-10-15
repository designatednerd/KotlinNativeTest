package no.bakkenbaeck.kotlinnativetest

import android.support.annotation.ColorInt

@ColorInt
fun no.bakkenbaeck.mpp.mobile.Color.toAndroidColor(): Int {
    return android.graphics.Color.parseColor("#$hexString")
}