/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../dota_sequence_actions.ts" />
/**
 * DEBUT PAGE
 */
var seq;
const ULT_ENTITIES = ["ult_sky", "ult_env",];
const ULT_ACTIVE_FX = [
    "ult_debut_fx_1", "ult_debut_fx_2", "ult_debut_fx_3", "ult_debut_fx_4",
    "ult_debut_fx_5", "ult_debut_fx_6", "ult_debut_fx_7", "ult_debut_fx_8",
    "ult_debut_fx_9", "ult_debut_fx_10", "ult_debut_fx_31",
    "ult_debut_fx_22", "ult_debut_fx_23", "ult_debut_fx_24",
    "ult_debut_fx_11", "ult_debut_fx_17", "ult_debut_fx_18", "ult_debut_fx_25",
    "ult_debut_fx_46", "ult_debut_fx_47", "ult_debut_fx_48", "ult_debut_fx_49",
    "ult_debut_fx_50", "ult_debut_fx_51",
    "ult_debut_fx_32", "ult_debut_fx_33", "ult_debut_fx_34", "ult_debut_fx_35",
    "ult_debut_fx_36", "ult_debut_fx_37", "ult_debut_fx_38", "ult_debut_fx_39",
    "ult_debut_fx_40", "ult_debut_fx_41", "ult_debut_fx_42", "ult_debut_fx_43",
    "ult_debut_fx_44", "ult_debut_fx_45",
    "ult_debut_fx_26",
    "ult_ambient_fx_1",
];
const ULT_INACTIVE_FX = [
    "ult_debut_fx_27",
    "ult_debut_fx_28", "ult_debut_fx_29", "ult_debut_fx_30",
];
const ULT_LIGHTS = [
    "swirl_light",
    "ult_env_light_1", "ult_env_light_2", "ult_env_light_3", "ult_env_light_4",
    "ult_env_light_5", "ult_env_light_6", "ult_env_light_7", "ult_env_light_8",
    "ult_env_light_9",
    "red_flowers",
];
const END_ENTITIES = ["tree_env", "muerta_base", "debut_end_plate"];
const END_FX = [
    "debut_fx_1", "debut_fx_2", "debut_fx_3", "debut_fx_4", "debut_fx_5",
    "debut_fx_6", "debut_fx_7", "debut_fx_8", "debut_fx_9", "debut_fx_10",
    "debut_fx_11", "debut_fx_12", "debut_fx_13", "debut_fx_14", "debut_fx_15",
    "debut_fx_16", "debut_fx_17", "debut_fx_18", "debut_fx_19", "debut_fx_20",
    "debut_fx_21", "debut_fx_22", "debut_fx_23", "debut_fx_24", "debut_fx_25",
    "debut_fx_26", "debut_fx_27", "debut_fx_28", "debut_fx_29", "debut_fx_30",
    "debut_fx_31",
    "debut_fx_35", "debut_fx_36", "debut_fx_38", "debut_fx_39", "debut_fx_40",
    "debut_fx_41", "debut_fx_42", "debut_fx_43",
    "base_ambient_fx_1",
    "godray1", "godray2", "godray3", "godray4", "godray5", "godray6", "godray7",
    "godray8", "godray9", "godray10", "godray11",
];
/**
 * Main function linked to triggering the debut
 */
var RunPageAnimation = function () {
    seq = new RunSequentialActions();
    $('#ModelContainer').RemoveAndDeleteChildren();
    if ($('#ModelContainer')?.BAscendantHasClass('AspectRatio21x9')) {
        $('#ModelContainer').BLoadLayoutSnippet('ModelSnippetWide');
    }
    else {
        $('#ModelContainer').BLoadLayoutSnippet('ModelSnippet');
    }
    seq.actions.push(new WaitAction(0.35));
    seq.actions.push(new RunFunctionAction(function () {
        $.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
    }));
    seq.actions.push(new WaitForClassAction($('#ModelBackground'), 'SceneLoaded'));
    // seq.actions.push(new WaitForClassAction($('#ModelForeground'), 'SceneLoaded'));
    seq.actions.push(new AddClassAction($('#MainContainer'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#ModelBackground'), 'Initialize'));
    // seq.actions.push(new AddClassAction($('#ModelForeground'), 'Initialize'));
    seq.actions.push(new PlayAndTrackSoundAction('muerta_debut_stinger'));
    seq.actions.push(new PlayAndTrackSoundAction('muerta_debut_sfx'));
    // t0: play entity animation sequences, and hide end environment
    seq.actions.push(new RunFunctionAction(function () {
        $('#ModelBackground').FireEntityInput('satyr_a', 'SetAnimation', 'muerta_debut_satyr_a');
        $('#ModelBackground').FireEntityInput('satyr_b', 'SetAnimation', 'muerta_debut_satyr_b');
        $('#ModelBackground').FireEntityInput('satyr_c', 'SetAnimation', 'muerta_debut_satyr_c');
        //$('#ModelBackground').FireEntityInput('tracer1', 'SetAnimation', 'muerta_debut_trace1'); 
        //$('#ModelBackground').FireEntityInput('tracer2', 'SetAnimation', 'muerta_debut_trace2'); 
        //$('#ModelBackground').FireEntityInput('ghost0', 'SetAnimation', 'muerta_debut_ghost0'); 
        //$('#ModelBackground').FireEntityInput('ghost1', 'SetAnimation', 'muerta_debut_ghost1'); 
        //$('#ModelBackground').FireEntityInput('ghost2', 'SetAnimation', 'muerta_debut_ghost2'); 
        //$('#ModelBackground').FireEntityInput('muerta_base', 'SetAnimation', 'muerta_debut_base'); 
        //$('#ModelBackground').FireEntityInput('muerta_ult', 'SetAnimation', 'muerta_debut_ult'); 
        //$('#ModelBackground').FireEntityInput('hero_camera_driver', 'SetAnimation', 'debut_camera_anim'); 
        for (let ent of END_ENTITIES) {
            $("#ModelBackground").FireEntityInput(ent, "Disable", "0");
        }
        $("#ModelBackground").FireEntityInput("ghost0", "Disable", "0");
        $("#ModelBackground").FireEntityInput("ghost1", "Disable", "0");
        $("#ModelBackground").FireEntityInput("ghost2", "Disable", "0");
    }));
    // set the debut panel FX
    seq.actions.push(new AddClassAction($('#DebutFXPanel'), 'Initialize'));
    var fx_panel = $.GetContextPanel().FindPanelInLayoutFile("DebutInformationParticlePanel");
    var fx_obj = fx_panel.FindChildInLayoutFile("DebutFXPanel");
    seq.actions.push(new WaitAction(1.55));
    // trigger the choreographed particle systems
    seq.actions.push(new WaitAction(2.73)); // t=4.28
    seq.actions.push(new RunFunctionAction(function () {
    }));
    seq.actions.push(new WaitAction(0.17));
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("tracer1_fx", "Start", "0");
    }));
    seq.actions.push(new WaitAction(0.07)); // t=4.45
    seq.actions.push(new RunFunctionAction(function () {
    }));
    seq.actions.push(new WaitAction(0.10)); // t=4.55
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("tracer2_fx", "Start", "0");
        $("#ModelBackground").FireEntityInput("tracer1_fx", "StopPlayEndCap", "0");
        $("#ModelBackground").FireEntityInput("impact3", "Start", "0");
    }));
    seq.actions.push(new WaitAction(0.23)); // t=4.78
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("tracer2_fx", "StopPlayEndCap", "0");
        $("#ModelBackground").FireEntityInput("tracer3_fx", "Start", "0");
        $("#ModelBackground").FireEntityInput("impact1", "Start", "0");
    }));
    seq.actions.push(new WaitAction(0.17)); // t=4.95
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("tracer3_fx", "StopPlayEndCap", "0");
        $("#ModelBackground").FireEntityInput("impact2", "Start", "0");
    }));
    seq.actions.push(new WaitAction(0.10)); // t=5.05
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("ult_debut_fx_36", "Start", "0");
    }));
    seq.actions.push(new WaitAction(0.25)); // t=5.30
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("ghost0_fx", "Start", "0");
        $("#ModelBackground").FireEntityInput("ghost0", "Enable", "0");
    }));
    // t=5.55s
    seq.actions.push(new WaitAction(0.25));
    seq.actions.push(new RunFunctionAction(function () {
    }));
    seq.actions.push(new WaitAction(0.10)); // 5.65
    seq.actions.push(new RunFunctionAction(function () {
        //$("#ModelBackground").FireEntityInput("ghost2_fx", "Start", "0");
    }));
    seq.actions.push(new WaitAction(0.15)); // 5.8
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("ghost1_fx", "Start", "0");
        $("#ModelBackground").FireEntityInput("ghost1", "Enable", "0");
        $("#ModelBackground").FireEntityInput("ghost2", "Enable", "0");
    }));
    seq.actions.push(new WaitAction(0.05));
    seq.actions.push(new RunFunctionAction(function () {
    }));
    seq.actions.push(new WaitAction(0.5));
    seq.actions.push(new RunFunctionAction(function () {
    }));
    seq.actions.push(new WaitAction(0.1));
    seq.actions.push(new RunFunctionAction(function () {
    }));
    // swap environments at the 7. second mark
    seq.actions.push(new WaitAction(0.1));
    seq.actions.push(new RunFunctionAction(function () {
        $("#ModelBackground").FireEntityInput("ult_debut_fx_27", "Start", "0");
        $('#ModelBackground').FireEntityInput("muerta_ult", "Disable", 0);
        for (let ent of ULT_ENTITIES) {
            $("#ModelBackground").FireEntityInput(ent, "Disable", "0");
        }
        for (let ent of ULT_ACTIVE_FX) {
            $("#ModelBackground").FireEntityInput(ent, "DestroyImmediately", "0");
        }
        for (let ent of ["ghost0_fx", "ghost1_fx", "ghost2_fx"]) {
            $("#ModelBackground").FireEntityInput(ent, "StopPlayEndCap", "0");
        }
        // lights
        for (let ent of ULT_LIGHTS) {
            $("#ModelBackground").FireEntityInput(ent, "Intensity", "0");
        }
        // show the final environment
        for (let ent of END_ENTITIES) {
            $("#ModelBackground").FireEntityInput(ent, "Enable", "0");
        }
        for (let ent of END_FX) {
            $("#ModelBackground").FireEntityInput(ent, "Start", "0");
        }
    }));
    seq.actions.push(new WaitAction(1.0));
    seq.actions.push(new AddClassAction($('#DebutInformation'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#InformationBody'), 'Initialize'));
    // start the particle fx panel along with the information panels
    seq.actions.push(new RunFunctionAction(function () {
        fx_obj.StartParticles();
    }));
    seq.actions.push(new WaitAction(4.0));
    // Switch cameras and enable parallax
    seq.actions.push(new RunFunctionAction(function () {
        $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'ModelBackground', 'hero_camera_post', 0.0);
        $.DispatchEvent('DOTAGlobalSceneSetRootEntity', 'ModelBackground', 'root_post');
    }));
    seq.actions.push(new LerpRotateAction($('#ModelBackground'), 0, 0, 0, 0, -0.75, 0.75, -0.25, 0.25, 0.0));
    // play looping idle after 280/30. s 
    seq.actions.push(new WaitAction(4.333333333));
    seq.actions.push(new RunFunctionAction(function () {
        $('#ModelBackground').FireEntityInput('muerta_base', 'SetAnimation', 'muerta_debut_base_idle');
    }));
    // play the sequences!
    RunSingleAction(seq);
};
/**
 * post-callback assigned when leaving the debut
 */
var EndPageAnimation = function () {
    if (seq != undefined) {
        seq.finish();
    }
    $('#MainContainer').RemoveClass('Initialize');
    $('#ModelBackground').RemoveClass('Initialize');
    // $('#ModelForeground').RemoveClass('Initialize');
    $('#DebutInformation').RemoveClass('Initialize');
    $('#InformationBody').RemoveClass('Initialize');
    PlayAndTrackSoundAction.StopAllTrackedSounds();
};
var LoadMuertaLogo = function () {
    if ($("#LogoMovieContainer").BAscendantHasClass("Language_schinese") || $("#LogoMovieContainer").BAscendantHasClass("Language_tchinese")) {
        $("#LogoMovieContainer").BLoadLayoutSnippet("MuertaTitleChinese");
    }
    else {
        $("#LogoMovieContainer").BLoadLayoutSnippet("MuertaTitleEnglish");
    }
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfZGVidXRfbXVlcnRhLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZGFzaGJvYXJkX3BhZ2VfZGVidXRfbXVlcnRhLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsb0RBQW9EO0FBRXBEOztHQUVHO0FBQ0gsSUFBSSxHQUFxQyxDQUFDO0FBRTFDLE1BQU0sWUFBWSxHQUFHLENBQUMsU0FBUyxFQUFFLFNBQVMsRUFBRyxDQUFDO0FBQzlDLE1BQU0sYUFBYSxHQUFHO0lBQ2QsZ0JBQWdCLEVBQUUsZ0JBQWdCLEVBQUUsZ0JBQWdCLEVBQUUsZ0JBQWdCO0lBQ3RFLGdCQUFnQixFQUFFLGdCQUFnQixFQUFFLGdCQUFnQixFQUFFLGdCQUFnQjtJQUN0RSxnQkFBZ0IsRUFBRSxpQkFBaUIsRUFBRSxpQkFBaUI7SUFFdEQsaUJBQWlCLEVBQUUsaUJBQWlCLEVBQUUsaUJBQWlCO0lBRXZELGlCQUFpQixFQUFFLGlCQUFpQixFQUFFLGlCQUFpQixFQUFFLGlCQUFpQjtJQUUxRSxpQkFBaUIsRUFBRSxpQkFBaUIsRUFBRSxpQkFBaUIsRUFBRSxpQkFBaUI7SUFDMUUsaUJBQWlCLEVBQUUsaUJBQWlCO0lBRXBDLGlCQUFpQixFQUFFLGlCQUFpQixFQUFFLGlCQUFpQixFQUFFLGlCQUFpQjtJQUMxRSxpQkFBaUIsRUFBRSxpQkFBaUIsRUFBRSxpQkFBaUIsRUFBRSxpQkFBaUI7SUFDMUUsaUJBQWlCLEVBQUUsaUJBQWlCLEVBQUUsaUJBQWlCLEVBQUUsaUJBQWlCO0lBQzFFLGlCQUFpQixFQUFFLGlCQUFpQjtJQUVwQyxpQkFBaUI7SUFFakIsa0JBQWtCO0NBQ3pCLENBQUM7QUFDRixNQUFNLGVBQWUsR0FBRztJQUNoQixpQkFBaUI7SUFFakIsaUJBQWlCLEVBQUUsaUJBQWlCLEVBQUUsaUJBQWlCO0NBQzlELENBQUM7QUFDRixNQUFNLFVBQVUsR0FBRztJQUNYLGFBQWE7SUFDYixp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