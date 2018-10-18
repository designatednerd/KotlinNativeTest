package no.bakkenbaeck.mpp.mobile.styles

import no.bakkenbaeck.mpp.mobile.Color
import no.bakkenbaeck.mpp.mobile.Font
import no.bakkenbaeck.mpp.mobile.FontSize

sealed class StaticTextStyle(
    val font: Font,
    val fontSize: FontSize,
    val textColor: Color = Color.Black
) {

    class Headline: StaticTextStyle(
        font = Font.Fancy,
        fontSize = FontSize.HeadlinePrimary
    )

    class HeadlineSecondary: StaticTextStyle(
        font = Font.Bold,
        fontSize = FontSize.HeadlineSecondary,
        textColor = Color.Blue
    )

    class TextPrimary: StaticTextStyle(
        font = Font.Regular,
        fontSize = FontSize.TextPrimary
    )

    class TextSecondary: StaticTextStyle(
        font = Font.Regular,
        fontSize = FontSize.TextSecondary
    )

    class TextCaption: StaticTextStyle(
        font = Font.Italic,
        fontSize = FontSize.TextCaption,
        textColor = Color.DarkGray
    )

    class TextIconLabel: StaticTextStyle(
        font = Font.Regular,
        fontSize = FontSize.TextIconLabel
    )
}