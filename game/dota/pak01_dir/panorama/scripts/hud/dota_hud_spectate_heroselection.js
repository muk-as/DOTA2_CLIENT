"use strict";
/// <reference path="../dota.d.ts" />
/* Called from C++ Code */
function OnHeroPicked(teamIndex, playerIndex) {
    //$.Msg( "OnHeroPicked " + teamIndex.toString() + " " + playerIndex.toString() );
    if (teamIndex == 0) {
        $('#Row0').RemoveClass('ViewAll');
        const scenePanelRadiant = $('#RadiantScene');
        $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'RadiantScene', teamIndex + '_camera_hero' + playerIndex, 1.5);
        scenePanelRadiant.FireEntityInput('fx_spot_0_' + playerIndex, 'Stop', '');
        $.DispatchEvent('AddStyle', $('#SpectateHeroSelection'), 'RadiantFocusActive');
        scenePanelRadiant.FireEntityInput('fx_tease_' + teamIndex + '_' + playerIndex, 'Stop', '');
        scenePanelRadiant.FireEntityInput('fx_tease_' + teamIndex + '_' + playerIndex, 'Start', '');
    }
    else if (teamIndex == 1) {
        $('#Row1').RemoveClass('ViewAll');
        const scenePanelDire = $('#DireScene');
        $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'DireScene', teamIndex + '_camera_hero' + playerIndex, 1.5);
        scenePanelDire.FireEntityInput('fx_spot_1_' + playerIndex, 'Stop', '');
        $.DispatchEvent('AddStyle', $('#SpectateHeroSelection'), 'DireFocusActive');
        scenePanelDire.FireEntityInput('fx_tease_' + teamIndex + '_' + playerIndex, 'Stop', '');
        scenePanelDire.FireEntityInput('fx_tease_' + teamIndex + '_' + playerIndex, 'Start', '');
    }
    $.DispatchEvent('PlaySoundEffect', 'InspectorCam.Activate');
}
/* Called from C++ Code */
function OnHeroPickStart(teamIndex, playerIndex) {
    //$.Msg( "OnHeroPickStart " + teamIndex.toString() + " " + playerIndex.toString() );
    if (teamIndex == 0) {
        const scenePanelRadiant = $('#RadiantScene');
        scenePanelRadiant.FireEntityInput('fx_spot_' + teamIndex + '_' + playerIndex, 'Stop', '');
        scenePanelRadiant.FireEntityInput('fx_spot_' + teamIndex + '_' + playerIndex, 'Start', '');
    }
    else if (teamIndex == 1) {
        const scenePanelDire = $('#DireScene');
        scenePanelDire.FireEntityInput('fx_spot_' + teamIndex + '_' + playerIndex, 'Stop', '');
        scenePanelDire.FireEntityInput('fx_spot_' + teamIndex + '_' + playerIndex, 'Start', '');
    }
    for (let i = 0; i < 5; i++) {
        $('#BansBackground').RemoveClass('team1slot' + i);
    }
    for (let i = 0; i < 5; i++) {
        $('#BansBackground').RemoveClass('team0slot' + i);
    }
    $.DispatchEvent('AddStyle', $('#BansBackground'), 'team' + teamIndex + 'slot' + playerIndex);
}
/* Called from C++ Code */
function OnHeroSpawned(teamIndex, playerIndex) {
    //$.Msg( "OnHeroSpawned " + teamIndex.toString() + " " + playerIndex.toString() );
    if (teamIndex == 0) {
        const scenePanelRadiant = $('#RadiantScene');
        scenePanelRadiant.FireEntityInput('fx_' + teamIndex + '_' + playerIndex, 'Stop', '');
        scenePanelRadiant.FireEntityInput('fx_' + teamIndex + '_' + playerIndex, 'Start', '');
    }
    else if (teamIndex == 1) {
        const scenePanelDire = $('#DireScene');
        scenePanelDire.FireEntityInput('fx_' + teamIndex + '_' + playerIndex, 'Stop', '');
        scenePanelDire.FireEntityInput('fx_' + teamIndex + '_' + playerIndex, 'Start', '');
    }
}
/* Called from C++ Code */
function OnHeroSpawnedUI(teamIndex, playerIndex) {
    //$.Msg( "OnHeroSpawnedUI " + teamIndex.toString() + " " + playerIndex.toString() );
    if (teamIndex == 0) {
        $('#HeroPickedRadiant').AddClass('ShowPickedLabel');
    }
    else if (teamIndex == 1) {
        $('#HeroPickedDire').AddClass('ShowPickedLabel');
    }
}
/* Called from C++ Code */
function OnHeroSpawnComplete(teamIndex, playerIndex) {
    //$.Msg("OnHeroSpawnComplete " + teamIndex.toString() + " " + playerIndex.toString());
    if (teamIndex == 0) {
        $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'RadiantScene', 'radiant_camera', 1.5);
        $('#Row0').AddClass('ViewAll');
        $('#SpectateHeroSelection').RemoveClass('RadiantFocusActive');
        $('#HeroPickedRadiant').RemoveClass('ShowPickedLabel');
    }
    else if (teamIndex == 1) {
        $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'DireScene', 'dire_camera', 1.5);
        $('#Row1').AddClass('ViewAll');
        $('#SpectateHeroSelection').RemoveClass('DireFocusActive');
        $('#HeroPickedDire').RemoveClass('ShowPickedLabel');
    }
}
function OnHeroBanStart(teamIndex, playerIndex) {
    //$.Msg( "OnHeroBanStart " + teamIndex.toString() + " " + playerIndex.toString() );
}
function OnHeroBanned(teamIndex, playerIndex) {
    //$.Msg( "OnHeroBanned " + teamIndex.toString() + " " + playerIndex.toString() );
}
/* Called from C++ Code */
function OnDraftStateStarted() {
    //$.Msg( "OnDraftStateStarted" );
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfc3BlY3RhdGVfaGVyb3NlbGVjdGlvbi5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2h1ZC9kb3RhX2h1ZF9zcGVjdGF0ZV9oZXJvc2VsZWN0aW9uLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFFckMsMEJBQTBCO0FBQzFCLFNBQVMsWUFBWSxDQUFFLFNBQWlCLEVBQUUsV0FBbUI7SUFFNUQsaUZBQWlGO0lBRWpGLElBQUssU0FBUyxJQUFJLENBQUMsRUFDbkI7UUFDQyxDQUFDLENBQUUsT0FBTyxDQUFHLENBQUMsV0FBVyxDQUFFLFNBQVMsQ0FBRSxDQUFDO1FBQ3ZDLE1BQU0saUJBQWlCLEdBQUcsQ0FBQyxDQUFFLGVBQWUsQ0FBc0IsQ0FBQztRQUNuRSxDQUFDLENBQUMsYUFBYSxDQUFFLGdDQUFnQyxFQUFFLGNBQWMsRUFBRSxTQUFTLEdBQUcsY0FBYyxHQUFHLFdBQVcsRUFBRSxHQUFHLENBQUUsQ0FBQztRQUNuSCxpQkFBaUIsQ0FBQyxlQUFlLENBQUUsWUFBWSxHQUFHLFdBQVcsRUFBRSxNQUFNLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDNUUsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxVQUFVLEVBQUUsQ0FBQyxDQUFFLHdCQUF3QixDQUFHLEVBQUUsb0JBQW9CLENBQUUsQ0FBQztRQUNwRixpQkFBaUIsQ0FBQyxlQUFlLENBQUUsV0FBVyxHQUFHLFNBQVMsR0FBRyxHQUFHLEdBQUcsV0FBVyxFQUFFLE1BQU0sRUFBRSxFQUFFLENBQUUsQ0FBQztRQUM3RixpQkFBaUIsQ0FBQyxlQUFlLENBQUUsV0FBVyxHQUFHLFNBQVMsR0FBRyxHQUFHLEdBQUcsV0FBVyxFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztLQUM5RjtTQUNJLElBQUssU0FBUyxJQUFJLENBQUMsRUFDeEI7UUFDQyxDQUFDLENBQUUsT0FBTyxDQUFH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