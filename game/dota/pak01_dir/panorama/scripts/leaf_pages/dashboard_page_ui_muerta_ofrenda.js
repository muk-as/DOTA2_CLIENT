"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../dota_sequence_actions.ts" />
var seq;
var MuertaOfrendaState;
(function (MuertaOfrendaState) {
    MuertaOfrendaState[MuertaOfrendaState["DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL"] = 0] = "DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL";
    MuertaOfrendaState[MuertaOfrendaState["DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA"] = 1] = "DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA";
    MuertaOfrendaState[MuertaOfrendaState["DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA"] = 2] = "DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA";
    MuertaOfrendaState[MuertaOfrendaState["DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA"] = 3] = "DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA";
    MuertaOfrendaState[MuertaOfrendaState["DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA"] = 4] = "DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA";
})(MuertaOfrendaState || (MuertaOfrendaState = {}));
var currentState;
var isCameraLerping = false;
const ENT_OBJ1 = 'sack';
const ENT_OBJ2 = 'hat';
const ENT_OBJ3 = 'boxes';
const ENT_OBJ4 = 'guns';
const ENT_OBJ5 = 'round_frame1';
const FX_OBJ1 = 'sack_fx';
const FX_OBJ2 = 'hat_fx';
const FX_OBJ3 = 'game_fx';
const FX_OBJ4 = 'boots_fx';
const FX_OBJ5 = 'round_frame1_fx';
const FX_ALT_OBJ1 = 'sack_alt_fx';
const FX_ALT_OBJ2 = 'hat_alt_fx';
const FX_ALT_OBJ3 = 'game_alt_fx';
const ENT_PIC1 = 'picture1';
const ENT_PIC2 = 'picture2';
const ENT_CNDL1 = 'candle_a_proxy';
const ENT_CNDL2 = 'candle_b_proxy';
const ENT_CNDL3 = 'candle_c_proxy';
const ENT_CNDL4 = 'candle_d_proxy';
const ENT_CNDL5 = 'candle_e_proxy';
const ENT_CNDL6 = 'candle_f_proxy';
const ENT_CNDL7 = 'candle_g_proxy';
const FX_BASE_CNDL1 = 'candle_a_base_fx';
const FX_BASE_CNDL2 = 'candle_b_base_fx';
const FX_BASE_CNDL3 = 'candle_c_base_fx';
const FX_BASE_CNDL4 = 'candle_d_base_fx';
const FX_BASE_CNDL5 = 'candle_e_base_fx';
const FX_BASE_CNDL6 = 'candle_f_base_fx';
const FX_BASE_CNDL7 = 'candle_g_base_fx';
const FX_GHOST_CNDL1 = 'candle_a_ghost_fx';
const FX_GHOST_CNDL2 = 'candle_b_ghost_fx';
const FX_GHOST_CNDL3 = 'candle_c_ghost_fx';
const FX_GHOST_CNDL4 = 'candle_d_ghost_fx';
const FX_GHOST_CNDL5 = 'candle_e_ghost_fx';
const FX_GHOST_CNDL6 = 'candle_f_ghost_fx';
const FX_GHOST_CNDL7 = 'candle_g_ghost_fx';
const BODY_GROUP = 'state_switch';
let handlersRegistered = false;
function RegisterHandlers() {
    Setup();
    if (!handlersRegistered) {
        handlersRegistered = true;
        currentState = $('#OfrendaModelBackground').GetAttributeInt('current_state', 0);
        $.RegisterEventHandler('DOTAScenePanelSceneLoaded', $('#OfrendaModelBackground'), function (scenePanel) {
            Setup();
        });
        $.RegisterEventHandler('DOTAScenePanelEntityClicked', $('#OfrendaModelBackground'), function (scenePanel, entityName) {
            //$.DispatchEvent('DOTAShowConsoleMessage', 'OfrendaModelBackground', 'DOTAScenePanelEntityClicked ' + entityName );
            let newState = 0;
            switch (entityName) {
                case ENT_OBJ1:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL) {
                        newState = MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA;
                        $.DispatchEvent('DOTAShowMuertaCalaveraPage', 'OfrendaModelBackground', 1);
                        $.DispatchEvent('RecordClientMetric', 'MuertaDashboard/Calavera1');
                    }
                    break;
                case ENT_OBJ2:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA) {
                        newState = MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA;
                        $.DispatchEvent('DOTAShowMuertaCalaveraPage', 'OfrendaModelBackground', 2);
                        $.DispatchEvent('RecordClientMetric', 'MuertaDashboard/Calavera2');
                    }
                    break;
                case ENT_OBJ3:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA) {
                        newState = MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA;
                        $.DispatchEvent('DOTAShowMuertaCalaveraPage', 'OfrendaModelBackground', 3);
                        $.DispatchEvent('RecordClientMetric', 'MuertaDashboard/Calavera3');
                    }
                    break;
                case ENT_OBJ4:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA) {
                        newState = MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA;
                        $.DispatchEvent('DOTAShowMuertaCalaveraPage', 'OfrendaModelBackground', 4);
                        $.DispatchEvent('RecordClientMetric', 'MuertaDashboard/Calavera4');
                    }
                    break;
                case ENT_OBJ5:
                    if (!isCameraLerping) {
                        $.DispatchEvent('DOTAShowReferencePage', 'file://{resources}/layout/leaf_pages/dashboard_page_debut_muerta.xml');
                        $.DispatchEvent('RecordClientMetric', 'MuertaDashboard/Debut');
                    }
                    break;
                default:
                    break;
            }
            if (newState > currentState) {
                currentState = newState;
                $.DispatchEvent('DOTASetMuertaOfrendaState', 'OfrendaModelBackground', currentState);
            }
        });
        $.RegisterEventHandler('DOTAScenePanelEntityMouseOver', $('#OfrendaModelBackground'), function (scenePanel, entityName) {
            //$.DispatchEvent('DOTAShowConsoleMessage', 'OfrendaModelBackground', 'DOTAScenePanelEntityMouseOver ' + entityName);
            switch (entityName) {
                case ENT_OBJ1:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL) {
                        if (currentState > MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL) {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_ALT_OBJ1, 'start', 1);
                        }
                        else {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ1, 'start', 1);
                        }
                        $('#CalaveraTip1').RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ2:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA) {
                        if (currentState > MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA) {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_ALT_OBJ2, 'start', 1);
                        }
                        else {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ2, 'start', 1);
                        }
                        $('#CalaveraTip2').RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ3:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA) {
                        if (currentState > MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA) {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_ALT_OBJ3, 'start', 1);
                        }
                        else {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ3, 'start', 1);
                        }
                        $('#CalaveraTip3').RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ4:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA) {
                        $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ4, 'start', 1);
                        $('#CalaveraTip4').RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ5, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), ENT_PIC1, 'SetAnimation', '@ofrenda_frame_round_off');
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), ENT_PIC2, 'SetAnimation', '@ofrenda_frame_round_on');
                    break;
                case ENT_CNDL1:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL1, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL1, 'start', 1);
                    break;
                case ENT_CNDL2:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL2, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL2, 'start', 1);
                    break;
                case ENT_CNDL3:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL3, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL3, 'start', 1);
                    break;
                case ENT_CNDL4:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL4, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL4, 'start', 1);
                    break;
                case ENT_CNDL5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL5, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL5, 'start', 1);
                    break;
                case ENT_CNDL6:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL6, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL6, 'start', 1);
                    break;
                case ENT_CNDL7:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL7, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL7, 'start', 1);
                    break;
                default:
                    break;
            }
        });
        $.RegisterEventHandler('DOTAScenePanelEntityMouseOut', $('#OfrendaModelBackground'), function (scenePanel, entityName) {
            //$.DispatchEvent( 'DOTAShowConsoleMessage', 'OfrendaModelBackground', 'DOTAScenePanelEntityMouseOut ' + entityName );
            switch (entityName) {
                case ENT_OBJ1:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ1, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_ALT_OBJ1, 'DestroyImmediately', 0);
                    $('#CalaveraTip1').AddClass('Hidden');
                    break;
                case ENT_OBJ2:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ2, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_ALT_OBJ2, 'DestroyImmediately', 0);
                    $('#CalaveraTip2').AddClass('Hidden');
                    break;
                case ENT_OBJ3:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ3, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_ALT_OBJ3, 'DestroyImmediately', 0);
                    $('#CalaveraTip3').AddClass('Hidden');
                    break;
                case ENT_OBJ4:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ4, 'DestroyImmediately', 0);
                    $('#CalaveraTip4').AddClass('Hidden');
                    break;
                case ENT_OBJ5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_OBJ5, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), ENT_PIC1, 'SetAnimation', '@ofrenda_frame_round_on');
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), ENT_PIC2, 'SetAnimation', '@ofrenda_frame_round_off');
                    break;
                case ENT_CNDL1:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL1, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL1, 'StopPlayEndCap', 0);
                    break;
                case ENT_CNDL2:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL2, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL2, 'StopPlayEndCap', 0);
                    break;
                case ENT_CNDL3:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL3, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL3, 'StopPlayEndCap', 0);
                    break;
                case ENT_CNDL4:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL4, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL4, 'StopPlayEndCap', 0);
                    break;
                case ENT_CNDL5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL5, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL5, 'StopPlayEndCap', 0);
                    break;
                case ENT_CNDL6:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL6, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL6, 'StopPlayEndCap', 0);
                    break;
                case ENT_CNDL7:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_BASE_CNDL7, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground'), FX_GHOST_CNDL7, 'DestroyImmediately', 0);
                    break;
                default:
                    break;
            }
        });
        $.RegisterForUnhandledEvent('DOTAMuertaCalaveraClosed', function (scenePanel, pageNum) {
            if (currentState <= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA) {
                PlaySequence();
            }
        });
        $.RegisterForUnhandledEvent('DOTAMuertaDebutClosed', function () {
            PlaySequence();
        });
        $.RegisterForUnhandledEvent('DOTAMuertaOfrendaStateChanged', function (scenePanel, newState) {
            if (currentState != newState) {
                currentState = newState;
                PlaySequence();
            }
        });
    }
}
/**
 * Main function linked to triggering the debut
 */
var Setup = function () {
    isCameraLerping = true;
    seq = new RunSequentialActions();
    seq.actions.push(new WaitForClassAction($('#OfrendaModelBackground'), 'SceneLoaded'));
    seq.actions.push(new AddClassAction($('#OfrendaMainContainer'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#OfrendaModelBackground'), 'Initialize'));
    seq.actions.push(new WaitAction(0.2));
    // set up initial states of animated objects
    seq.actions.push(new RunFunctionAction(function () {
        UpdateAnimations();
    }));
    seq.actions.push(new WaitAction(3.0));
    // swap cameras + root transforms, then enable parallax
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'OfrendaModelBackground', 'hero_camera_post', 0.0); isCameraLerping = false; }));
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTAGlobalSceneSetRootEntity', 'OfrendaModelBackground', 'root_post'); }));
    seq.actions.push(new LerpRotateAction($('#OfrendaModelBackground'), 0, 0, 0, 0, -1.0, 1.0, -0.5, 0.5, 0.0));
    // play the sequences!
    RunSingleAction(seq);
};
var UpdateAnimations = function () {
    var scenePanel = $('#OfrendaModelBackground');
    switch (currentState) {
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ1, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ2, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ3, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ4, false);
            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ2, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ3, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ4, false);
            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ2, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ3, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ4, false);
            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ2, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ3, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ4, false);
            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ2, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ3, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground'), ENT_OBJ4, true);
            break;
        default:
            break;
    }
};
var PlaySequence = function () {
    let seq = new RunSequentialActions();
    /*
    seq.actions.push(new RunFunctionAction(function () {
        $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'OfrendaModelBackground',
            GetCameraPostFromState(currentState), 2.0);
    }));
    */
    //seq.actions.push(new WaitAction(1.0));
    seq.actions.push(new RunFunctionAction(function () {
        UpdateAnimations();
    }));
    RunSingleAction(seq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfdWlfbXVlcnRhX29mcmVuZGEuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJkYXNoYm9hcmRfcGFnZV91aV9tdWVydGFfb2ZyZW5kYS50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQyxvREFBb0Q7QUFFcEQsSUFBSSxHQUFxQyxDQUFDO0FBRTFDLElBQUssa0JBTUo7QUFORCxXQUFLLGtCQUFrQjtJQUN0Qix5SUFBK0MsQ0FBQTtJQUMvQyx1SkFBc0QsQ0FBQTtJQUN0RCx5SkFBdUQsQ0FBQTtJQUN2RCx1SkFBc0QsQ0FBQTtJQUN0RCx5SkFBdUQsQ0FBQTtBQUN4RCxDQUFDLEVBTkksa0JBQWtCLEtBQWxCLGtCQUFrQixRQU10QjtBQUVELElBQUksWUFBZ0MsQ0FBQztBQUNyQyxJQUFJLGVBQWUsR0FBWSxLQUFLLENBQUM7QUFFckMsTUFBTSxRQUFRLEdBQUcsTUFBTSxDQUFDO0FBQ3hCLE1BQU0sUUFBUSxHQUFHLEtBQUssQ0FBQztBQUN2QixNQUFNLFFBQVEsR0FBRyxPQUFPLENBQUM7QUFDekIsTUFBTSxRQUFRLEdBQUcsTUFBTSxDQUFDO0FBQ3hCLE1BQU0sUUFBUSxHQUFHLGNBQWMsQ0FBQztBQUVoQyxNQUFNLE9BQU8sR0FBRyxTQUFTLENBQUM7QUFDMUIsTUFBTSxPQUFPLEdBQUcsUUFBUSxDQUFDO0FBQ3pCLE1BQU0sT0FBTyxHQUFHLFNBQVMsQ0FBQztBQUMxQixNQUFNLE9BQU8sR0FBRyxVQUFVLENBQUM7QUFDM0IsTUFBTSxPQUFPLEdBQUcsaUJBQWlCLENBQUM7QUFFbEMsTUFBTSxXQUFXLEdBQUcsYUFBYSxDQUFDO0FBQ2xDLE1BQU0sV0FBVyxHQUFHLFlBQVksQ0FBQztBQUNqQyxNQUFNLFdBQVcsR0FBRyxhQUFhLENBQUM7QUFFbEMsTUFBTSxRQUFRLEdBQUcsVUFBVSxDQUFDO0FBQzVCLE1BQU0sUUFBUSxHQUFHLFVBQVUsQ0FBQztBQUU1QixN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