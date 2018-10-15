package no.bakkenbaeck.mpp.mobile

import kotlin.math.floor
import kotlin.math.roundToInt

fun Float.toHourString(): String {
    val hourType = this.hours()
    val minutes = this.minutes()


    return "${hourType.hour}:${minutes} ${hourType.amPm}"
}

data class HourType(val hour: Int, val amPm: String)

fun Float.hours(): HourType {
    var hours = floor(this).toInt()
    if (hours >= 24) {
        hours %= 24
    }

    return if (hours == 0) {
        HourType(12, "am")
    } else if (hours < 12) {
        HourType(hours, "am")
    } else {
        HourType(hours - 12, "pm")
    }
}

fun Float.minutes(): String {
    val hours = floor(this)
    val minutesFraction = this - hours
    val minutes = (minutesFraction * 60f).roundToInt()

    return "$minutes".padStart(2, '0')
}