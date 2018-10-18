package no.bakkenbaeck.kotlinnativetest

import android.content.res.ColorStateList
import android.util.TypedValue
import com.google.android.material.button.MaterialButton
import no.bakkenbaeck.mpp.mobile.FontSize
import no.bakkenbaeck.mpp.mobile.styles.ButtonStyle

fun MaterialButton.setTextSize(size: FontSize) {
    setTextSize(TypedValue.COMPLEX_UNIT_SP, size.unscaledPixels.toFloat())
}

fun MaterialButton.applyStyle(style: ButtonStyle) {
    val disabled = -android.R.attr.state_enabled
    val notPressed = -android.R.attr.state_pressed
    val pressed = android.R.attr.state_pressed
    val focused = android.R.attr.state_focused

    val states = arrayOf(
        intArrayOf(notPressed),
        intArrayOf(disabled),
        intArrayOf(focused),
        intArrayOf(pressed, focused)
    )

    val backgroundColors = intArrayOf(
        style.backgroundColorInactive.toAndroidColor(),
        style.backgroundColorDisabled.toAndroidColor(),
        style.backgroundColorActive.toAndroidColor(),
        style.backgroundColorActive.toAndroidColor()
    )

    backgroundTintList = ColorStateList(states, backgroundColors)

    val textColors = intArrayOf(
        style.textColorInactive.toAndroidColor(),
        style.textColorDisabled.toAndroidColor(),
        style.textColorActive.toAndroidColor(),
        style.textColorActive.toAndroidColor()
    )


    setTextColor(ColorStateList(states, textColors))

    typeface = style.font.toTypeface(context)
    setTextSize(style.fontSize)
}