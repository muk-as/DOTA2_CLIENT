/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />

interface PopupCrownfallCandyShopUpgrade_t extends Panel_t
{
	GetLevel(): number;
}

let gAsyncAbort: Async.AbortController | null = null;

function _ResetAnimation(popup: PopupCrownfallCandyShopUpgrade_t): void
{
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

function* _StampAnimation(popup: PopupCrownfallCandyShopUpgrade_t)
{
	var level = popup.GetLevel();

	for (var i = 1; i < level; ++i) {
		popup.AddClass('StampClaimed' + i);
	}

	                                        
	yield Async.Delay(1);

	var timestampStart = new Async.TimeStamp();
	var animLength = 2;

	popup.AddClass('AnimateStamp' + level);
	popup.AddClass('AnimateStamp');

	                                  
	yield timestampStart.Delay(animLength * 0.4 - 0.05);
	$.DispatchEvent('PlaySoundEffect', 'HeroBadgeLevelUpReward.ShowReward');

	                             
	yield timestampStart.Delay(animLength * 0.5);
	popup.AddClass('StampClaimed' + level);
	popup.AddClass('StampHighlight' + level);

	yield timestampStart.Delay(animLength);
	                             
}

                     
function StartStampAnimation(): void
{
	                               
	const popup = $.GetContextPanel() as PopupCrownfallCandyShopUpgrade_t;

	_ResetAnimation(popup);

	                     
	gAsyncAbort = new Async.AbortController();
	Async.RunSequence(function* () { yield* _StampAnimation(popup); }, gAsyncAbort.signal);
}
