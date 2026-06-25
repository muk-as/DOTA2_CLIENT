"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../common/async.ts" />
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9wdXBfZGFya19jYXJuaXZhbF9jYW5keV9zaG9wX3VwZ3JhZGUuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9ldmVudHMvcG9wdXBfZGFya19jYXJuaXZhbF9jYW5keV9zaG9wX3VwZ3JhZGUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQywyQ0FBMkM7QUFPM0MsSUFBSSxXQUFXLEdBQWlDLElBQUksQ0FBQztBQUVyRCxTQUFTLGVBQWUsQ0FBQyxLQUEwQztJQUVsRSxJQUFJLFdBQVcsS0FBSyxJQUFJLEVBQUU7UUFDekIsV0FBVyxDQUFDLEtBQUssRUFBRSxDQUFDO1FBQ3BCLFdBQVcsR0FBRyxJQUFJLENBQUM7S0FDbkI7SUFFRCxLQUFLLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLElBQUksQ0FBQyxFQUFFLEVBQUUsQ0FBQyxFQUFFO1FBQzVCLEtBQUssQ0FBQyxXQUFXLENBQUMsY0FBYyxHQUFHLENBQUMsQ0FBQyxDQUFDO1FBQ3RDLEtBQUssQ0FBQyxXQUFXLENBQUMsY0FBYyxHQUFHLENBQUMsQ0FBQyxDQUFDO1FBQ3RDLEtBQUssQ0FBQyxXQUFXLENBQUMsZ0JBQWdCLEdBQUcsQ0FBQyxDQUFDLENBQUM7S0FDeEM7SUFDRCxLQUFLLENBQUMsV0FBVyxDQUFDLGNBQWMsQ0FBQyxDQUFDO0lBQ2xDLEtBQUssQ0FBQyxXQUFXLENBQUMsSUFBSSxDQUFDLENBQUM7QUFDekIsQ0FBQztBQUVELFFBQVEsQ0FBQyxDQUFDLGVBQWUsQ0FBQyxLQUEwQztJQUVuRSxJQUFJLEtBQUssR0FBRyxLQUFLLENBQUMsUUFBUSxFQUFFLENBQUM7SUFFN0IsS0FBSyxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLEtBQUssRUFBRSxFQUFFLENBQUMsRUFBRTtRQUMvQixLQUFLLENBQUMsUUFBUSxDQUFDLGNBQWMsR0FBRyxDQUFDLENBQUMsQ0FBQztLQUNuQztJQUVELHdDQUF3QztJQUN4QyxNQUFNLEtBQUssQ0FBQyxLQUFLLENBQUMsQ0FBQyxDQUFDLENBQUM7SUFFckIsSUFBSSxjQUFjLEdBQUcsSUFBSSxLQUFLLENBQUMsU0FBUyxFQUFFLENBQUM7SUFDM0MsSUFBSSxVQUFVLEdBQUcsQ0FBQyxDQUFDO0lBRW5CLEtBQUssQ0FBQyxRQUFRLENBQUMsY0FBYyxHQUFHLEtBQUssQ0FBQyxDQUFDO0lBQ3ZDLEtBQUssQ0FBQyxRQUFRLENBQUMsY0FBYyxDQUFDLENBQUM7SUFFL0Isa0NBQWtDO0lBQ2xDLE1BQU0sY0FBYyxDQUFDLEtBQUssQ0FBQyxVQUFVLEdBQUcsR0FBRyxHQUFHLElBQUksQ0FBQyxDQUFDO0lBQ3BELENBQUMsQ0FBQyxhQUFhLENBQUMsaUJBQWlCLEVBQUUsbUNBQW1DLENBQUMsQ0FBQztJQUV4RSw2QkFBNkI7SUFDN0IsTUFBTSxjQUFjLENBQUMsS0FBSyxDQUFDLFVBQVUsR0FBRyxHQUFHLENBQUMsQ0FBQztJQUM3QyxLQUFLLENBQUMsUUFBUSxDQUFDLGNBQWMsR0FBRyxLQUFLLENBQUMsQ0FBQztJQUN2QyxLQUFLLENBQUMsUUFBUSxDQUFDLGdCQUFnQixHQUFHLEtBQUssQ0FBQyxDQUFDO0lBRXpDLE1BQU0sY0FBYyxDQUFDLEtBQUssQ0FBQyxVQUFVLENBQUMsQ0FBQztJQUN2Qyw2QkFBNkI7QUFDOUIsQ0FBQztBQUVELHFCQUFxQjtBQUNyQixTQUFTLG1CQUFtQjtJQUUzQiwrQkFBK0I7SUFDL0IsTUFBTSxLQUFLLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBeUMsQ0FBQztJQUV6RSxlQUFlLENBQUMsS0FBSyxDQUFDLENBQUM7SUFFdkIscUJBQXFCO0lBQ3JCLFdBQVcsR0FBRyxJQUFJLEtBQUssQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUMxQyxLQUFLLENBQUMsV0FBVyxDQUFDLFFBQVEsQ0FBQyxNQUFNLEtBQUssQ0FBQyxDQUFDLGVBQWUsQ0FBQyxLQUFLLENBQUMsQ0FBQyxDQUFDLENBQUMsRUFBRSxXQUFXLENBQUMsTUFBTSxDQUFDLENBQUM7QUFDeEYsQ0FBQyJ9