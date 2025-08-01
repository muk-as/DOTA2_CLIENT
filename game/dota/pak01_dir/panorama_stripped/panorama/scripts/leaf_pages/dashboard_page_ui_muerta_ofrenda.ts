/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../dota_sequence_actions.ts" />

var seq: RunSequentialActions | undefined;

enum MuertaOfrendaState {
	DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL = 0,
	DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA = 1,
	DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA = 2,
	DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA = 3,
	DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA = 4
}

var currentState: MuertaOfrendaState;
var isCameraLerping: boolean = false;

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

let handlersRegistered:boolean  = false;

function RegisterHandlers() {
    Setup();

    if (!handlersRegistered) {
        handlersRegistered = true;

        currentState = $('#OfrendaModelBackground')!.GetAttributeInt('current_state', 0);

        $.RegisterEventHandler('DOTAScenePanelSceneLoaded', $('#OfrendaModelBackground')!, function (scenePanel: any) {
            Setup();
        });

        $.RegisterEventHandler('DOTAScenePanelEntityClicked', $('#OfrendaModelBackground')!, function (scenePanel: any, entityName: string) {
                                                                                                                                
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

        $.RegisterEventHandler('DOTAScenePanelEntityMouseOver', $('#OfrendaModelBackground')!, function (scenePanel, entityName: string) {
                                                                                                                                 
            switch (entityName) {
                case ENT_OBJ1:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL) {
                        if (currentState > MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL) {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_ALT_OBJ1, 'start', 1);
                        } else {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ1, 'start', 1);
                        }
                        $('#CalaveraTip1')!.RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ2:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA) {
                        if (currentState > MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA) {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_ALT_OBJ2, 'start', 1);
                        } else {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ2, 'start', 1);
                        }
                        $('#CalaveraTip2')!.RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ3:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA) {
                        if (currentState > MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA) {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_ALT_OBJ3, 'start', 1);
                        } else {
                            $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ3, 'start', 1);
                        }
                        $('#CalaveraTip3')!.RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ4:
                    if (currentState >= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA) {
                        $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ4, 'start', 1);
                        $('#CalaveraTip4')!.RemoveClass('Hidden');
                    }
                    break;
                case ENT_OBJ5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ5, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, ENT_PIC1, 'SetAnimation', '@ofrenda_frame_round_off');
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, ENT_PIC2, 'SetAnimation', '@ofrenda_frame_round_on');
                    break;

                case ENT_CNDL1:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL1, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL1, 'start', 1);
                    break;

                case ENT_CNDL2:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL2, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL2, 'start', 1);
                    break;

                case ENT_CNDL3:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL3, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL3, 'start', 1);
                    break;

                case ENT_CNDL4:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL4, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL4, 'start', 1);
                    break;

                case ENT_CNDL5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL5, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL5, 'start', 1);
                    break;

                case ENT_CNDL6:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL6, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL6, 'start', 1);
                    break;

                case ENT_CNDL7:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL7, 'StopPlayEndCap', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL7, 'start', 1);
                    break;

                default:
                    break;

            }

        });

        $.RegisterEventHandler('DOTAScenePanelEntityMouseOut', $('#OfrendaModelBackground')!, function (scenePanel, entityName: string) {
                                                                                                                                  
            switch (entityName) {
                case ENT_OBJ1:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ1, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_ALT_OBJ1, 'DestroyImmediately', 0);
                    $('#CalaveraTip1')!.AddClass('Hidden');
                    break;
                case ENT_OBJ2:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ2, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_ALT_OBJ2, 'DestroyImmediately', 0);
                    $('#CalaveraTip2')!.AddClass('Hidden');
                    break;
                case ENT_OBJ3:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ3, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_ALT_OBJ3, 'DestroyImmediately', 0);
                    $('#CalaveraTip3')!.AddClass('Hidden');
                    break;
                case ENT_OBJ4:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ4, 'DestroyImmediately', 0);
                    $('#CalaveraTip4')!.AddClass('Hidden');
                    break;
                case ENT_OBJ5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_OBJ5, 'DestroyImmediately', 0);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, ENT_PIC1, 'SetAnimation', '@ofrenda_frame_round_on');
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, ENT_PIC2, 'SetAnimation', '@ofrenda_frame_round_off');
                    break;

                case ENT_CNDL1:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL1, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL1, 'StopPlayEndCap', 0);
                    break;

                case ENT_CNDL2:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL2, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL2, 'StopPlayEndCap', 0);
                    break;

                case ENT_CNDL3:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL3, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL3, 'StopPlayEndCap', 0);
                    break;

                case ENT_CNDL4:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL4, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL4, 'StopPlayEndCap', 0);
                    break;

                case ENT_CNDL5:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL5, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL5, 'StopPlayEndCap', 0);
                    break;

                case ENT_CNDL6:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL6, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL6, 'StopPlayEndCap', 0);
                    break;

                case ENT_CNDL7:
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_BASE_CNDL7, 'start', 1);
                    $.DispatchEvent('DOTASceneFireEntityInput', $('#OfrendaModelBackground')!, FX_GHOST_CNDL7, 'DestroyImmediately', 0);
                    break;

                default:
                    break;

            }
        });

        $.RegisterForUnhandledEvent('DOTAMuertaCalaveraClosed', function (pageNum: number) {
            if (currentState <= MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA) {
                PlaySequence();
            }
        });

        $.RegisterForUnhandledEvent('DOTAMuertaDebutClosed', function () {
            PlaySequence();
        });

        $.RegisterForUnhandledEvent('DOTAMuertaOfrendaStateChanged', function (scenePanel, newState: number) {
            if (currentState != newState) {
                currentState = newState;

                PlaySequence();
            }
        });
    }
}

   
                                               
   
var Setup = function (): void
{
    isCameraLerping = true;
    seq = new RunSequentialActions();

    seq.actions.push( new WaitForClassAction( $( '#OfrendaModelBackground' ), 'SceneLoaded' ) );

    seq.actions.push( new AddClassAction( $( '#OfrendaMainContainer' ), 'Initialize' ) );
    seq.actions.push(new AddClassAction($('#OfrendaModelBackground'), 'Initialize'));

    seq.actions.push(new WaitAction(0.2));

                                                
    seq.actions.push(new RunFunctionAction(function () {
        UpdateAnimations();
    }));

    seq.actions.push(new WaitAction(3.0));

                                                           
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'OfrendaModelBackground', 'hero_camera_post', 0.0); isCameraLerping = false; }))
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTAGlobalSceneSetRootEntity', 'OfrendaModelBackground', 'root_post'); }))
    seq.actions.push(new LerpRotateAction($('#OfrendaModelBackground'), 0, 0, 0, 0, -1.0, 1.0, -0.5, 0.5, 0.0));

                          
    RunSingleAction( seq );
};

var UpdateAnimations = function(): void
{
    var scenePanel: DOTAScenePanel_t = $('#OfrendaModelBackground');
    switch ( currentState )
    {
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_INITIAL:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ1, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ2, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ3, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ4, false);

            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FIRST_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ2, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ3, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ4, false);

            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_SECOND_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ2, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ3, false);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ4, false);

            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_THIRD_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ2, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ3, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ4, false);

            break;
        case MuertaOfrendaState.DOTA_MUERTA_OFRENDA_REVEAL_SEQUENCE_FOURTH_CALAVERA:
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ1, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ2, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ3, true);
            $.DispatchEvent('DOTASetMuertaModelRevealedState', $('#OfrendaModelBackground')!, ENT_OBJ4, true);

            break;
        default:
            break;
    }
}

var PlaySequence = function ()  {
    let seq = new RunSequentialActions();

      
                                                        
                                                                                   
                                                       
        
      

                                            
    seq.actions.push(new RunFunctionAction(function () {
        UpdateAnimations();
    }));

    RunSingleAction(seq);
}