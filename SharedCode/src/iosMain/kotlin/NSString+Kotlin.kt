package no.bakkenbaeck.mpp.mobile

import platform.Foundation.NSString
import platform.Foundation.stringByAppendingString

fun NSString.toKotlinString(): String {
    // Warning: Awful hack
    return this.stringByAppendingString("")
}
