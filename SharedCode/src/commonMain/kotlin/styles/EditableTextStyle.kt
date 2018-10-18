package no.bakkenbaeck.mpp.mobile.styles

import no.bakkenbaeck.mpp.mobile.Color
import no.bakkenbaeck.mpp.mobile.Font
import no.bakkenbaeck.mpp.mobile.FontSize

sealed class EditableTextStyle(
    val textColor: Color = Color.Black,
    val activeHighlightColor: Color,
    val inactiveHighlightColor: Color = Color.DarkGray,
    val placeholderColor: Color = Color.LightGray,
    val errorColor: Color = Color.Red,
    val font: Font = Font.Regular,
    val fontSize: FontSize = FontSize.TextPrimary
) {
    class RequiredEditableText: EditableTextStyle(
        activeHighlightColor = Color.Green
    )

    class OptionalEditableText: EditableTextStyle(
        activeHighlightColor = Color.Blue
    )

}