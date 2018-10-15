package no.bakkenbaeck.kotlinnativetest

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import no.bakkenbaeck.mpp.mobile.DayOfWeek
import no.bakkenbaeck.mpp.mobile.HoursOfOperation
import no.bakkenbaeck.mpp.mobile.createApplicationScreenMessage

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        findViewById<TextView>(R.id.main_text).text = createApplicationScreenMessage()


        val hours = HoursOfOperation.Weekdays(10.0f, 25f)

        findViewById<TextView>(R.id.hours_text).text = hours.toString()
        findViewById<TextView>(R.id.is_open_text).text = hours.isOpenText(DayOfWeek.Saturday, 21.5f)
    }
}
