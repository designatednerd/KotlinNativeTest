package no.bakkenbaeck.mpp.mobile.localization

object StringStorage {
    val helloWorld = LocalizedString(
        mapOf(
            Pair(English.American(), "Hello, World!"),
            Pair(English.British(), "How ya doin' guv'nor?"),
            Pair(Spanish(), "¡Hola, el mundo!")
        )
    )

    val dayHeaderTitle = LocalizedString(
        mapOf(
            Pair(English.All(), "Day"),
            Pair(Spanish(), "Día")
        )
    )

    val openingHeaderTitle = LocalizedString(
        mapOf(
            Pair(English.All(), "Open at"),
            Pair(Spanish(), "Abierto à")
        )
    )

    val closingHeaderTitle = LocalizedString(
        mapOf(
            Pair(English.All(), "Closed at"),
            Pair(Spanish(), "Cerrado à")
        )
    )

    val monday = LocalizedString(
        mapOf(
            Pair(English.All(), "Monday"),
            Pair(Spanish(), "Lunes")
        )
    )

    val tuesday = LocalizedString(
        mapOf(
            Pair(English.All(), "Tuesday"),
            Pair(Spanish(), "Martes")
        )
    )

    val wednesday = LocalizedString(
        mapOf(
            Pair(English.All(), "Wednesday"),
            Pair(Spanish(), "Miercoles")
        )
    )

    val thursday = LocalizedString(
        mapOf(
            Pair(English.All(), "Thursday"),
            Pair(Spanish(), "Jueves")
        )
    )

    val friday = LocalizedString(
        mapOf(
            Pair(English.All(), "Friday"),
            Pair(Spanish(), "Viernes")
        )
    )

    val saturday = LocalizedString(
        mapOf(
            Pair(English.All(), "Saturday"),
            Pair(Spanish(), "Sabado")
        )
    )

    val sunday = LocalizedString(
        mapOf(
            Pair(English.All(), "Sunday"),
            Pair(Spanish(), "Domingo")
        )
    )

    val isOpenFormat = LocalizedString(
        mapOf(
            Pair(English.All(), "Is open {{1}} at {{2}}: "),
            Pair(Spanish(), "Está abierto {{1}} a {{2}}: ")
        )
    )

    val yes = LocalizedString(
        mapOf(
            Pair(English.All(), "YES"),
            Pair(Spanish(), "SÍ")
        )
    )

    val no = LocalizedString(
        mapOf(
            Pair(English.All(), "NO"),
            Pair(Spanish(), "NO")
        )
    )

    val always = LocalizedString(
        mapOf(
            Pair(English.All(), "24 Hours"),
            Pair(Spanish(), "Todos Horas")
        )
    )

    val hoursFormat = LocalizedString(
        mapOf(
            Pair(English.All(), "From {{1}} to {{2}}"),
            Pair(Spanish(), "De {{1}} a {{2}}")
        )
    )

    val kotlinRocksFormat = LocalizedString(
        mapOf(
            Pair(English.All(), "Kotlin/Native rocks on {{1}}"),
            Pair(Spanish(), "Kotlin/Native rockea en {{1}}")
        )
    )
}