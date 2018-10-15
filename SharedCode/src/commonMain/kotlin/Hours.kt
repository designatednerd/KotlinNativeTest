package no.bakkenbaeck.mpp.mobile

data class Hours(
    val forDay: DayOfWeek,
    val fromHour: Float,
    val toHour: Float
) {

    val isAllDay: Boolean
        get() = (fromHour == 0.0f) && (toHour == 24.0f)


    val dayString: String
        get() = forDay.name

    val startHourString: String
        get() = if (isAllDay) {
            "24 Hours"
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
            "$startHourString"
        } else {
            "From $startHourString to $endHourString"
        }
    }


    override fun toString(): String {
        return "$dayString: ${hoursString()}"
    }
}