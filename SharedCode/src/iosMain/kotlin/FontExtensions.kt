package no.bakkenbaeck.mpp.mobile

import platform.CoreGraphics.CGFloat
import platform.UIKit.UIFont

private fun Font.iOSName(): String = when (this) {
    Font.Bold -> "SF-UI-Bold"
    Font.Italic -> "SF-UI-Italic"
    Font.Regular -> "SF-UI-Regular"
    Font.Fancy -> "Squealer"
}

fun Font.toUIFont(size: CGFloat): UIFont {
    val font = UIFont.fontWithName(iOSName(), size)
    if (font != null) {
        return font
    } else {
        throw RuntimeException("Font ${iOSName()} is not available on iOS")
    }
}

fun Font.toUIFont(size: FontSize): UIFont {
    return toUIFont(size.unscaledPixels)
}