/// <reference path="../dota.d.ts" />
/// <reference path="../common/async.ts" />

interface DOTAHudPregamePlayerDraft_t extends Panel_t
{
	IntroAnimationComplete(): void;
	GetNumPlayersToDraft(): number;
	GetPlayerID( playerPanel: Panel_t ): number;
	GetDraftPosition( playerID: number ): number;
	GetTeam( playerID: number ): number;
}

let gAsyncAbort : Async.AbortController | null = null;

                          
function CancelIntroAnimation(): void
{
	if ( gAsyncAbort !== null )
	{
		gAsyncAbort.abort();
		gAsyncAbort = null;
	}

	const preGame = $.GetContextPanel();

	preGame.RemoveClass( 'PD__Intro' );
	preGame.RemoveClass( 'PD__Versus' );
	preGame.RemoveClass( 'PD__VersusAnimation' );
	preGame.RemoveClass( 'PD__StartDraft' );
	preGame.RemoveClass( 'PD__ListPlayers' );

	const playerList = preGame.FindChildInLayoutFile( 'PlayerList' );
	if ( playerList )
	{
		for ( const playerPanel of playerList.Children() )
		{
			playerPanel.RemoveClass( 'DraftPlayer__PlayIntro' );
		}
	}
}

function* _IntroAnimation( preGame: DOTAHudPregamePlayerDraft_t )
{
	                                                                     
	preGame.AddClass( 'PD__Intro' );
	preGame.AddClass( 'PD__Description' );
	yield Async.Delay( 3.5 );

	preGame.RemoveClass( 'PD__Intro' );
	yield Async.Delay( 0.2 );

	                         
	preGame.AddClass( 'PD__Versus' );
	yield Async.Delay( 0.1 );

	preGame.AddClass( 'PD__VersusBadge' );

	yield Async.Delay( 0.3 );
	preGame.AddClass( 'PD__VersusCaptainsCollide' );

	$.DispatchEvent( 'PlaySoundEffect', 'PlayerDraft.VersusSting' );
	yield Async.Delay( 2.5 );
	preGame.RemoveClass( 'PD__VersusCaptainsCollide' );
	preGame.RemoveClass( 'PD__Versus' );
	preGame.RemoveClass( 'PD__Description' );

	yield Async.Delay( 0.2 );

	                                       
	preGame.AddClass( 'PD__ListPlayers' );
	const playerList = preGame.FindChildInLayoutFile( 'PlayerList' );
	if ( playerList )
	{
		for ( let playerPanel of playerList.Children() )
		{
			playerPanel.AddClass( 'DraftPlayer__PlayIntro' );
			$.DispatchEvent( 'PlaySoundEffect', 'PlayerDraft.ShowPlayer' );
			yield Async.Delay( 0.1 );
		}
	}

	                           
	preGame.AddClass( 'PD__StartDraft' );
	preGame.IntroAnimationComplete();
}

                          
function OnIntro(): void
{
	                               
	CancelIntroAnimation();

	const preGame = $.GetContextPanel() as DOTAHudPregamePlayerDraft_t;
	gAsyncAbort = new Async.AbortController();
	Async.RunSequence( function* () { yield* _IntroAnimation( preGame ); }, gAsyncAbort.signal );
}

                          
function OnPlayerPicked( playerId: number, playerPanel: Panel_t )
{
	$.DispatchEvent( 'PlaySoundEffect', 'PlayerDraft.Pick' );
}

