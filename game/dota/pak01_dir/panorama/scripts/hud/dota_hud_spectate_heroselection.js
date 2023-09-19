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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfc3BlY3RhdGVfaGVyb3NlbGVjdGlvbi5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3NwZWN0YXRlX2hlcm9zZWxlY3Rpb24udHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUVyQywwQkFBMEI7QUFDMUIsU0FBUyxZQUFZLENBQUUsU0FBaUIsRUFBRSxXQUFtQjtJQUU1RCxpRkFBaUY7SUFFakYsSUFBSyxTQUFTLElBQUksQ0FBQyxFQUNuQjtRQUNDLENBQUMsQ0FBRSxPQUFPLENBQUcsQ0FBQyxXQUFXLENBQUUsU0FBUyxDQUFFLENBQUM7UUFDdkMsTUFBTSxpQkFBaUIsR0FBRyxDQUFDLENBQUUsZUFBZSxDQUFzQixDQUFDO1FBQ25FLENBQUMsQ0FBQyxhQUFhLENBQUUsZ0NBQWdDLEVBQUUsY0FBYyxFQUFFLFNBQVMsR0FBRyxjQUFjLEdBQUcsV0FBVyxFQUFFLEdBQUcsQ0FBRSxDQUFDO1FBQ25ILGlCQUFpQixDQUFDLGVBQWUsQ0FBRSxZQUFZLEdBQUcsV0FBVyxFQUFFLE1BQU0sRUFBRSxFQUFFLENBQUUsQ0FBQztRQUM1RSxDQUFDLENBQUMsYUFBYSxDQUFFLFVBQVUsRUFBRSxDQUFDLENBQUUsd0JBQXdCLENBQUUsRUFBRSxvQkFBb0IsQ0FBRSxDQUFDO1FBQ25GLGlCQUFpQixDQUFDLGVBQWUsQ0FBRSxXQUFXLEdBQUcsU0FBUyxHQUFHLEdBQUcsR0FBRyxXQUFXLEVBQUUsTUFBTSxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQzdGLGlCQUFpQixDQUFDLGVBQWUsQ0FBRSxXQUFXLEdBQUcsU0FBUyxHQUFHLEdBQUcsR0FBRyxXQUFXLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0tBQzlGO1NBQ0ksSUFBSyxTQUFTLElBQUksQ0FBQyxFQUN4QjtRQUNDLENBQUMsQ0FBRSxPQUFPLENBQUcsQ0FBQyxXQUFXLENBQUUsU0FBUyxDQUFFLENBQUM7UUFDdkMsTUFBTSxjQUFjLEdB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