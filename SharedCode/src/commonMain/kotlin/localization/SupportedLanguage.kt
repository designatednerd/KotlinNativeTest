package no.bakkenbaeck.mpp.mobile.localization

public sealed class SupportedLanguage(override val code: String): Language {
    companion object {
        val defaultLanguage = English.All()
    }
}

public sealed class English(val country: String?):
    SupportedLanguage("en${ if (country != null) "_$country" else "" }") {
    public class All(): English(null)
    public class American: English("US")
    public class British: English("GB")
}
public class Spanish: SupportedLanguage("es")
