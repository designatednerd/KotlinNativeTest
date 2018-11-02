package no.bakkenbaeck.mpp.mobile

public data class LocalizedValue(
    public val languageCode: String,
    public val value: String
)

public expect fun currentLanguageCode(): String

public data class LocalizedString(
    private val values: List<LocalizedValue>
) {
    public fun valueForLanguageCode(code: String): String? {
        val exactMatch = values.firstOrNull { it.languageCode == code }
        if (exactMatch != null) {
            return exactMatch.value
        }

        val partialMatchOfLongerCode = values.firstOrNull { code.startsWith(it.languageCode) }

        if (partialMatchOfLongerCode != null) {
            return partialMatchOfLongerCode.value
        }

        val partialMatchOfShorterCode = values.firstOrNull { it.languageCode.startsWith(code) }
        return partialMatchOfShorterCode?.value
    }

    public val defaultValue: String
        get() = values.first().value

    public val currentLanguageValue: String?
        get() = valueForLanguageCode(currentLanguageCode())

    public val value: String
        get() = currentLanguageValue ?: defaultValue

    companion object {
        val helloWorld = LocalizedString(
            listOf(
                LocalizedValue("en_US", "Hello, World!"),
                LocalizedValue("en_GB", "How ya doin' guv'nor?"),
                LocalizedValue("es", "¡Hola, el mundo!")
            )
        )

        val dayHeaderTitle = LocalizedString(
            listOf(
                LocalizedValue("en", "Day"),
                LocalizedValue("es", "Día")
            )
        )

        val openingHeaderTitle = LocalizedString(
            listOf(
                LocalizedValue("en", "Open at"),
                LocalizedValue("es", "Abierto à")
            )
        )

        val closingHeaderTitle = LocalizedString(
            listOf(
                LocalizedValue("en", "Closed at"),
                LocalizedValue("es", "Cerrado à")
            )
        )
    }
}

public object Localized {
    public val helloWorld = LocalizedString.helloWorld.value

    public val dayHeaderTitle = LocalizedString.dayHeaderTitle.value

    public val openingHeaderTitle = LocalizedString.openingHeaderTitle.value

    public val closingHeaderTitle = LocalizedString.closingHeaderTitle.value
}


