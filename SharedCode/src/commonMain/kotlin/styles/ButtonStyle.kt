package no.bakkenbaeck.mpp.mobile.styles

import no.bakkenbaeck.mpp.mobile.Color
import no.bakkenbaeck.mpp.mobile.Font
import no.bakkenbaeck.mpp.mobile.FontSize

sealed class ButtonStyle(
    val textColorActive: Color,
    val textColorDisabled: Color = Color.LightGray,
    val textColorInactive: Color,
    val backgroundColorActive: Color,
    val backgroundColorDisabled: Color = Color.DarkGray,
    val backgroundColorInactive: Color,
    val font: Font = Font.Bold,
    val fontSize: FontSize = FontSize.TextPrimary,
    val cornerRadius: CornerRadius = CornerRadius.Medium(),
    val defaultHeight: Dimension = Dimension.ButtonHeight()
) {

    class CallToAction: ButtonStyle(
        textColorActive = Color.Blue,
        textColorInactive = Color.Black,
        backgroundColorActive = Color.Yellow,
        backgroundColorInactive = Color.Green
    )

    class Destructive: ButtonStyle(
        textColorInactive = Color.White,
        textColorActive = Color.LightGray,
        backgroundColorActive = Color.Yellow,
        backgroundColorInactive = Color.Red
    )

}