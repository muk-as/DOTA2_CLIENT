"use strict";
/// <reference path="../dota.d.ts" />
var Async;
(function (Async) {
    function Delay(fDelay) {
        return new Promise(resolve => $.Schedule(fDelay, () => resolve()));
    }
    Async.Delay = Delay;
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
    class TimeStamp {
        frameTime = $.FrameTime();
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYXN5bmMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9jb21tb24vYXN5bmMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUVyQyxJQUFVLEtBQUssQ0FtTGQ7QUFuTEQsV0FBVSxLQUFLO0lBS1gsU0FBZ0IsS0FBSyxDQUFHLE1BQWM7UUFFbEMsT0FBTyxJQUFJLE9BQU8sQ0FBUSxPQUFPLENBQUMsRUFBRSxDQUFDLENBQUMsQ0FBQyxRQUFRLENBQUUsTUFBTSxFQUFFLEdBQUcsRUFBRSxDQUFDLE9BQU8sRUFBRSxDQUFFLENBQUUsQ0FBQztJQUNqRixDQUFDO0lBSGUsV0FBSyxRQUdwQixDQUFBO0lBS0QsU0FBZ0IsU0FBUztRQUVyQixPQUFPLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUN4QixDQUFDO0lBSGUsZUFBUyxZQUd4QixDQUFBO0lBb0JELFNBQWdCLGNBQWMsQ0FBc0MsTUFBUyxFQUFFLEdBQUcsSUFBVztRQUV6RixJQUFJLFNBQVMsR0FBMkUsSUFBSSxDQUFDO1FBQzdGLElBQUssT0FBTyxJQUFJLENBQUUsQ0FBQyxDQUFFLEtBQUssVUFBVTtZQUNoQyxTQUFTLEdBQUcsSUFBSSxDQUFFLENBQUMsQ0FBRSxDQUFDO2FBQ3JCLElBQUssSUFBSSxDQUFDLE1BQU0sR0FBRyxDQUFDLEVBQ3pCO1lBQ0ksU0FBUyxHQUFHLFVBQVcsR0FBRyxJQUF5QztnQkFFL0QsS0FBTSxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLElBQUksQ0FBQyxNQUFNLEVBQUUsQ0FBQyxFQUFFLEVBQ3JDO29CQUNJLE1BQU0sR0FBRyxHQUFHLElBQUksQ0FBRSxDQUFDLENBQUUsQ0FBQztvQkFDdEIsTUFBTSxHQUFHLEdBQUcsSUFBSSxDQUFFLENBQUMsQ0FBRSxDQUFDO29CQUN0QixJQUFLLEdBQUcsS0FBSyxHQUFHO3dCQUNaLE9B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