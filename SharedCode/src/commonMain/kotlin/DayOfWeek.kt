package no.bakkenbaeck.mpp.mobile

import no.bakkenbaeck.mpp.mobile.localization.Localized

enum class DayOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday;

    companion object {
        val weekdays = arrayOf(Monday, Tuesday, Wednesday, Thursday, Friday)
        val weekendDays = arrayOf(Saturday, Sunday)
    }

    val localizedName: String
        get() = when(this) {
            Monday -> Localized.monday
            Tuesday -> Localized.tuesday
            Wednesday -> Localized.wednesday
            Thursday -> Localized.thursday
            Friday -> Localized.friday
            Saturday -> Localized.saturday
            Sunday -> Localized.sunday
        }
}