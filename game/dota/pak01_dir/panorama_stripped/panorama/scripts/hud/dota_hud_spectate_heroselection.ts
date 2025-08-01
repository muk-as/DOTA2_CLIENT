/// <reference path="../dota.d.ts" />

                          
function OnHeroPicked( teamIndex: number, playerIndex: number ): void
{
	                                                                                 

	if ( teamIndex == 0 )
	{
		$( '#Row0' )!.RemoveClass( 'ViewAll' );
		const scenePanelRadiant = $( '#RadiantScene' ) as DOTAScenePanel_t;
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'RadiantScene', teamIndex + '_camera_hero' + playerIndex, 1.5 );
		scenePanelRadiant.FireEntityInput( 'fx_spot_0_' + playerIndex, 'Stop', '' );
		$.DispatchEvent( 'AddStyle', $( '#SpectateHeroSelection' )!, 'RadiantFocusActive' );
		scenePanelRadiant.FireEntityInput( 'fx_tease_' + teamIndex + '_' + playerIndex, 'Stop', '' );
		scenePanelRadiant.FireEntityInput( 'fx_tease_' + teamIndex + '_' + playerIndex, 'Start', '' );
	}
	else if ( teamIndex == 1 )
	{
		$( '#Row1' )!.RemoveClass( 'ViewAll' );
		const scenePanelDire = $( '#DireScene' ) as DOTAScenePanel_t;
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'DireScene', teamIndex + '_camera_hero' + playerIndex, 1.5 );
		scenePanelDire.FireEntityInput( 'fx_spot_1_' + playerIndex, 'Stop', '' );
		$.DispatchEvent( 'AddStyle', $( '#SpectateHeroSelection' )!, 'DireFocusActive' );
		scenePanelDire.FireEntityInput( 'fx_tease_' + teamIndex + '_' + playerIndex, 'Stop', '' );
		scenePanelDire.FireEntityInput( 'fx_tease_' + teamIndex + '_' + playerIndex, 'Start', '' );
	}

	$.DispatchEvent( 'PlaySoundEffect', 'InspectorCam.Activate' );
}

                          
function OnHeroPickStart( teamIndex: number, playerIndex: number ): void
{
	                                                                                    

	if ( teamIndex == 0 )
	{
		const scenePanelRadiant = $( '#RadiantScene' ) as DOTAScenePanel_t;
		scenePanelRadiant.FireEntityInput( 'fx_spot_' + teamIndex + '_' + playerIndex, 'Stop', '' );
		scenePanelRadiant.FireEntityInput( 'fx_spot_' + teamIndex + '_' + playerIndex, 'Start', '' );
	}
	else if ( teamIndex == 1 )
	{
		const scenePanelDire = $( '#DireScene' ) as DOTAScenePanel_t;
		scenePanelDire.FireEntityInput( 'fx_spot_' + teamIndex + '_' + playerIndex, 'Stop', '' );
		scenePanelDire.FireEntityInput( 'fx_spot_' + teamIndex + '_' + playerIndex, 'Start', '' );
	}

	for ( let i = 0; i < 5; i++ ) 
	{
		$( '#BansBackground' )!.RemoveClass( 'team1slot' + i );
	}
	for ( let i = 0; i < 5; i++ ) 
	{
		$( '#BansBackground' )!.RemoveClass( 'team0slot' + i );
	}

	$.DispatchEvent( 'AddStyle', $( '#BansBackground' )!, 'team' + teamIndex + 'slot' + playerIndex );
}

                          
function OnHeroSpawned( teamIndex: number, playerIndex: number ): void
{
	                                                                                  

	if ( teamIndex == 0 )
	{
		const scenePanelRadiant = $( '#RadiantScene' ) as DOTAScenePanel_t;
		scenePanelRadiant.FireEntityInput( 'fx_' + teamIndex + '_' + playerIndex, 'Stop', '' );
		scenePanelRadiant.FireEntityInput( 'fx_' + teamIndex + '_' + playerIndex, 'Start', '' );
	}
	else if ( teamIndex == 1 )
	{
		const scenePanelDire = $( '#DireScene' ) as DOTAScenePanel_t;
		scenePanelDire.FireEntityInput( 'fx_' + teamIndex + '_' + playerIndex, 'Stop', '' );
		scenePanelDire.FireEntityInput( 'fx_' + teamIndex + '_' + playerIndex, 'Start', '' );
	}
}

                          
function OnHeroSpawnedUI( teamIndex: number, playerIndex: number ): void
{
	                                                                                    

	if ( teamIndex == 0 )
	{
		$( '#HeroPickedRadiant' )!.AddClass( 'ShowPickedLabel' );
	}
	else if ( teamIndex == 1 )
	{
		$( '#HeroPickedDire' )!.AddClass( 'ShowPickedLabel' );
	}
}

                          
function OnHeroSpawnComplete( teamIndex: number, playerIndex: number ): void
{
	                                                                                      

	if ( teamIndex == 0 )
	{
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'RadiantScene', 'radiant_camera', 1.5 );
		$( '#Row0' )!.AddClass( 'ViewAll' );
		$( '#SpectateHeroSelection' )!.RemoveClass( 'RadiantFocusActive' );
		$( '#HeroPickedRadiant' )!.RemoveClass( 'ShowPickedLabel' );
	}
	else if ( teamIndex == 1 )
	{
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'DireScene', 'dire_camera', 1.5 );
		$( '#Row1' )!.AddClass( 'ViewAll' );
		$( '#SpectateHeroSelection' )!.RemoveClass( 'DireFocusActive' );
		$( '#HeroPickedDire' )!.RemoveClass( 'ShowPickedLabel' );
	}
}

function OnHeroBanStart( teamIndex: number, playerIndex: number ): void
{
	                                                                                   
}

function OnHeroBanned( teamIndex: number, playerIndex: number ): void
{
	                                                                                 
}



                          
function OnDraftStateStarted(): void
{
	                                 
}
