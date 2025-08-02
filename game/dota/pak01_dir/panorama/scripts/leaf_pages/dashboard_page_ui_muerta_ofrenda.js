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
        $.RegisterForUnhandledEvent('DOTAMuertaCalaveraClosed', function (pageNum) {
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfdWlfbXVlcnRhX29mcmVuZGEuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9sZWFmX3BhZ2VzL2Rhc2hib2FyZF9wYWdlX3VpX211ZXJ0YV9vZnJlbmRhLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLG9EQUFvRDtBQUVwRCxJQUFJLEdBQXFDLENBQUM7QUFFMUMsSUFBSyxrQkFNSjtBQU5ELFdBQUssa0JBQWtCO0lBQ3RCLHlJQUErQyxDQUFBO0lBQy9DLHVKQUFzRCxDQUFBO0lBQ3RELHlKQUF1RCxDQUFBO0lBQ3ZELHVKQUFzRCxDQUFBO0lBQ3RELHlKQUF1RCxDQUFBO0FBQ3hELENBQUMsRUFOSSxrQkFBa0IsS0FBbEIsa0JBQWtCLFFBTXRCO0FBRUQsSUFBSSxZQUFnQyxDQUFDO0FBQ3JDLElBQUksZUFBZSxHQUFZLEtBQUssQ0FBQztBQUVyQyxNQUFNLFFBQVEsR0FBRyxNQUFNLENBQUM7QUFDeEIsTUFBTSxRQUFRLEdBQUcsS0FBSyxDQUFDO0FBQ3ZCLE1BQU0sUUFBUSxHQUFHLE9BQU8sQ0FBQztBQUN6QixNQUFNLFFBQVEsR0FBRyxNQUFNLENBQUM7QUFDeEIsTUFBTSxRQUFRLEdBQUcsY0FBYyxDQUFDO0FBRWhDLE1BQU0sT0FBTyxHQUFHLFNBQVMsQ0FBQztBQUMxQixNQUFNLE9BQU8sR0FBRyxRQUFRLENBQUM7QUFDekIsTUFBTSxPQUFPLEdBQUcsU0FBUyxDQUFDO0FBQzFCLE1BQU0sT0FBTyxHQUFHLFVBQVUsQ0FBQztBQUMzQixNQUFNLE9BQU8sR0FBRyxpQkFBaUIsQ0FBQztBQUVsQyxNQUFNLFdBQVcsR0FBRyxhQUFhLENBQUM7QUFDbEMsTUFBTSxXQUFXLEdBQUcsWUFBWSxDQUFDO0FBQ2pDLE1BQU0sV0FBVyxHQUFHLGFBQWEsQ0FBQztBQUVsQyxNQUFNLFFB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