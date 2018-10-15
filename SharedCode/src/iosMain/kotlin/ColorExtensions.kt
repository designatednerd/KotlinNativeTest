package no.bakkenbaeck.mpp.mobile

import platform.UIKit.UIColor

fun Color.toUIColor(): UIColor {
    return UIColor(
        red = redComponent / 255.0,
        green = greenComponent / 255.0,
        blue = blueComponent / 255.0,
        alpha = alphaComponent / 255.0
    )
}