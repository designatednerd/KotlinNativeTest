package no.bakkenbaeck.mpp.mobile

import no.bakkenbaeck.mpp.mobile.localization.Localized

data class Hours(
    val forDay: DayOfWeek,
    val fromHour: Float,
    val toHour: Float
) {

    val isAllDay: Boolean
        get() = (fromHour == 0.0f) && (toHour == 24.0f)

    val dayString: String
        get() = forDay.localizedName

    val startHourString: String
        get() = if (isAllDay) {
            Localized.always
        } else {
            fromHour.toHourString()
        }

    val endHourString: String
        get() = if (isAllDay) {
            "-"
        } else {
            toHour.toHourString()
        }

    fun hoursString(): String {
        return if (isAllDay) {
            startHourString
        } else {
            Localized.hours(startHourString, endHourString)
        }
    }


    override fun toString(): String {
        return "$dayString: ${hoursString()}"
    }
}