package no.bakkenbaeck.mpp.mobile.styles

sealed class Size(val value: Double)

sealed class CornerRadius(val radius: Double): Size(radius) {
    class None: CornerRadius(0.0)
    class Small: CornerRadius(4.0)
    class Medium: CornerRadius(8.0)
    class Large: CornerRadius(12.0)
}

sealed class Dimension(val points: Double): Size(points) {
    class ButtonHeight: Dimension(50.0)
}

sealed class Margin(val multiplier: Double): Size((multiplier * Margin.defaultMargin)) {
    companion object {
        val defaultMargin: Double = 5.0
    }

    class x1: Margin(1.0)
    class x1_5: Margin(1.5)
    class x2: Margin(2.0)
}