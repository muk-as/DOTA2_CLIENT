/// <reference path="../dota.d.ts" />

interface DOTAHudPreGame_t extends Panel_t
{
	MapLoadingOutroFinished(): void;
}

                          
function OnPreGameBecameHidden(): void
{
	const preGame = $.GetContextPanel();
	preGame.RemoveClass( 'StrategyVersusTransition' );
	preGame.RemoveClass( 'VersusOutro' );
	preGame.RemoveClass( 'VersusVisible' );
	preGame.RemoveClass( 'MapLoading' );
	preGame.RemoveClass( 'MapLoadingOutro' );
}

                          
function OnPlayerDraftBecameVisible(): void
{
	OnPreGameBecameHidden();
}

                          
function OnStrategyBecameVisible(): void
{
	$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'PregameBG', 'shot_cameraB', 1.0 );
}

                          
function OnHeroGridBecameVisible(): void
{
	$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'PregameBG', 'shot_cameraA', 1.0 );
}

                          
function ShowVersusScreenV2(): void
{
	const preGame = $.GetContextPanel();

	preGame.AddClass( 'StrategyVersusTransition' );
	$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'PregameBG', 'shot_cameraC', 5.0 );
}

                          
function ShowMapLoadingScreen(): void
{
	const preGame = $.GetContextPanel();
	preGame.RemoveClass( 'StrategyVersusTransition' );
	preGame.AddClass( 'MapLoading' );
}

                          
function TransitionFromMapLoadingScreen(): void
{
	const preGame = $.GetContextPanel();
	preGame.AddClass( 'MapLoadingOutro' );

	                                               
	const mapLoadingOutroDuration = 5.0;
	$.Schedule( mapLoadingOutroDuration, function ()
	{
		$.GetContextPanel<DOTAHudPreGame_t>().MapLoadingOutroFinished();
	} );
}
