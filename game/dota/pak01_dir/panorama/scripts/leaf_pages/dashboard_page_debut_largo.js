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
var g_debutTriggerLastInteractionTimes = new Map();
var g_movieSoundGuid;
function LoadLargoLogo() {
    const cp = $.GetContextPanel();
    const bIsChinese = cp.BAscendantHasClass("Language_schinese") || cp.BAscendantHasClass("Language_tchinese");
    //$( "#LogoMovieContainer" )!.BLoadLayoutSnippet( bIsChinese ? "RingmasterTitleChinese" : "RingmasterTitleEnglish" );
}
function StartLargoDebut() {
    ResetLargoDebut();
    SetDuckingUIMusic($.GetContextPanel(), true);
    g_abort = new Async.AbortController();
    Async.RunSequence(LargoSequence, g_abort.signal);
}
function SkipDebutVideo() {
    const pMovieContainer = $('#MovieContainer');
    const pMovie = $('#LargoDebutMovie');
    StopUISoundScript(g_movieSoundGuid);
    if (pMovieContainer.BHasClass("MovieFinished")) {
        pMovie.Stop();
        SetDuckingUIMusic($.GetContextPanel(), false);
        $.DispatchEvent('DOTAShowHomePage');
    }
    else {
        pMovie.Stop();
        pMovieContainer.AddClass('MovieFinished');
    }
}
function ResetLargoDebut() {
    if (g_abort) {
        g_abort.abort();
        g_abort = undefined;
    }
    $('#ModelContainer').RemoveClass('Initialize');
    $('#MainContainer').RemoveClass('Initialize');
    $('#ModelBackground')?.RemoveClass('Initialize');
    // $('#ModelForeground')?.RemoveClass('Initialize');
    $('#DebutInformation').RemoveClass('Initialize');
    $('#InformationBody').RemoveClass('Initialize');
    $('#MovieContainer').RemoveClass("MovieFinished");
    $('#MovieContainer').RemoveClass("MovieStarted");
    g_soundGuids.forEach(StopUISoundScript);
    g_soundGuids = [];
    SetDuckingUIMusic($.GetContextPanel(), false);
}
function* LargoSequence(abortSignal) {
    $.RegisterForUnhandledEvent("DynamicPropAnimEvent", function (...args) { });
    const pContainer = $('#ModelContainer');
    pContainer.RemoveAndDeleteChildren();
    pContainer.BLoadLayoutSnippet('ModelSnippet');
    const pMain = $('#MainContainer');
    const pScene = $('#ModelBackground');
    //const pDebutFX = $( '#DebutFXPanel' ) as DOTAParticleScenePanel_t;
    const pMovieContainer = $('#MovieContainer');
    const pMovie = $('#LargoDebutMovie');
    yield Async.Delay(0.75);
    $.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
    $.RegisterEventHandler('MoviePlayerPlaybackEnded', pMovie, () => pMovieContainer.AddClass('MovieFinished'));
    $.RegisterEventHandler('MoviePlayerPlaybackStart', pMovie, () => pMovieContainer.AddClass('MovieStarted'));
    pMovie.SetPlaybackVolume(0);
    pMovie.Play();
    yield Async.Condition(() => pMovieContainer.BHasClass("MovieStarted"), abortSignal);
    g_movieSoundGuid = PlayUISoundScript('largo_debut_stinger');
    g_soundGuids.push(g_movieSoundGuid);
    $.Schedule(17.5, () => pMovieContainer.AddClass('MovieFinished'));
    yield Async.Condition(() => pMovieContainer.BHasClass('MovieFinished') && pScene.BHasClass("SceneLoaded"), abortSignal);
    const sceneLoadedTime = new Async.TimeStamp();
    pContainer.AddClass('Initialize');
    pMain.AddClass('Initialize');
    pScene.AddClass('Initialize');
    g_soundGuids.push(PlayUISoundScript('largo_debut_sfx'));
    //END_ENTITIES.forEach( ent => pScene.FireEntityInput( ent, "Enable" ) );
    //pDebutFX.AddClass( "Initialize" );
    yield Async.Delay(0.3);
    $('#DebutInformation').AddClass('Initialize');
    $('#InformationBody').AddClass('Initialize');
    //pDebutFX.StartParticles();
    yield Async.Delay(8.5);
    $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'ModelBackground', 'hero_camera_post', 0.0);
    $.DispatchEvent('DOTAGlobalSceneSetRootEntity', 'ModelBackground', 'root_post');
    pScene.SetRotateParams(-0.75, 0.75, -0.25, 0.25);
}
function LargoDebutTrigger(entityName, fromDashboard) {
    const pScene = $('#ModelBackground');
    const pMovieContainer = $('#MovieContainer');
    const pMovie = $('#LargoDebutMovie');
    let bShouldTrigger = false;
    if (fromDashboard) {
        // make triggers work from dashboard when no movie
        bShouldTrigger = true;
    }
    else {
        if (pMovieContainer.BHasClass('MovieFinished')) {
            if (g_debutTriggerLastInteractionTimes.has(entityName)) {
                const timeSinceLastInteraction = Date.now() - g_debutTriggerLastInteractionTimes.get(entityName);
                if (timeSinceLastInteraction > 700) {
                    bShouldTrigger = true;
                }
            }
            else {
                bShouldTrigger = true;
            }
        }
    }
    if (bShouldTrigger) {
        pScene.FireEntityInput(entityName, 'SetAnimation', entityName + '_debut_click');
        PlayUISoundScript(entityName + '_debut_click_stinger');
        g_debutTriggerLastInteractionTimes.set(entityName, Date.now());
    }
}
function LargoDebutUpdateAbilityImage(elementName, imagePath) {
    const pImage = $(elementName);
    if (pImage) {
        pImage.SetImage(imagePath);
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfZGVidXRfbGFyZ28uanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9sZWFmX3BhZ2VzL2Rhc2hib2FyZF9wYWdlX2RlYnV0X2xhcmdvLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLDJDQUEyQztBQUMzQyxvREFBb0Q7QUFFcEQ7O0dBRUc7QUFDSCxJQUFJLE9BQTBDLENBQUM7QUFDL0MsSUFBSSxZQUFZLEdBQWEsRUFBRSxDQUFDO0FBQ2hDLElBQUksa0NBQWtDLEdBQXdCLElBQUksR0FBRyxFQUFrQixDQUFDO0FBQ3hGLElBQUksZ0JBQXdCLENBQUM7QUFFN0IsU0FBUyxhQUFhO0lBRWxCLE1BQU0sRUFBRSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUMvQixNQUFNLFVBQVUsR0FBRyxFQUFFLENBQUMsa0JBQWtCLENBQUUsbUJBQW1CLENBQUUsSUFBSSxFQUFFLENBQUMsa0JBQWtCLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUNoSCxxSEFBcUg7QUFDekgsQ0FBQztBQUVELFNBQVMsZUFBZTtJQUVwQixlQUFlLEVBQUUsQ0FBQztJQUNsQixpQkFBaUIsQ0FBQyxDQUFDLENBQUMsZUFBZSxFQUFFLEVBQUUsSUFBSSxDQUFDLENBQUM7SUFFN0MsT0FBTyxHQUFHLElBQUksS0FBSyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ3RDLEtBQUssQ0FBQyxXQUFXLENBQUUsYUFBYSxFQUFFLE9BQU8sQ0FBQyxNQUFNLENBQUUsQ0FBQztBQUN2RCxDQUFDO0FBRUQsU0FBUyxjQUFjO0lBRW5CLE1BQU0sZUFBZSxHQUFHLENBQUMsQ0FBQyxpQkFBaUIsQ0FBWSxDQUFDO0lBQ3hELE1BQU0sTUFBTSxHQUFHLENBQUMsQ0FBQyxrQkFBa0IsQ0FBWSxDQUFDO0lBRWhELGlCQUFpQixDQUFF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