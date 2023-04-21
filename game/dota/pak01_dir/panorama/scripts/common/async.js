/// <reference path="../../../../core/panorama/scripts/index.d.ts" />
var Async;
(function (Async) {
    function Delay(fDelay, value) {
        return new Promise(resolve => $.Schedule(fDelay, () => resolve(value)));
    }
    Async.Delay = Delay;
    /**
     * Returns a `Promise` that will resolve during the next frame.
     */
    function NextFrame() {
        return Delay(0.0);
    }
    Async.NextFrame = NextFrame;
    /**
     * Returns a `Promise` that will resolve the next time the event with name `sEvent` is dispatched.
     * The resolve value is an array of the event parameters.
     */
    function UnhandledEvent(sEvent) {
        return new Promise(resolve => {
            const nHandlerId = $.RegisterForUnhandledEvent(sEvent, function (...args) {
                $.UnregisterForUnhandledEvent(sEvent, nHandlerId);
                resolve(args);
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
     * const start = new TimeStamp();
     * await Async.Delay( 1 ); // Async.Delay is always relative to now
     * $.Msg( "1 second later" );
     * await start.Delay( 2 );
     * $.Msg( "2 seconds later" );
     * await start.Delay( 3 );
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYXN5bmMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJhc3luYy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSxxRUFBcUU7QUFFckUsSUFBVSxLQUFLLENBcUpkO0FBckpELFdBQVUsS0FBSztJQVVYLFNBQWdCLEtBQUssQ0FBSyxNQUFjLEVBQUUsS0FBUztRQUUvQyxPQUFPLElBQUksT0FBTyxDQUFLLE9BQU8sQ0FBQyxFQUFFLENBQUMsQ0FBQyxDQUFDLFFBQVEsQ0FBRSxNQUFNLEVBQUUsR0FBRyxFQUFFLENBQUMsT0FBTyxDQUFFLEtBQU0sQ0FBRSxDQUFFLENBQUUsQ0FBQztJQUN0RixDQUFDO0lBSGUsV0FBSyxRQUdwQixDQUFBO0lBRUQ7O09BRUc7SUFDSCxTQUFnQixTQUFTO1FBRXJCLE9BQU8sS0FBSyxDQUFFLEdBQUcsQ0FBRSxDQUFDO0lBQ3hCLENBQUM7SUFIZSxlQUFTLFlBR3hCLENBQUE7SUFFRDs7O09BR0c7SUFDSCxTQUFnQixjQUFjLENBQW1CLE1BQWM7UUFFM0QsT0FBTyxJQUFJLE9BQU8sQ0FBRSxPQUFPLENBQUMsRUFBRTtZQUUxQixNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUMseUJBQXlCLENBQUUsTUFBTSxFQUFFLFVBQVcsR0FBRyxJQUFPO2dCQUV6RSxDQUFDLENBQUMsMkJBQTJCLENBQUUsTUFBTSxFQUFFLFVBQVUsQ0FBRSxDQUFDO2dCQUNwRCxPQUFPLENBQUUsSUFBSSxDQUFFLENBQUM7WUFDcEIsQ0FBQyxDQUFFLENBQUM7UUFDUixDQUFDLENBQUUsQ0FBQztJQUNSLENBQUM7SUFWZSxvQkFBYyxpQkFVN0IsQ0FBQTtJQVVEOztPQUVHO0lBQ0gsTUFBYSxlQUFlO1FBRXhCLE1BQU0sQ0FBZ0I7UUFDZCxRQUFRLEdBQUcsS0FBSyxDQUFDO1FBQ3pCO1lBRUksTUFBTSxVQUFVLEdBQUcsSUFBSSxDQUFDO1lBQ3hCLElBQUksQ0FBQyxNQUFNLEdBQUcsRUFBRSxJQUFJLE9BQU8sS0FBSyxPQUFPLFVBQVUsQ0FBQyxRQUFRLENBQUMsQ0FBQyxDQUFDLEVBQUUsQ0FBQztRQUNwRSxDQUFDO1FBQ0QsS0FBSztZQUVELElBQUksQ0FBQyxRQUFRLEdBQUcsSUFBSSxDQUFDO1FBQ3pCLENBQUM7S0FDSjtJQWJZLHFCQUFlLGtCQWEzQixDQUFBO0lBRUQsU0FBZ0IsU0FBUyxDQUFFLFNBQXdCLEVBQUUsV0FBMkI7UUFFNUUsT0FBTyxJQUFJLE9BQU8sQ0FBUSxLQUFLLEVBQUMsT0FBTyxFQUFDLEVBQUU7WUFFdEMsT0FBUSxXQUFXLEtBQUssU0FBUyxJQUFJLENBQUMsV0FBVyxDQUFDLE9BQU8sRUFDekQ7Z0JBQ0ksSUFBSyxTQUFTLEVBQUUsRUFDaEI7b0JBQ0ksT0FBTyxFQUFFLENBQUM7b0JBQ1YsT0FBTztpQkFDVjtnQkFDRCxNQUFNLFNBQVMsRUFBRSxDQUFDO2FBQ3JCO1FBQ0wsQ0FBQyxDQUFFLENBQUM7SUFDUixDQUFDO0lBZGUsZUFBUyxZQWN4QixDQUFBO0lBSUQ7OztPQUdHO0lBQ0gsU0FBZ0IsV0FBVyxDQUFFLFVBQXdCLEVBQUUsV0FBaUM7UUFFcEYsT0FBTyxJQUFJLE9BQU8sQ0FBVyxLQUFLLEVBQUMsT0FBTyxFQUFDLEVBQUU7WUFFekMsTUFBTSxTQUFTLEdBQUcsVUFBVSxDQUFFLFdBQVcsSUFBSSxJQUFJLEtBQUssQ0FBQyxlQUFlLEVBQUUsQ0FBQyxNQUFNLENBQUUsQ0FBQztZQUNsRixJQUFJLEtBQWMsQ0FBQztZQUNuQixPQUFRLElBQUksRUFDWjtnQkFDSSxNQUFNLFVBQVUsR0FBRyxNQUFNLFNBQVMsQ0FBQyxJQUFJLENBQUUsS0FBTSxDQUFFLENBQUM7Z0JBQ2xELElBQUssVUFBVSxDQUFDLElBQUksRUFDcEI7b0JBQ0ksT0FBTyxDQUFFLElBQUksQ0FBRSxDQUFDO29CQUNoQixPQUFPO2lCQUNWO2dCQUVELEtBQUssR0FBRyxNQUFNLFVBQVUsQ0FBQyxLQUFLLENBQUM7Z0JBQy9CLElBQUssV0FBVyxJQUFJLFdBQVcsQ0FBQyxPQUFPLEVBQ3ZDO29CQUNJLE9BQU8sQ0FBRSxLQUFLLENBQUUsQ0FBQztvQkFDakIsT0FBTztpQkFDVjthQUNKO1FBQ0wsQ0FBQyxDQUFFLENBQUM7SUFDUixDQUFDO0lBdkJlLGlCQUFXLGNBdUIxQixDQUFBO0lBRUQ7Ozs7Ozs7Ozs7T0FVRztJQUNILE1BQWEsU0FBUztRQUVsQixTQUFTLEdBQUcsQ0FBQyxDQUFDLFNBQVMsRUFBRSxDQUFDO1FBRTFCOztXQUVHO1FBQ0gsUUFBUSxDQUFFLE1BQWMsRUFBRSxFQUFjO1lBRXBDLE1BQU0sYUFBYSxHQUFHLE1BQU0sR0FBRyxDQUFFLENBQUMsQ0FBQyxTQUFTLEVBQUUsR0FBRyxJQUFJLENBQUMsU0FBUyxDQUFFLENBQUM7WUFDbEUsQ0FBQyxDQUFDLFFBQVEsQ0FBRSxhQUFhLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDcEMsQ0FBQztRQVVELEtBQUssQ0FBSyxNQUFjLEVBQUUsS0FBUztZQUUvQixPQUFPLElBQUksT0FBTyxDQUFLLE9BQU8sQ0FBQyxFQUFFLENBQUMsSUFBSSxDQUFDLFFBQVEsQ0FBRSxNQUFNLEVBQUUsR0FBRyxFQUFFLENBQUMsT0FBTyxDQUFFLEtBQU0sQ0FBRSxDQUFFLENBQUUsQ0FBQztRQUN6RixDQUFDO0tBQ0o7SUF6QlksZUFBUyxZQXlCckIsQ0FBQTtBQUNMLENBQUMsRUFySlMsS0FBSyxLQUFMLEtBQUssUUFxSmQifQ==