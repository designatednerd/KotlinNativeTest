package no.bakkenbaeck.kotlinnativetest

import android.os.Bundle
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import com.google.android.material.button.MaterialButton
import no.bakkenbaeck.mpp.mobile.DayOfWeek
import no.bakkenbaeck.mpp.mobile.HoursOfOperation
import no.bakkenbaeck.mpp.mobile.createApplicationScreenMessage
import no.bakkenbaeck.mpp.mobile.styles.ButtonStyle
import no.bakkenbaeck.mpp.mobile.styles.StaticTextStyle

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        findViewById<TextView>(R.id.main_text).apply {
            text = createApplicationScreenMessage()
            applyStyle(StaticTextStyle.Headline())
        }

        val hours = HoursOfOperation.Weekdays(10.0f, 25f)

        findViewById<TextView>(R.id.hours_text).text = hours.toString()
        findViewById<TextView>(R.id.is_open_text).text = hours.isOpenText(DayOfWeek.Saturday, 21.5f)

        findViewById<MaterialButton>(R.id.button).apply {
            applyStyle(ButtonStyle.CallToAction())
            text = "HELLO"
        }
    }
}
