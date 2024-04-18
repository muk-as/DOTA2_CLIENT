"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
let gAsyncAbort = null;
function _ResetAnimation(popup) {
    if (gAsyncAbort !== null) {
        gAsyncAbort.abort();
        gAsyncAbort = null;
    }
    for (var i = 1; i <= 4; ++i) {
        popup.RemoveClass('StampClaimed' + i);
        popup.RemoveClass('AnimateStamp' + i);
        popup.RemoveClass('StampHighlight' + i);
    }
    popup.RemoveClass('AnimateStamp');
    popup.ApplyStyles(true);
}
function* _StampAnimation(popup) {
    var level = popup.GetLevel();
    for (var i = 1; i < level; ++i) {
        popup.AddClass('StampClaimed' + i);
    }
    // Wait one second before we do anything
    yield Async.Delay(1);
    var timestampStart = new Async.TimeStamp();
    var animLength = 2;
    popup.AddClass('AnimateStamp' + level);
    popup.AddClass('AnimateStamp');
    // Start the stamp sfx a bit early
    yield timestampStart.Delay(animLength * 0.4 - 0.05);
    $.DispatchEvent('PlaySoundEffect', 'HeroBadgeLevelUpReward.ShowReward');
    //yield Async.Delay(2 * 0.5);
    yield timestampStart.Delay(animLength * 0.5);
    popup.AddClass('StampClaimed' + level);
    popup.AddClass('StampHighlight' + level);
    yield timestampStart.Delay(animLength);
    //yield Async.Delay(2 * 0.5);
}
/* Called from XML */
function StartStampAnimation() {
    // hotload: clear any old state
    const popup = $.GetContextPanel();
    _ResetAnimation(popup);
    // play new animation
    gAsyncAbort = new Async.AbortController();
    Async.RunSequence(function* () { yield* _StampAnimation(popup); }, gAsyncAbort.signal);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfcG9wdXBfY3Jvd25mYWxsX2NhbmR5X3Nob3BfdXBncmFkZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2JhdHRsZV9wYXNzL2Nyb3duZmFsbC9icF9wb3B1cF9jcm93bmZhbGxfY2FuZHlfc2hvcF91cGdyYWRlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsOENBQThDO0FBTzlDLElBQUksV0FBVyxHQUFpQyxJQUFJLENBQUM7QUFFckQsU0FBUyxlQUFlLENBQUMsS0FBdUM7SUFFL0QsSUFBSSxXQUFXLEtBQUssSUFBSSxFQUFFO1FBQ3pCLFdBQVcsQ0FBQyxLQUFLLEVBQUUsQ0FBQztRQUNwQixXQUFXLEdBQUcsSUFBSSxDQUFDO0tBQ25CO0lBRUQsS0FBSyxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxJQUFJLENBQUMsRUFBRSxFQUFFLENBQUMsRUFBRTtRQUM1QixLQUFLLENBQUMsV0FBVyxDQUFDLGNBQWMsR0FBRyxDQUFDLENBQUMsQ0FBQztRQUN0QyxLQUFLLENBQUMsV0FBVyxDQUFDLGNBQWMsR0FBRyxDQUFDLENBQUMsQ0FBQztRQUN0QyxLQUFLLENBQUMsV0FBVyxDQUFDLGdCQUFnQixHQUFHLENBQUMsQ0FBQyxDQUFDO0tBQ3hDO0lBQ0QsS0FBSyxDQUFDLFdBQVcsQ0FBQyxjQUFjLENBQUMsQ0FBQztJQUNsQyxLQUFLLENBQUMsV0FBVyxDQUFDLElBQUksQ0FBQyxDQUFDO0FBQ3pCLENBQUM7QUFFRCxRQUFRLENBQUMsQ0FBQyxlQUFlLENBQUMsS0FBdUM7SUFFaEUsSUFBSSxLQUFLLEdBQUcsS0FBSyxDQUFDLFFBQVEsRUFBRSxDQUFDO0lBRTdCLEtBQUssSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxLQUFLLEVBQUUsRUFBRSxDQUFDLEVBQUU7UUFDL0IsS0FBSyxDQUFDLFFBQVEsQ0FBQyxjQUFjLEdBQUcsQ0FBQyxDQUFDLENBQUM7S0FDbkM7SUFFRCx3Q0FBd0M7SUFDeEMsTUFBTSxLQUFLLENBQUMsS0FBSyxDQUFDLENBQUMsQ0FBQyxDQUFDO0lBRXJCLElBQUksY0FBYyxHQUFHLElBQUksS0FBSyxDQUFDLFNBQVMsRUFBRSxDQUFDO0lBQzNDLElBQUksVUFBVSxHQUFHLENBQUMsQ0FBQztJQUVuQixLQUFLLENBQUMsUUFBUSxDQUFDLGNBQWMsR0FBRyxLQUFLLENBQUMsQ0FBQztJQUN2QyxLQUFLLENBQUMsUUFBUSxDQUFDLGNBQWMsQ0FBQyxDQUFDO0lBRS9CLGtDQUFrQztJQUNsQyxNQUFNLGNBQWMsQ0FBQyxLQUFLLENBQUMsVUFBVSxHQUFHLEdBQUcsR0FBRyxJQUFJLENBQUMsQ0FBQztJQUNwRCxDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLG1DQUFtQyxDQUFDLENBQUM7SUFFeEUsNkJBQTZCO0lBQzdCLE1BQU0sY0FBYyxDQUFDLEtBQUssQ0FBQyxVQUFVLEdBQUcsR0FBRyxDQUFDLENBQUM7SUFDN0MsS0FBSyxDQUFDLFFBQVEsQ0FBQyxjQUFjLEdBQUcsS0FBSyxDQUFDLENBQUM7SUFDdkMsS0FBSyxDQUFDLFFBQVEsQ0FBQyxnQkFBZ0IsR0FBRyxLQUFLLENBQUMsQ0FBQztJQUV6QyxNQUFNLGNBQWMsQ0FBQyxLQUFLLENBQUMsVUFBVSxDQUFDLENBQUM7SUFDdkMsNkJBQTZCO0FBQzlCLENBQUM7QUFFRCxxQkFBcUI7QUFDckIsU0FBUyxtQkFBbUI7SUFFM0IsK0JBQStCO0lBQy9CLE1BQU0sS0FBSyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQXNDLENBQUM7SUFFdEUsZUFBZSxDQUFDLEtBQUssQ0FBQyxDQUFDO0lBRXZCLHFCQUFxQjtJQUNyQixXQUFXLEdBQUcsSUFBSSxLQUFLLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDMUMsS0FBSyxDQUFDLFdBQVcsQ0FBQyxRQUFRLENBQUMsTUFBTSxLQUFLLENBQUMsQ0FBQyxlQUFlLENBQUMsS0FBSyxDQUFDLENBQUMsQ0FBQyxDQUFDLEVBQUUsV0FBVyxDQUFDLE1BQU0sQ0FBQyxDQUFDO0FBQ3hGLENBQUMifQ==