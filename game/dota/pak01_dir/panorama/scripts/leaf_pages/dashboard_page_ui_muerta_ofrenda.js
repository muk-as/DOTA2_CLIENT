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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfdWlfbXVlcnRhX29mcmVuZGEuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJkYXNoYm9hcmRfcGFnZV91aV9tdWVydGFfb2ZyZW5kYS50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLG9EQUFvRDtBQUVwRCxJQUFJLEdBQXFDLENBQUM7QUFFMUMsSUFBSyxrQkFNSjtBQU5ELFdBQUssa0JBQWtCO0lBQ3RCLHlJQUErQyxDQUFBO0lBQy9DLHVKQUFzRCxDQUFBO0lBQ3RELHlKQUF1RCxDQUFBO0lBQ3ZELHVKQUFzRCxDQUFBO0lBQ3RELHlKQUF1RCxDQUFBO0FBQ3hELENBQUMsRUFOSSxrQkFBa0IsS0FBbEIsa0JBQWtCLFFBTXRCO0FBRUQsSUFBSSxZQUFnQyxDQUFDO0FBQ3JDLElBQUksZUFBZSxHQUFZLEtBQUssQ0FBQztBQUVyQyxNQUFNLFFBQVEsR0FBRyxNQUFNLENBQUM7QUFDeEIsTUFBTSxRQUFRLEdBQUcsS0FBSyxDQUFDO0FBQ3ZCLE1BQU0sUUFBUSxHQUFHLE9BQU8sQ0FBQztBQUN6QixNQUFNLFFBQVEsR0FBRyxNQUFNLENBQUM7QUFDeEIsTUFBTSxRQUFRLEdBQUcsY0FBYyxDQUFDO0FBRWhDLE1BQU0sT0FBTyxHQUFHLFNBQVMsQ0FBQztBQUMxQixNQUFNLE9BQU8sR0FBRyxRQUFRLENBQUM7QUFDekIsTUFBTSxPQUFPLEdBQUcsU0FBUyxDQUFDO0FBQzFCLE1BQU0sT0FBTyxHQUFHLFVBQVUsQ0FBQztBQUMzQixNQUFNLE9BQU8sR0FBRyxpQkFBaUIsQ0FBQztBQUVsQyxNQUFNLFdBQVcsR0FBRyxhQUFhLENBQUM7QUFDbEMsTUFBTSxXQUFXLEdBQUcsWUFBWSxDQUFDO0FBQ2pDLE1BQU0sV0FBVyxHQUFHLGFBQWEsQ0FBQztBQUVsQyxNQUFNLFFBQVEsR0FBRyxVQUFVLENBQUM7QUFDNUIsTUFBTSxRQUFRLEdBQUcsVUFBVSxDQUFDO0FBRTVCLE1B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