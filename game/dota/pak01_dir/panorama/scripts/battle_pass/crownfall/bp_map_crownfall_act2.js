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
function GetProp(sName, bForeground = false) {
    if (bForeground) {
        return GetForegroundPanel().FindChildTraverse(sName);
    }
    else {
        return $("#" + sName);
    }
}
function GetAnimatedImage(sName, bForeground = false) {
    return GetProp(sName, bForeground);
}
/////////////////////////////////////
// Clickable Custom Events
/////////////////////////////////////
function OnPropPlay(sPropName, bForeground, bAutoplay) {
}
/////////////////////////////////////
// Node Completion Custom Events
/////////////////////////////////////
function OnNodeComplete(unNodeId) {
    $.Msg("OnNodeComplete: " + unNodeId);
}
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
        let hFirebugClickable = $.GetContextPanel().GetParent().FindChildrenWithClassTraverse("SnapfireFirebug")[0];
        if (hFirebugClickable != null && hFirebugClickable != undefined) {
            hFirebugClickable.AddClass('Squished');
            $.Schedule(5, function () {
                if (hFirebugClickable) {
                    hFirebugClickable.RemoveClass('Squished');
                }
            });
            $.DispatchEvent('DotaOverworldMapProp_Play', hFirebugClickable, true);
        }
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfbWFwX2Nyb3duZmFsbF9hY3QyLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvYmF0dGxlX3Bhc3MvY3Jvd25mYWxsL2JwX21hcF9jcm93bmZhbGxfYWN0Mi50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFFdkQseURBQXlEO0FBQ3pELFNBQVMsT0FBTztJQUVaLElBQUksZUFBZSxJQUFJLENBQUMsRUFDeEI7UUFDSSxlQUFlLEVBQUUsQ0FBQztLQUNyQjtBQUNMLENBQUM7QUFFRCxxQ0FBcUM7QUFDckMsbUJBQW1CO0FBQ25CLHFDQUFxQztBQUVyQyxxSEFBcUg7QUFDckgsU0FBUyxrQkFBa0I7SUFFdkIsT0FBTyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsU0FBUyxFQUFFLENBQUMscUJBQXFCLENBQUUscUJBQXFCLENBQUUsQ0FBQztBQUMxRixDQUFDO0FBRUQsU0FBUyxPQUFPLENBQUUsS0FBYSxFQUFFLGNBQXVCLEtBQUs7SUFFekQsSUFBSyxXQUFXLEVBQ2hCO1FBQ0ksT0FBTyxrQkFBa0IsRUFBRSxDQUFDLGlCQUFpQixDQUFFLEtBQUssQ0FBYSxDQUFDO0tBQ3JFO1NBRUQ7UUFDSSxPQUFPLENBQUMsQ0FBRSxHQUFHLEdBQUcsS0FBSyxDQUFjLENBQUM7S0FDdkM7QUFDTCxDQUFDO0FBRUQsU0FBUyxnQkFBZ0IsQ0FBRSxLQUFhLEVBQUUsY0FBdUIsS0FBSztJQUVsRSxPQUFPLE9BQU8sQ0FBRSxLQUFLLEVBQUUsV0FBVyxDQUEwQixDQUFDO0FBQ2pFLENBQUM7QUFFRCxxQ0FBcUM7QUFDckMsMEJBQTBCO0FBQzFCLHFDQUFxQztBQUNyQyxTQUFTLFVBQVUsQ0FBRSxTQUFpQixFQUFFLFdBQW9CLEVBQUUsU0FBa0I7QUFFaEYsQ0FBQztBQUVELHFDQUFxQztBQUNyQyxnQ0FB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