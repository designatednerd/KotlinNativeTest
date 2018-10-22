package no.bakkenbaeck.mpp.mobile

import platform.CoreGraphics.CGFloat
import platform.UIKit.UIFont

fun Font.toUIFont(size: CGFloat): UIFont {
    return when (this) {
        Font.Bold -> UIFont.boldSystemFontOfSize(size)
        Font.Italic -> UIFont.italicSystemFontOfSize(size)
        Font.Regular -> UIFont.systemFontOfSize(size)
        Font.Fancy -> {
            val fontName = "Squealer"
            val font = UIFont.fontWithName(fontName, size)
            if (font != null) {
                font
            } else {
                throw RuntimeException("Font $fontName is not available on iOS")
            }
        }
    }
}

fun Font.toUIFont(size: FontSize): UIFont {
    return toUIFont(size.unscaledPixels)
}