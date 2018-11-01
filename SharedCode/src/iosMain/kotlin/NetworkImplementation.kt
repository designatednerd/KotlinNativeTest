package no.bakkenbaeck.mpp.mobile

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Runnable
import platform.Foundation.NSRunLoop
import platform.Foundation.performBlock
import kotlin.coroutines.CoroutineContext

internal actual val ApplicationDispatcher: CoroutineDispatcher = RunLoopDispatcher()

internal class RunLoopDispatcher: CoroutineDispatcher() {

    override fun dispatch(context: CoroutineContext, block: Runnable) {
        NSRunLoop.mainRunLoop().performBlock {
            block.run()
        }
    }
}