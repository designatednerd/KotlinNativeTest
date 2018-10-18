package no.bakkenbaeck.kotlinnativetest

import android.view.View
import no.bakkenbaeck.mpp.mobile.Color

fun View.setBackgroundColor(color: Color) {
    setBackgroundColor(color.toAndroidColor())
}