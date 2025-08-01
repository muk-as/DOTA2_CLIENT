/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />

let gGameStateAsyncAbort: Async.AbortController | null = null;
let gUIEventAsyncAbort: Async.AbortController | null = null;
let gVersion: number = 0;

interface DOTABPCrownfallEncounterShmupPopup_t extends Panel_t
{
    game_state: number;
    NotifyVictoryScreenComplete(): void;
};

type ShmupAnimationFunction_t = ( panel: DOTABPCrownfallEncounterShmupPopup_t, abortSignal: Async.AbortSignal_t ) => Generator<unknown, void, unknown>;
interface ShmupScoreCategory_t
{
    token: string;
    score: number;
    score_per_instance: number;
};

interface ShmupVictoryScreenInfo_t
{
    total_score: number;
    scores: ShmupScoreCategory_t[];
};

let gVictoryInfo: ShmupVictoryScreenInfo_t | null = null;

const kState = {
    Attract: 0,
    Running: 1,
    Paused: 2,
    GameOver: 3,
    Victory: 4
};


function _CancelUIAnimations(): void
{
    if ( gUIEventAsyncAbort !== null )
    {
        gUIEventAsyncAbort.abort();
        gUIEventAsyncAbort = null;
    }

    const panel = $.GetContextPanel();
    if ( !panel )
        return;

                                                        
    panel.RemoveClass( "BossWarning_Active" );
    panel.RemoveClass( "BossWarning_Show" );
    panel.RemoveClass( "BossWarning_PlayAnimation" );
    panel.RemoveClass( "BossWarning_PlaySubtitleAnimation" );
}

function _RunUIAnimation( animFunc: ShmupAnimationFunction_t ): void
{
    _CancelUIAnimations();

    const panel = $.GetContextPanel() as DOTABPCrownfallEncounterShmupPopup_t;
    gUIEventAsyncAbort = new Async.AbortController();
    Async.RunSequence( function* ( abortSignal ) { yield* animFunc( panel, abortSignal ); }, gUIEventAsyncAbort.signal );
}

function _CancelStateAnimations(): void
{
    if ( gGameStateAsyncAbort !== null )
    {
        gGameStateAsyncAbort.abort();
        gGameStateAsyncAbort = null;
    }

    const panel = $.GetContextPanel() as DOTABPCrownfallEncounterShmupPopup_t;
    if ( !panel )
        return;

                                                        
    panel.RemoveClass( "ShowGameOverFade" );
    panel.RemoveClass( "ShowGameOverText" );
    panel.RemoveClass( "ShowGameOverButton" );

    panel.RemoveClass( "Victory_Active" );
    panel.RemoveClass( "Victory_Show" );
    panel.RemoveClass( "Victory_Title" );
    panel.RemoveClass( "Victory_PerformanceSummary" );
    panel.RemoveClass( "Victory_ScoreTitle" );
    panel.RemoveClass( "Victory_ScoreValue" );
    panel.RemoveClass( "Victory_ComboTitle" );
    panel.RemoveClass( "Victory_ComboValue" );
    panel.RemoveClass( "Victory_RatingTitle" );
    panel.RemoveClass( "Victory_RatingValue" );
    panel.RemoveClass( "Victory_ShowButtons" );

    const scoreCategories = panel.FindChildInLayoutFile( "VictoryCategories" );
    if ( scoreCategories )
    {
        scoreCategories.RemoveAndDeleteChildren();
    }
}

function _RunStateAnimation( animFunc: ShmupAnimationFunction_t ): void
{
    _CancelStateAnimations();
    _CancelUIAnimations();

    const panel = $.GetContextPanel() as DOTABPCrownfallEncounterShmupPopup_t;
    gGameStateAsyncAbort = new Async.AbortController();
    Async.RunSequence( function* ( abortSignal ) { yield* animFunc( panel, abortSignal ); }, gGameStateAsyncAbort.signal );
}

function* _GameOverAnimation( panel: DOTABPCrownfallEncounterShmupPopup_t )
{
                                                  
    yield Async.Delay( 1.5 );

                   
    panel.AddClass( "ShowGameOverFade" );
    yield Async.Delay( 1.5 );

                
    panel.AddClass( "ShowGameOverText" );
    yield Async.Delay( 1 );

                 
    panel.AddClass( "ShowGameOverButton" );
}

function DebugScoreInfo( score: number, token: string ): ShmupScoreCategory_t
{
    return { token: token, score: score, score_per_instance: 0 };
}
const kDebugVictoryInfo: ShmupVictoryScreenInfo_t = {
    total_score: 513500 + 1838 + 424600 + 500000 + 160000 + 49000,
    scores: [
        DebugScoreInfo( 513500, '#DOTA_Crownfall_Shmup_ScoreCategory_EnemyKill' ),
        DebugScoreInfo( 1838, '#DOTA_Crownfall_Shmup_ScoreCategory_Damage' ),
        DebugScoreInfo( 424600, '#DOTA_Crownfall_Shmup_ScoreCategory_Combo' ),
        DebugScoreInfo( 500000, '#DOTA_Crownfall_Shmup_ScoreCategory_BossKill' ),
        DebugScoreInfo( 160000, '#DOTA_Crownfall_Shmup_ScoreCategory_RemainingLives' ),
        DebugScoreInfo( 49000, '#DOTA_Crownfall_Shmup_ScoreCategory_RemainingTime' ),
    ]
};

function* _VictoryAnimation( panel: DOTABPCrownfallEncounterShmupPopup_t, abortSignal: Async.AbortSignal_t )
{
    var victoryInfo: ShmupVictoryScreenInfo_t;
    if ( gVictoryInfo )
    {
        victoryInfo = gVictoryInfo;
    }
    else
    {
                                                                             
        $.Warning( 'shmup victory screen with no score info\n' );
        victoryInfo = kDebugVictoryInfo;
    }

                                                        
    var bScoreUpdateInProgress = true;
    var nCurrentScore: number = 0;
    function* ScoreAnim()
    {
        var nDisplayedScore: number = 0;
        var nDisplayedScorePerTick: number = 0;
        var msLast = Date.now();
        var msLeftover: number = 0;
        var sfx = null;
        const SCORE_TICKS = 23;
        const MS_PER_TICK: number = 1000.0 / 60.0;         

        panel.SetDialogVariableInt( "victory_score", nDisplayedScore );
    
        while ( nCurrentScore > nDisplayedScore || bScoreUpdateInProgress )
        {
            yield Async.NextFrame();

            const msCurrent = Date.now();
            msLeftover += msCurrent - msLast;
            msLast = msCurrent;

            if ( nCurrentScore > nDisplayedScore )
            {
                var nTicks = Math.floor( msLeftover / MS_PER_TICK );
                msLeftover %= MS_PER_TICK;

                if ( !sfx )
                {
                    sfx = PlayUISoundScript( 'XP.Count' );
                }

                if ( nTicks > 0 )
                {
                                                                     
                    const diff = nCurrentScore - nDisplayedScore;
                    nDisplayedScorePerTick = Math.max( nDisplayedScorePerTick, Math.ceil( diff / SCORE_TICKS ) );
                    nDisplayedScore = Math.min( nCurrentScore, nDisplayedScore + nDisplayedScorePerTick * nTicks );
                    panel.SetDialogVariableInt( "victory_score", nDisplayedScore );
                }
            }
            else
            {
                nDisplayedScorePerTick = 0;
                msLeftover = 0;

                if ( sfx )
                {
                    StopUISoundScript( sfx );
                    sfx = null;
                }
            }
        }

        if ( sfx )
        {
            StopUISoundScript( sfx );
            sfx = null;
        }
        panel.SetDialogVariableInt( "victory_score", nCurrentScore );
    }
    Async.RunSequence( ScoreAnim, abortSignal );

                               
    yield Async.Delay( 1.5 );

                                                                                            
    panel.AddClass( "Victory_Active" );

               
    panel.AddClass( "ShowGameOverFade" );
    yield Async.Delay( 2 );

                          
    panel.AddClass( "Victory_Show" );

              
    yield Async.Delay( 1 );

    panel.AddClass( "Victory_Title" );
    yield Async.Delay( 2 );

    panel.AddClass( "Victory_PerformanceSummary" );
    yield Async.Delay( 1 );

    panel.AddClass( "Victory_ComboTitle" );
    yield Async.Delay( 0.3 );

    panel.AddClass( "Victory_ComboValue" );
    yield Async.Delay( 0.3 );

    panel.AddClass( "Victory_ScoreTitle" );
    yield Async.Delay( 0.3 );

    panel.AddClass( "Victory_ScoreValue" );
    yield Async.Delay( 0.1 );

    const scoreCategories = panel.FindChildInLayoutFile( "VictoryCategories" );
    if ( scoreCategories )
    {
        scoreCategories.RemoveAndDeleteChildren();

        for ( const scoreItem of victoryInfo.scores )
        {
            var scoreItemPanel = $.CreatePanel( 'Panel', scoreCategories, undefined );
            scoreItemPanel.BLoadLayoutSnippet( 'VictoryScoreItem' );
            scoreItemPanel.SetDialogVariableLocString( 'item_name', scoreItem.token );
            scoreItemPanel.SetDialogVariableInt( 'item_score', scoreItem.score );
            yield Async.NextFrame();
            scoreItemPanel.AddClass( 'ShowScoreItem' );

            yield Async.Delay( 0.6 );
            nCurrentScore += scoreItem.score;
            yield Async.Delay( 0.1 );
        }
    }

                                      
    nCurrentScore = victoryInfo.total_score;
    $.Msg( 'Current score: ' + nCurrentScore );
    bScoreUpdateInProgress = false;                                                           

    yield Async.Delay( 0.3 );

    yield Async.Delay( 1 );
    panel.AddClass( "Victory_RatingTitle" );
    yield Async.Delay( 2 );

    panel.AddClass( "Victory_RatingValue" );
    yield Async.Delay( 0.8 );
    panel.TriggerClass( "CameraShake" );
    $.DispatchEvent( 'PlaySoundEffect', 'HeroBadgeLevelUpReward.ShowReward' );               
    yield Async.Delay( 2 );

    panel.AddClass( "Victory_ShowButtons" );

                                                            
    panel.NotifyVictoryScreenComplete();

                                                                                 
}

                          
function UIStateChange( eState: number ): void
{
    if ( gVersion != $.GetContextPanel().GetAttributeInt( 'scriptversion', 0 ) )
    {
        return;
    }
    
    $.Msg( 'SHMUP: changing to game_state ' + eState );

    if ( eState == kState.GameOver )
    {
        _RunStateAnimation( _GameOverAnimation );
    }
    else if ( eState == kState.Victory )
    {
        _RunStateAnimation( _VictoryAnimation );
    }
    else
    {
        _CancelStateAnimations();
        _CancelUIAnimations();
    }
}

function* _BossWarningAnimation( panel: DOTABPCrownfallEncounterShmupPopup_t )
{
                                                                                  
                                                                                                                                     
    panel.AddClass( "BossWarning_Active" );
    yield Async.NextFrame();

                                                                      

                                                   
    panel.AddClass( "BossWarning_Show" );
    yield Async.Delay( 0.6 );

               
    $.DispatchEvent( 'PlaySoundEffect', 'crownfall.shmup.boss.warning' );

                       
    panel.AddClass( "BossWarning_PlayAnimation" );
    yield Async.Delay( 0.3 );
    panel.AddClass( "BossWarning_PlaySubtitleAnimation" );

                                             
    yield Async.Delay( 6 );

                                          
    panel.RemoveClass( "BossWarning_Show" );
    yield Async.Delay( 1 );

                                                                  
    panel.RemoveClass( "BossWarning_PlayAnimation" );
    panel.RemoveClass( "BossWarning_PlaySubtitleAnimation" );
    yield Async.NextFrame();

                                           
    panel.RemoveClass( "BossWarning_Active" );
}

                          
function BossWarning(): void
{
    $.Msg( 'SHMUP: boss warning' );

    _RunStateAnimation( _BossWarningAnimation );
}

                     
function PopulateVictoryScreen( info: ShmupVictoryScreenInfo_t )
{
    gVictoryInfo = info;
}

                                
function OnScriptLoad()
{
                               

    _CancelUIAnimations();

    const panel = $.GetContextPanel() as DOTABPCrownfallEncounterShmupPopup_t;
    if ( panel )
    {
        gVersion = panel.GetAttributeInt( 'scriptversion', 0 ) + 1;
        panel.SetAttributeInt( 'scriptversion', gVersion );
        $.Schedule( 0.1, () => UIStateChange( panel.game_state ) );
    }
}
OnScriptLoad();
