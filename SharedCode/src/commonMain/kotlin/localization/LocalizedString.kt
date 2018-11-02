package no.bakkenbaeck.mpp.mobile.localization

expect fun currentLanguageCode(): String

interface Language {
    // The ISO code for a language, such as en_US or es_MX.
    // Two-letter codes can be used, but the full code is preferable.
    val code: String
}

data class LocalizedString(
    private val values: Map<Language, String>
) {
    init {
        val defaultTranslation = valueForLanguageCode(SupportedLanguage.defaultLanguage.code)
        if (defaultTranslation == null) {
            throw RuntimeException("Please provide an english translation!")
        }
    }

    fun valueForLanguageCode(code: String): String? {
        // First, see if we've got something for this exact language code
        val exactMatch = value { it.code == code }
        if (exactMatch != null) {
            return exactMatch
        }

        // Next, see if there's something where the passed-in code starts with a language prefix
        val partialMatchOfLongerCode = value { code.startsWith(it.code) }
        if (partialMatchOfLongerCode != null) {
            return partialMatchOfLongerCode
        }

        // Finally, see if there's something where the passed in-code is the prefix for a language
        val partialMatchOfShorterCode = value { it.code.startsWith(code) }
        return partialMatchOfShorterCode
    }

    private fun value(validation: (Language) -> Boolean): String? {
        val language = values.keys.firstOrNull { validation(it) }
        return if (language != null) {
            values[language]
        } else {
            null
        }
    }

    val defaultValue: String
        get() = valueForLanguageCode(English.All().code)!!

    val currentLanguageValue: String?
        get() = valueForLanguageCode(currentLanguageCode())

    val value: String
        get() = currentLanguageValue ?: defaultValue
}


