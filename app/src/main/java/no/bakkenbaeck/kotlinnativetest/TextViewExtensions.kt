package no.bakkenbaeck.kotlinnativetest

import android.util.TypedValue
import android.widget.TextView
import no.bakkenbaeck.mpp.mobile.Color
import no.bakkenbaeck.mpp.mobile.Font
import no.bakkenbaeck.mpp.mobile.FontSize
import no.bakkenbaeck.mpp.mobile.styles.StaticTextStyle

fun TextView.setTextColor(color: Color) {
    setTextColor(color.toAndroidColor())
}

fun TextView.setFont(font: Font) {
    typeface = font.toTypeface(context)
}

fun TextView.setTextSize(fontSize: FontSize) {
    setTextSize(TypedValue.COMPLEX_UNIT_SP, fontSize.unscaledPixels.toFloat())
}

fun TextView.setHighlightColor(color: Color) {
    highlightColor = color.toAndroidColor()
}

fun TextView.applyStyle(style: StaticTextStyle) {
    setFont(style.font)
    setTextSize(style.fontSize)
    setTextColor(style.textColor)
}
