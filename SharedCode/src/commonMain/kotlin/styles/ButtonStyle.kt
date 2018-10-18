package no.bakkenbaeck.mpp.mobile.styles

import no.bakkenbaeck.mpp.mobile.Color
import no.bakkenbaeck.mpp.mobile.Font
import no.bakkenbaeck.mpp.mobile.FontSize

sealed class ButtonStyle(
    val textColorActive: Color,
    val textColorDisabled: Color,
    val textColorInactive: Color,
    val backgroundColorActive: Color,
    val backgroundColorDisabled: Color,
    val backgroundColorInactive: Color,
    val font: Font,
    val fontSize: FontSize
) {

    class CallToAction: ButtonStyle(
        textColorActive = Color.Blue,
        textColorDisabled = Color.LightGray,
        textColorInactive = Color.Black,
        backgroundColorActive = Color.Green,
        backgroundColorDisabled = Color.DarkGray,
        backgroundColorInactive = Color.Red,
        font = Font.Bold,
        fontSize = FontSize.TextPrimary     
    )

}