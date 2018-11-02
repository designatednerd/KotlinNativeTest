package no.bakkenbaeck.mpp.mobile.localization


object Localized {
    val helloWorld = StringStorage.helloWorld.value

    val dayHeaderTitle = StringStorage.dayHeaderTitle.value

    val openingHeaderTitle = StringStorage.openingHeaderTitle.value

    val closingHeaderTitle = StringStorage.closingHeaderTitle.value

    val always = StringStorage.always.value

    val monday = StringStorage.monday.value
    val tuesday = StringStorage.tuesday.value
    val wednesday = StringStorage.wednesday.value
    val thursday = StringStorage.thursday.value
    val friday = StringStorage.friday.value
    val saturday = StringStorage.saturday.value
    val sunday = StringStorage.sunday.value

    val yes = StringStorage.yes.value
    val no = StringStorage.no.value

    fun isOpen(onDay: String, atTime: String): String {
        val format = StringStorage.isOpenFormat.value
        val dayReplaced = format.replace("{{1}}", onDay)
        return dayReplaced.replace("{{2}}", atTime)
    }

    fun hours(fromHour: String, toHour: String): String {
        val format = StringStorage.hoursFormat.value
        val fromReplaced = format.replace("{{1}}", fromHour)
        return fromReplaced.replace("{{2}}", toHour)
    }

    fun kotlinRocks(onPlatform: String): String {
        val format = StringStorage.kotlinRocksFormat.value
        return format.replace("{{1}}", onPlatform)
    }
}
