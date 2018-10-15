package no.bakkenbaeck.mpp.mobile

enum class Color(val hexString: String) {
    Red("FF0000"),
    Yellow("FFFF00"),
    Green("00FF00"),
    Blue("0000FF"),
    Fuchsia("FF00FF"),
    Black("000000"),
    Gray("808080");

    val alphaComponent: Double
        get() = if (hexString.length != 8) {
            255.0
        } else {
            val substring = hexString.substring(6, 8)
            substring.toLong(16).toDouble()
        }


    val redComponent: Double
        get() {
            val substring = hexString.substring(0, 2)
            return substring.toLong(radix = 16).toDouble()
        }

    val greenComponent: Double
        get() {
            val substring = hexString.substring(2, 4)
            return substring.toLong(16).toDouble()
        }

    val blueComponent: Double
        get() {
            val substring = hexString.substring(4, 6)
            return substring.toLong(16).toDouble()
        }
}