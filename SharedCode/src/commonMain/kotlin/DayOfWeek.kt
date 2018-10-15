package no.bakkenbaeck.mpp.mobile

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
}