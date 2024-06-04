"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
// this gets called once when the overworld map is loaded
function MapInit() {
    if (g_PuffballTimer == 0) {
        UpdatePuffballs();
    }
}
/////////////////////////////////////
// Helper Functions
/////////////////////////////////////
// Events are sent to the background panel by default, so we need to grab the foreground panel to affect things there
function GetForegroundPanel() {
    return $.GetContextPanel().GetParent().FindChildInLayoutFile("MapForegroundLayers");
}
function GetAnimatedImage(sName, bForeground = false) {
    if (bForeground) {
        return GetForegroundPanel().FindChildTraverse(sName);
    }
    else {
        return $("#" + sName);
    }
}
/////////////////////////////////////
// Node Completion Custom Events
/////////////////////////////////////
function OnNodeComplete(unNodeId) {
    $.Msg("OnNodeComplete: " + unNodeId);
}
/////////////////////////////////////
// Node Completion Custom Events
/////////////////////////////////////
function HideCometUntilImpact(unNodeId) {
    $.Msg("HideCometUntilImpact");
    $.GetContextPanel().SetHasClass("HideCometCrater", true);
}
/////////////////////////////////////
// Encounter Code
/////////////////////////////////////
let g_PuffballTimer = 0;
function UpdatePuffballs() {
    //$.Msg("updating puffballs...")
    var dashboard = $.GetContextPanel().FindAncestor("Dashboard");
    let vecPuffballs = dashboard.FindChildrenWithClassTraverse("SnapfirePuffball");
    let nVisible1 = Math.floor(Math.random() * vecPuffballs.length);
    let nVisible2 = Math.floor(Math.random() * vecPuffballs.length);
    for (let pInd = 0; pInd < vecPuffballs.length; ++pInd) {
        if (pInd == nVisible1) {
            //$.Msg("puffball "+pInd+" is active")
        }
        vecPuffballs[pInd].SetHasClass("PuffballVisible", pInd == nVisible1 || pInd == nVisible2);
    }
    g_PuffballTimer = $.Schedule(25, function () {
        UpdatePuffballs();
    });
}
function FirebugActivate() {
    if (g_FirebugSlowApproach == true) {
        $.Msg("ACTIVATING!!!!!");
        let hFirebugClickable = $.GetContextPanel().GetParent().FindChildrenWithClassTraverse("SnapfireFirebug")[0];
        if (hFirebugClickable != null && hFirebugClickable != undefined) {
            hFirebugClickable.AddClass('Squished');
            $.Schedule(5, function () {
                if (hFirebugClickable) {
                    hFirebugClickable.RemoveClass('Squished');
                }
            });
        }
        $.DispatchEvent('DotaOverworldMapProp_Play', true);
    }
    else {
        FirebugFly();
    }
}
let g_FirebugTimer1 = 0;
let g_FirebugTimer2 = 0;
// multiplier for how easy it should be to click on the firebug
let g_flFirebugExhaustion = 1;
let g_vFirebugStartPosition = { x: 0, y: 0, z: 0 };
function Vec2Str(v) {
    return "[" + v.x + ", " + v.y + ", " + v.z + "]";
}
let g_FirebugCursorHistory = new Array();
let g_FirebugSlowApproach = false;
function FirebugBorderMouseOver() {
    if (g_FirebugTimer1 != null && g_FirebugTimer1 > 0) {
        $.CancelScheduled(g_FirebugTimer1);
    }
    FirebugBorderUpdate();
}
function GetMaxDist(arrCursorHistory, v) {
    var flMaxDist = 0;
    for (var vCur of arrCursorHistory) {
        flMaxDist = Math.max(Game.Length2D(v, vCur), flMaxDist);
    }
    return flMaxDist;
}
function FirebugBorderUpdate() {
    let v2Cursor = GameUI.GetCursorPosition();
    var vCursor = { x: v2Cursor[0], y: v2Cursor[1], z: 0 };
    if (g_FirebugCursorHistory.length > 10) {
        g_FirebugCursorHistory.shift();
    }
    g_FirebugCursorHistory.push(vCursor);
    let hMap = $.GetContextPanel().FindAncestor("Map");
    if (hMap == null) {
        return;
    }
    let hFirebug = $.GetContextPanel().FindChildTraverse("FirebugCrawlingState");
    if (hFirebug == null || hFirebug == undefined) {
        return;
    }
    let flMapScale = 1.0;
    if (hMap.BHasClass("ZoomedOut")) {
        flMapScale = 0.45;
    }
    let vTemp = hFirebug.GetPositionWithinWindow();
    vTemp.x += hFirebug.actuallayoutwidth * flMapScale / 2;
    vTemp.y += hFirebug.actuallayoutheight * flMapScale / 2;
    var vFirebugPos = { x: vTemp.x, y: vTemp.y, z: 0 };
    let flMaxDist = GetMaxDist(g_FirebugCursorHistory, vFirebugPos);
    let flSlowThreshold = g_flFirebugExhaustion * flMapScale * hFirebug.actuallayoutwidth;
    g_FirebugSlowApproach = g_FirebugCursorHistory.length > 9 && flMaxDist < flSlowThreshold;
    let flDistToFirebug = Game.Length2D(vCursor, vFirebugPos);
    //$.Msg("dist to firebug "+Vec2Str(vCursor)+" "+Vec2Str(vFirebugPos)+" "+flDistToFirebug);
    if (flDistToFirebug < 500) {
        g_FirebugTimer1 = $.Schedule(0.15, function () {
            FirebugBorderUpdate();
        });
    }
    else {
        g_FirebugCursorHistory = new Array();
    }
}
function FirebugFly() {
    if (!g_FirebugSlowApproach) {
        let hMap = $.GetContextPanel().FindAncestor("Map");
        if (hMap == null) {
            return;
        }
        let hFirebug = $.GetContextPanel().FindChildTraverse("FirebugCrawlingState");
        if (hFirebug == null || hFirebug == undefined) {
            return;
        }
        let flMapScale = 1.0;
        if (hMap.BHasClass("ZoomedOut")) {
            flMapScale = 0.45;
        }
        let hFirebugClickable = $.GetContextPanel().GetParent().FindChildrenWithClassTraverse("SnapfireFirebug")[0];
        hFirebugClickable.AddClass('Flying');
        let vTemp = hFirebug.GetPositionWithinWindow();
        vTemp.x += hFirebug.actuallayoutwidth * flMapScale / 2;
        vTemp.y += hFirebug.actuallayoutheight * flMapScale / 2;
        var vFirebugPos = { x: vTemp.x, y: vTemp.y, z: 0 };
        if (g_vFirebugStartPosition.x == 0 && g_vFirebugStartPosition.y == 0) {
            g_vFirebugStartPosition = vFirebugPos;
        }
        let vCursor = GameUI.GetCursorPosition();
        //$.Msg( "cursor " + vCursor[0] + " " + vCursor[1] );
        //$.Msg( "vFirebugPos   " + vFirebugPos.x + " " + vFirebugPos.y );
        let flDistMult = 70.0;
        let flDeltaX = flDistMult * (vFirebugPos.x - vCursor[0]);
        let flDeltaY = flDistMult * (vFirebugPos.y - vCursor[1]);
        let vDelta = Game.Normalized({ x: flDeltaX, y: flDeltaY, z: 0 });
        let flDistFromStart = Game.Length2D(g_vFirebugStartPosition, vFirebugPos);
        //$.Msg("dist from start: "+flDistFromStart+" "+Vec2Str(g_vFirebugStartPosition)+" "+Vec2Str(vFirebugPos) )
        if (flDistFromStart > 350 * flMapScale) {
            vDelta = Game.Normalized({ x: g_vFirebugStartPosition.x - vFirebugPos.x, y: g_vFirebugStartPosition.y - vFirebugPos.y, z: 0 });
        }
        vDelta[0] *= flDistMult;
        vDelta[1] *= flDistMult;
        let vLocalPos = hFirebugClickable.GetPosition(false);
        hFirebugClickable.SetPositionInPixels(vLocalPos.x + vDelta[0], vLocalPos.y + vDelta[1], 0);
        g_flFirebugExhaustion = Math.min(4, g_flFirebugExhaustion + 0.05);
        $.DispatchEvent('PlaySoundEffect', 'crownfall.map.click.SnapfireFirebugMove');
        if (g_FirebugTimer2 != null && g_FirebugTimer2 > 0) {
            $.CancelScheduled(g_FirebugTimer2);
        }
        g_FirebugTimer2 = $.Schedule(0.75, function () {
            FirebugStopFlying();
        });
    }
}
function FirebugStopFlying() {
    $.GetContextPanel().RemoveClass('Flying');
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfbWFwX2Nyb3duZmFsbF9hY3QyLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvYmF0dGxlX3Bhc3MvY3Jvd25mYWxsL2JwX21hcF9jcm93bmZhbGxfYWN0Mi50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFFdkQseURBQXlEO0FBQ3pELFNBQVMsT0FBTztJQUVaLElBQUksZUFBZSxJQUFJLENBQUMsRUFDeEI7UUFDSSxlQUFlLEVBQUUsQ0FBQztLQUNyQjtBQUNMLENBQUM7QUFFRCxxQ0FBcUM7QUFDckMsbUJBQW1CO0FBQ25CLHFDQUFxQztBQUVyQyxxSEFBcUg7QUFDckgsU0FBUyxrQkFBa0I7SUFFdkIsT0FBTyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsU0FBUyxFQUFFLENBQUMscUJBQXFCLENBQUUscUJBQXFCLENBQUUsQ0FBQztBQUMxRixDQUFDO0FBRUQsU0FBUyxnQkFBZ0IsQ0FBRSxLQUFhLEVBQUUsY0FBdUIsS0FBSztJQUVsRSxJQUFLLFdBQVcsRUFDaEI7UUFDSSxPQUFPLGtCQUFrQixFQUFFLENBQUMsaUJBQWlCLENBQUUsS0FBSyxDQUEwQixDQUFDO0tBQ2xGO1NBRUQ7UUFDSSxPQUFPLENBQUMsQ0FBRSxHQUFHLEdBQUcsS0FBSyxDQUEyQixDQUFDO0tBQ3BEO0FBQ0wsQ0FBQztBQUVELHFDQUFxQztBQUNyQyxnQ0FBZ0M7QUFDaEMscUNBQXFDO0FBQ3JDLFNBQVMsY0FBYyxDQUFFLFFBQWU7SUFFcEMsQ0FBQyxDQUFDLEdBQUcsQ0FBRSxrQkFBa0IsR0FBRyxRQUFRLENBQUUsQ0FBQztBQUMzQyxDQUFDO0FBRUQscUNBQXFDO0FBQ3JDLGdDQUFnQztBQUNoQyxxQ0FBcUM7QUFFckMsU0FBUyxvQkFBb0IsQ0FBQyxRQUFnQjtJQUMxQyxDQUFDLENBQUMsR0FBRyxD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