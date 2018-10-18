package no.bakkenbaeck.kotlinnativetest

import android.widget.EditText
import com.google.android.material.textfield.TextInputLayout
import no.bakkenbaeck.mpp.mobile.Color


fun EditText.setHintTextColor(color: Color) {
    setHintTextColor(color.toAndroidColor())
}

fun TextInputLayout.setHighlightColor(color: Color) {
    editText?.highlightColor = color.toAndroidColor()
}

fun TextInputLayout.setHintTextColor(color: Color) {
    editText?.setHintTextColor(color)
}

//fun TextInputLayout.setErrorTextColor(color: Color) {
//    settextcolorhint
//}