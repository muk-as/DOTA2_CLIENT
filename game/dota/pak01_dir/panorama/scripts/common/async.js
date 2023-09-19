"use strict";
/// <reference path="../../../../core/panorama/scripts/index.d.ts" />
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYXN5bmMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJhc3luYy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUVBQXFFO0FBRXJFLElBQVUsS0FBSyxDQW1MZDtBQW5MRCxXQUFVLEtBQUs7SUFFWDs7T0FFRztJQUNILFNBQWdCLEtBQUssQ0FBRSxNQUFjO1FBRWpDLE9BQU8sSUFBSSxPQUFPLENBQVEsT0FBTyxDQUFDLEVBQUUsQ0FBQyxDQUFDLENBQUMsUUFBUSxDQUFFLE1BQU0sRUFBRSxHQUFHLEVBQUUsQ0FBQyxPQUFPLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFDakYsQ0FBQztJQUhlLFdBQUssUUFHcEIsQ0FBQTtJQUVEOztPQUVHO0lBQ0gsU0FBZ0IsU0FBUztRQUVyQixPQUFPLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUN4QixDQUFDO0lBSGUsZUFBUyxZQUd4QixDQUFBO0lBb0JELFNBQWdCLGNBQWMsQ0FBbUIsTUFBYyxFQUFFLEdBQUcsSUFBVztRQUUzRSxJQUFJLFNBQVMsR0FBeUMsSUFBSSxDQUFDO1FBQzNELElBQUssT0FBTyxJQUFJLENBQUMsQ0FBQyxDQUFDLEtBQUssVUFBVTtZQUM5QixTQUFTLEdBQUcsSUFBSSxDQUFDLENBQUMsQ0FBQyxDQUFDO2FBQ25CLElBQUssSUFBSSxDQUFDLE1BQU0sR0FBRyxDQUFDLEVBQ3pCO1lBQ0ksU0FBUyxHQUFHLFVBQVcsR0FBRyxJQUFTO2dCQUUvQixLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsSUFBSSxDQUFDLE1BQU0sRUFBRSxDQUFDLEVBQUUsRUFDckM7b0JBQ0ksTUFBTSxHQUFHLEdBQUcsSUFBSSxDQUFDLENBQUMsQ0FBQyxDQUFDO29CQUNwQixNQUFNLEdBQUcsR0FBRyxJQUFJLENBQUMsQ0FBQyxDQUFDLENBQUM7b0JBQ3BCLElBQUssR0FBRyxLQUFLLEdBQUc7d0JBQ1osT0FBTyxLQUFLLENBQUM7aUJBQ3BCO2dCQUNELE9BQU8s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