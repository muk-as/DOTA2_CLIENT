"use strict";
/// <reference path="../dota.d.ts" />
var Async;
(function (Async) {
    /**
     * Returns a `Promise` that will resolve after `fDelay` seconds.
     */
    function Delay(fDelay) {
        return new Promise(resolve => $.Schedule(fDelay, () => resolve()));
    }
    Async.Delay = Delay;
    /**
     * Returns a `Promise` that will resolve during the next frame.
     */
    function NextFrame() {
        return Delay(0.0);
    }
    Async.NextFrame = NextFrame;
    function UnhandledEvent(sEvent, ...opts) {
        let predicate = null;
        if (typeof opts[0] === "function")
            predicate = opts[0];
        else if (opts.length > 0) {
            predicate = function (...args) {
                for (let i = 0; i < opts.length; i++) {
                    const opt = opts[i];
                    const arg = args[i];
                    if (opt !== arg)
                        return false;
                }
                return true;
            };
        }
        return new Promise(resolve => {
            const nHandlerId = $.RegisterForUnhandledEvent(sEvent, function (...args) {
                if (predicate == null || predicate(...args)) {
                    $.UnregisterForUnhandledEvent(sEvent, nHandlerId);
                    resolve(args);
                }
            });
        });
    }
    Async.UnhandledEvent = UnhandledEvent;
    /**
     * A controller object that allows you to abort any process observing the `signal` member.
     */
    class AbortController {
        signal;
        _aborted = false;
        constructor() {
            const controller = this;
            this.signal = { get aborted() { return controller._aborted; } };
        }
        abort() {
            this._aborted = true;
        }
    }
    Async.AbortController = AbortController;
    function Condition(predicate, abortSignal) {
        return new Promise(async (resolve) => {
            while (abortSignal === undefined || !abortSignal.aborted) {
                if (predicate()) {
                    resolve();
                    return;
                }
                await NextFrame();
            }
        });
    }
    Async.Condition = Condition;
    /**
     * Runs the `sequenceFn`, awaiting the result of every yield, and not resuming the `sequenceFn` if `abortSignal` has aborted.
     * Returns a `Promise` that resolve `true` on completion or `false` if `abortSignal` was aborted.
     */
    function RunSequence(sequenceFn, abortSignal) {
        return new Promise(async (resolve) => {
            const generator = sequenceFn(abortSignal || new Async.AbortController().signal);
            let value;
            while (true) {
                const iterResult = await generator.next(value);
                if (iterResult.done) {
                    resolve(true);
                    return;
                }
                value = await iterResult.value;
                if (abortSignal && abortSignal.aborted) {
                    resolve(false);
                    return;
                }
            }
        });
    }
    Async.RunSequence = RunSequence;
    /**
     * Utility class for scheduling relative to a point in time.
     * @example
     * const timestamp = new TimeStamp();
     * await timestamp.Delay( 1 );
     * $.Msg( "1 second later" );
     * await timestamp.Delay( 2 );
     * $.Msg( "2 seconds later" );
     * await timestamp.Delay( 3 );
     * $.Msg( "3 seconds later" );
     */
    class TimeStamp {
        frameTime = $.FrameTime();
        /**
         * Schedule a function to be run later, relative to when this `TimeStamp` was created.
         */
        Schedule(fDelay, fn) {
            const fDelayFromNow = fDelay - ($.FrameTime() - this.frameTime);
            $.Schedule(fDelayFromNow, fn);
        }
        Delay(fDelay, value) {
            return new Promise(resolve => this.Schedule(fDelay, () => resolve(value)));
        }
    }
    Async.TimeStamp = TimeStamp;
})(Async || (Async = {}));
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYXN5bmMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9jb21tb24vYXN5bmMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUVyQyxJQUFVLEtBQUssQ0FtTGQ7QUFuTEQsV0FBVSxLQUFLO0lBRVg7O09BRUc7SUFDSCxTQUFnQixLQUFLLENBQUcsTUFBYztRQUVsQyxPQUFPLElBQUksT0FBTyxDQUFRLE9BQU8sQ0FBQyxFQUFFLENBQUMsQ0FBQyxDQUFDLFFBQVEsQ0FBRSxNQUFNLEVBQUUsR0FBRyxFQUFFLENBQUMsT0FBTyxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBQ2pGLENBQUM7SUFIZSxXQUFLLFFBR3BCLENBQUE7SUFFRDs7T0FFRztJQUNILFNBQWdCLFNBQVM7UUFFckIsT0FBTyxLQUFLLENBQUUsR0FBRyxDQUFFLENBQUM7SUFDeEIsQ0FBQztJQUhlLGVBQVMsWUFHeEIsQ0FBQTtJQW9CRCxTQUFnQixjQUFjLENBQXNDLE1BQVMsRUFBRSxHQUFHLElBQVc7UUFFekYsSUFBSSxTQUFTLEdBQTJFLElBQUksQ0FBQztRQUM3RixJQUFLLE9BQU8sSUFBSSxDQUFFLENBQUMsQ0FBRSxLQUFLLFVBQVU7WUFDaEMsU0FBUyxHQUFHLElBQUksQ0FBRSxDQUFDLENBQUUsQ0FBQzthQUNyQixJQUFLLElBQUksQ0FBQyxNQUFNLEdBQUcsQ0FBQyxFQUN6QjtZQUNJLFNBQVMsR0FBRyxVQUFXLEdBQUcsSUFBeUM7Z0JBRS9ELEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxJQUFJLENBQUMsTUFBTSxFQUFFLENBQUMsRUFBRSxFQUNyQztvQkFDSSxNQUFNLEdBQUcsR0FBRyxJQUFJLENBQUUsQ0FBQyxDQUFFLENBQUM7b0JBQ3RCLE1BQU0sR0FBRyxHQUFHLElBQUksQ0FBRSxDQUFDLENBQUUsQ0FBQztvQkFDdEIsSUFBSyxH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