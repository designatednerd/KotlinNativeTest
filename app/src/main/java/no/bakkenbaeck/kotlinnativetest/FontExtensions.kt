package no.bakkenbaeck.kotlinnativetest

import android.content.Context
import android.graphics.Typeface
import android.util.DisplayMetrics
import android.util.TypedValue
import androidx.annotation.FontRes
import androidx.core.content.res.ResourcesCompat
import no.bakkenbaeck.mpp.mobile.Font
import no.bakkenbaeck.mpp.mobile.FontSize

@FontRes
fun Font.toAndroidFontResource(): Int = when (this) {
    Font.Bold -> R.font.roboto_condensed_bold
    Font.Italic -> R.font.roboto_medium_italic
    Font.Regular -> R.font.roboto_medium
    Font.Fancy -> R.font.squealer
}

fun Font.toTypeface(context: Context): Typeface {
    val typeface = ResourcesCompat.getFont(context, toAndroidFontResource())
    if (typeface != null) {
        return typeface
    } else {
        throw RuntimeException("Could not load font for ${this.name}")
    }
}

fun FontSize.toScaledPixels(displayMetrics: DisplayMetrics): Float {
    return TypedValue.applyDimension(
        TypedValue.COMPLEX_UNIT_SP,
        unscaledPixels.toFloat(), displayMetrics
    )
}