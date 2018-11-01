package no.bakkenbaeck.kotlinnativetest

import android.os.Bundle
import android.widget.LinearLayout
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import com.google.android.material.button.MaterialButton
import no.bakkenbaeck.mpp.mobile.DayOfWeek
import no.bakkenbaeck.mpp.mobile.HoursOfOperation
import no.bakkenbaeck.mpp.mobile.HttpBinClient
import no.bakkenbaeck.mpp.mobile.createApplicationScreenMessage
import no.bakkenbaeck.mpp.mobile.styles.ButtonStyle
import no.bakkenbaeck.mpp.mobile.styles.StaticTextStyle

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        HttpBinClient().runGet()
        HttpBinClient().runPost("HELLO ANDROID")

        setContentView(R.layout.activity_main)

        findViewById<TextView>(R.id.main_text).apply {
            text = createApplicationScreenMessage()
            applyStyle(StaticTextStyle.Headline())
        }

        findViewById<TextView>(R.id.is_open_text).apply {
            applyStyle(StaticTextStyle.TextCaption())
        }

        val dayHeader = findViewById<TextView>(R.id.day_header)
        dayHeader.text = HoursOfOperation.dayHeaderTitle()
        val openingHeader = findViewById<TextView>(R.id.opening_header)
        openingHeader.text = HoursOfOperation.openingHeaderTitle()
        val closingHeader = findViewById<TextView>(R.id.closing_header)
        closingHeader.text = HoursOfOperation.closingHeaderTitle()

        val headers = listOf(dayHeader, openingHeader, closingHeader)
        headers.forEach { it.applyStyle(StaticTextStyle.HeadlineSecondary()) }

        val hours = HoursOfOperation.Weekdays(8.0f, 20.0f)
        findViewById<TextView>(R.id.is_open_text).text = hours.isOpenText(DayOfWeek.Saturday, 21.5f)


        val hoursLayout = findViewById<LinearLayout>(R.id.hours_layout)

        hours.hours.forEach {
            val layoutForDay = LinearLayout(baseContext)
            val layoutParams = LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT,
                LinearLayout.LayoutParams.WRAP_CONTENT
            )
            layoutParams.setMargins(0, 4, 0, 0)

            layoutForDay.layoutParams = layoutParams

            val dayTextView = textPrimaryView(it.dayString)
            layoutForDay.addView(dayTextView)

            val openingTextView = textPrimaryView(it.startHourString)
            layoutForDay.addView(openingTextView)

            val closingTextView = textPrimaryView(it.endHourString)
            layoutForDay.addView(closingTextView)

            hoursLayout.addView(layoutForDay)
        }

        hoursLayout.requestLayout()


        findViewById<MaterialButton>(R.id.disable_button).apply {
            applyStyle(ButtonStyle.CallToAction())
        }

        findViewById<MaterialButton>(R.id.enable_button).apply {
            applyStyle(ButtonStyle.Destructive())
        }
    }

    private fun textPrimaryView(withText: String): TextView {
        val textView = TextView(baseContext)
        textView.applyStyle(StaticTextStyle.TextPrimary())
        val layoutParams = LinearLayout.LayoutParams(
            0,
            LinearLayout.LayoutParams.WRAP_CONTENT
        )

        layoutParams.weight = 1.0f/3.0f

        textView.layoutParams = layoutParams

        textView.textAlignment = TextView.TEXT_ALIGNMENT_CENTER
        textView.text = withText

        return textView
    }
}
