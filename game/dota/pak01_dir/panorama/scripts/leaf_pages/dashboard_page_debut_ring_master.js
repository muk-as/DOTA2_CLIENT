"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../common/async.ts" />
/// <reference path="../dota_sequence_actions.ts" />
/**
 * DEBUT PAGE
 */
var g_abort;
var g_soundGuids = [];
function LoadRingmasterLogo() {
    const cp = $.GetContextPanel();
    const bIsChinese = cp.BAscendantHasClass("Language_schinese") || cp.BAscendantHasClass("Language_tchinese");
    //$( "#LogoMovieContainer" )!.BLoadLayoutSnippet( bIsChinese ? "RingmasterTitleChinese" : "RingmasterTitleEnglish" );
}
function StartRingmasterDebut() {
    EndRingmasterDebut();
    g_abort = new Async.AbortController();
    Async.RunSequence(RingmasterSequence, g_abort.signal);
}
function EndRingmasterDebut() {
    if (g_abort) {
        g_abort.abort();
        g_abort = undefined;
    }
    $('#MainContainer').RemoveClass('Initialize');
    $('#ModelBackground')?.RemoveClass('Initialize');
    // $('#ModelForeground')?.RemoveClass('Initialize');
    $('#DebutInformation').RemoveClass('Initialize');
    $('#InformationBody').RemoveClass('Initialize');
    g_soundGuids.forEach(StopUISoundScript);
    g_soundGuids = [];
}
function* RingmasterSequence(abortSignal) {
    $.RegisterForUnhandledEvent("DynamicPropAnimEvent", function (...args) { });
    const pContainer = $('#ModelContainer');
    pContainer.RemoveAndDeleteChildren();
    pContainer.BLoadLayoutSnippet('ModelSnippet');
    const pMain = $('#MainContainer');
    const pScene = $('#ModelBackground');
    //const pDebutFX = $( '#DebutFXPanel' ) as DOTAParticleScenePanel_t;
    yield Async.Delay(0.75);
    $.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
    yield Async.Condition(() => pScene.BHasClass("SceneLoaded"), abortSignal);
    const sceneLoadedTime = new Async.TimeStamp();
    pMain.AddClass('Initialize');
    pScene.AddClass('Initialize');
    g_soundGuids.push(PlayUISoundScript('ringmaster_debut_stinger'));
    g_soundGuids.push(PlayUISoundScript('ringmaster_debut_sfx'));
    //END_ENTITIES.forEach( ent => pScene.FireEntityInput( ent, "Enable" ) );
    //pDebutFX.AddClass( "Initialize" );
    yield Async.Delay(8.3);
    $('#DebutInformation').AddClass('Initialize');
    $('#InformationBody').AddClass('Initialize');
    //pDebutFX.StartParticles();
    yield Async.Delay(8.5);
    $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'ModelBackground', 'hero_camera_post', 0.0);
    $.DispatchEvent('DOTAGlobalSceneSetRootEntity', 'ModelBackground', 'root_post');
    pScene.SetRotateParams(-0.75, 0.75, -0.25, 0.25);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfZGVidXRfcmluZ19tYXN0ZXIuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9sZWFmX3BhZ2VzL2Rhc2hib2FyZF9wYWdlX2RlYnV0X3JpbmdfbWFzdGVyLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLDJDQUEyQztBQUMzQyxvREFBb0Q7QUFFcEQ7O0dBRUc7QUFDSCxJQUFJLE9BQTBDLENBQUM7QUFDL0MsSUFBSSxZQUFZLEdBQWEsRUFBRSxDQUFDO0FBR2hDLFNBQVMsa0JBQWtCO0lBRXZCLE1BQU0sRUFBRSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUMvQixNQUFNLFVBQVUsR0FBRyxFQUFFLENBQUMsa0JBQWtCLENBQUUsbUJBQW1CLENBQUUsSUFBSSxFQUFFLENBQUMsa0JBQWtCLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUNoSCxxSEFBcUg7QUFDekgsQ0FBQztBQUVELFNBQVMsb0JBQW9CO0lBRXpCLGtCQUFrQixFQUFFLENBQUM7SUFFckIsT0FBTyxHQUFHLElBQUksS0FBSyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ3RDLEtBQUssQ0FBQyxXQUFXLENBQUUsa0JBQWtCLEVBQUUsT0FBTyxDQUFDLE1BQU0sQ0FBRSxDQUFDO0FBQzVELENBQUM7QUFFRCxTQUFTLGtCQUFrQjtJQUV2QixJQUFLLE9BQU8sRUFDWjtRQUNJLE9BQU8sQ0FBQyxLQUFLLEVBQUUsQ0FBQztRQUNoQixPQUFPLEdBQUcsU0FBUyxDQUFDO0tBQ3ZCO0lBRUQsQ0FBQyxDQUFFLGdCQUFnQixDQUFHLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ25ELENBQUMsQ0FBRSxrQkFBa0IsQ0FBRSxFQUFFLFdBQVcsQ0FBRSxZQUFZLENBQUUsQ0FBQztJQUNyRCxvREFBb0Q7SUFFcEQsQ0FBQyxDQUFFLG1CQUFtQixDQUFHLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ3RELENBQUMsQ0FBRSxrQkFBa0IsQ0FBRyxDQUFDLFdBQVcsQ0FBRSxZQUFZLENBQUUsQ0FBQztJQUVyRCxZQUFZLENBQUMsT0FBTyxDQUFFLGlCQUFpQixDQUFFLENBQUM7SUFDMUMsWUFBWSxHQUFHLEVBQUUsQ0FBQztBQUN0QixDQUFDO0FBRUQsUUFBUSxDQUFDLENBQUMsa0JBQWtCLENBQUUsV0FBZ0M7SUFFMUQsQ0FBQyxDQUFDLHlCQUF5QixDQUFFLHNCQUFzQixFQUFFLFVBQVcsR0FBRyxJQUFJLElBQXFFLENBQUMsQ0FBRSxDQUFDO0lBRWhKLE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBRSxpQkFBaUIsQ0FBRyxDQUFDO0lBQzNDLFVBQVUsQ0FBQyx1QkFBdUIsRUFBRSxDQUFDO0lBQ3JDLFVBQVUsQ0FBQyxrQkFBa0IsQ0FBRSxjQUFjLENBQUUsQ0FBQztJQUVoRCxNQUFNLEtBQUssR0FBRyxDQUFDLENBQUUsZ0JBQWdCLENBQWEsQ0FBQztJQUMvQyxNQUFNLE1BQU0sR0FBRyxDQUFDLENBQUUsa0JBQWtCLENBQXNCLENBQUM7SUFDM0Qsb0VBQW9FO0lBRXBFLE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxJQUFJLENBQUUsQ0FBQztJQUUxQixDQUFDLENBQUMsYUFBYSxDQUFFLHVDQUF1QyxFQUFFLElBQUksQ0FBRSxDQUFDO0lBRWpFLE1BQU0sS0FBSyxDQUFDLFNBQVMsQ0FBRSxHQUFHLEVBQUUsQ0FBQyxNQUFNLENBQUMsU0FBUyxDQUFFLGFBQWEsQ0FBRSxFQUFFLFdBQVcsQ0FBRSxDQUFDO0lBRTlFLE1BQU0sZUFBZSxHQUFHLElBQUksS0FBSyxDQUFDLFNBQVMsRUFBRSxDQUFDO0lBRTlDLEtBQUssQ0FBQyxRQUFRLENBQUUsWUFBWSxDQUFFLENBQUM7SUFDL0IsTUFBTSxDQUFDLFFBQVEsQ0FBQyxZQUFZLENBQUMsQ0FBQztJQUU5QixZQUFZLENBQUMsSUFBSSxDQUFFLGlCQUFpQixDQUFFLDBCQUEwQixDQUFFLENBQUUsQ0FBQztJQUNyRSxZQUFZLENBQUMsSUFBSSxDQUFFLGlCQUFpQixDQUFFLHNCQUFzQixDQUFFLENBQUUsQ0FBQztJQUVqRSx5RUFBeUU7SUFFekUsb0NBQW9DO0lBQ3BDLE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUV6QixDQUFDLENBQUUsbUJBQW1CLENBQUcsQ0FBQyxRQUFRLENBQUUsWUFBWSxDQUFFLENBQUM7SUFDbkQsQ0FBQyxDQUFFLGtCQUFrQixDQUFHLENBQUMsUUFBUSxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ2xELDRCQUE0QjtJQUU1QixNQUFNLEtBQUssQ0FBQyxLQUFLLENBQUUsR0FBRyxDQUFFLENBQUM7SUFFekIsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxnQ0FBZ0MsRUFBRSxpQkFBaUIsRUFBRSxrQkFBa0IsRUFBRSxHQUFHLENBQUUsQ0FBQztJQUNoRyxDQUFDLENBQUMsYUFBYSxDQUFFLDhCQUE4QixFQUFFLGlCQUFpQixFQUFFLFdBQVcsQ0FBRSxDQUFDO0lBQ2xGLE1BQU0sQ0FBQyxlQUFlLENBQUUsQ0FBQyxJQUFJLEVBQUUsSUFBSSxFQUFFLENBQUMsSUFBSSxFQUFFLElBQUksQ0FBRSxDQUFDO0FBRXZELENBQUMifQ==