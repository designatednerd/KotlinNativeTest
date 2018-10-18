package no.bakkenbaeck.mpp.mobile

enum class Font {
    Regular,
    Bold,
    Italic,
    Fancy;
}

enum class FontSize {
    TextPrimary,
    TextSecondary,
    TextIconLabel,
    TextCaption,
    HeadlinePrimary,
    HeadlineSecondary;

    val unscaledPixels: Double
        get() = when (this) {
            FontSize.TextPrimary -> 16.0
            TextSecondary -> 14.0
            TextIconLabel -> 10.0
            TextCaption -> 12.0
            HeadlinePrimary -> 24.0
            HeadlineSecondary -> 18.0
        }
}