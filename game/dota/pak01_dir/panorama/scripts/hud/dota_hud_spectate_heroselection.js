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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfc3BlY3RhdGVfaGVyb3NlbGVjdGlvbi5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3NwZWN0YXRlX2hlcm9zZWxlY3Rpb24udHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEscUNBQXFDO0FBRXJDLDBCQUEwQjtBQUMxQixTQUFTLFlBQVksQ0FBRSxTQUFpQixFQUFFLFdBQW1CO0lBRTVELGlGQUFpRjtJQUVqRixJQUFLLFNBQVMsSUFBSSxDQUFDLEVBQ25CO1FBQ0MsQ0FBQyxDQUFFLE9BQU8sQ0FBRyxDQUFDLFdBQVcsQ0FBRSxTQUFTLENBQUUsQ0FBQztRQUN2QyxNQUFNLGlCQUFpQixHQUFHLENBQUMsQ0FBRSxlQUFlLENBQXNCLENBQUM7UUFDbkUsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxnQ0FBZ0MsRUFBRSxjQUFjLEVBQUUsU0FBUyxHQUFHLGNBQWMsR0FBRyxXQUFXLEVBQUUsR0FBRyxDQUFFLENBQUM7UUFDbkgsaUJBQWlCLENBQUMsZUFBZSxDQUFFLFlBQVksR0FBRyxXQUFXLEVBQUUsTUFBTSxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQzVFLENBQUMsQ0FBQyxhQUFhLENBQUUsVUFBVSxFQUFFLENBQUMsQ0FBRSx3QkFBd0IsQ0FBRSxFQUFFLG9CQUFvQixDQUFFLENBQUM7UUFDbkYsaUJBQWlCLENBQUMsZUFBZSxDQUFFLFdBQVcsR0FBRyxTQUFTLEdBQUcsR0FBRyxHQUFHLFdBQVcsRUFBRSxNQUFNLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDN0YsaUJBQWlCLENBQUMsZUFBZSxDQUFFLFdBQVcsR0FBRyxTQUFTLEdBQUcsR0FBRyxHQUFHLFdBQVcsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7S0FDOUY7U0FDSSxJQUFLLFNBQVMsSUFBSSxDQUFDLEVBQ3hCO1FBQ0MsQ0FBQyxDQUFFLE9BQU8sQ0FBRyxDQUFDLFdBQVcsQ0FBRSxTQUFTLENBQUUsQ0FBQztRQUN2QyxNQUFNLGNBQWMsR0FB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