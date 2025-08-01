/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />

var OnRoomRevealed = function ( id: string, nPrevState: number, nFlareOrigin: number ): void
{
	const seq = new RunSequentialActions();

	if ( nFlareOrigin == 255 )
	{
		nFlareOrigin = 0;
	}
	const center = $( '#Room' + nFlareOrigin )!;
	const panel = $( '#' + id )!;
	const fxPanel = $( '#FlareFX' ) as DOTAScenePanel_t;

	if ( nFlareOrigin != 0 )
	{
		seq.actions.push( new AddClassAction( center, 'FlareActivating' ) );
		seq.actions.push( new RunFunctionAction( function ()
		{
			$.DispatchEvent( 'PlaySoundEffect', 'ui_treasure_map' );
		} ) );
		seq.actions.push( new RunFunctionAction( function ()
		{
			$.DispatchEvent( 'DOTACavernCrawlFlareShooting', panel, true );
		} ) );
		seq.actions.push( new WaitAction( 1.2 ) );
		seq.actions.push( new RemoveClassAction( center, 'FlareActivating' ) );
	}

	let x = panel.actualxoffset / panel.actualuiscale_x;
	let y = panel.actualyoffset / panel.actualuiscale_y;
	let cx = center.actualxoffset / center.actualuiscale_x;
	let cy = center.actualyoffset / center.actualuiscale_y;

	const w = 3072;                              
	const h = 3072;                               
	x -= w / 2;
	y -= h / 2;
	y = -y;

	cx -= w / 2;
	cy -= h / 2;

	if ( nFlareOrigin != 0 )
	{
		cy -= center.actuallayoutheight * .5 / 2;
	}

	cy = -cy;

	const speed = 250;

	seq.actions.push( new ActionWithTimeout( new WaitForClassAction( fxPanel, 'SceneLoaded' ), 3.0 ) );

	seq.actions.push( new AddClassAction( fxPanel, 'ShowFlare' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'ui_flare_fire' );
		fxPanel.FireEntityInput( 'flare_fx', 'SetControlPoint', '0: ' + cx + ' ' + cy + ' 0' );
		fxPanel.FireEntityInput( 'flare_fx', 'SetControlPoint', '1: ' + x + ' ' + y + ' 0' );
		fxPanel.FireEntityInput( 'flare_fx', 'SetControlPoint', '2: ' + speed + ' 0 0' );
		fxPanel.FireEntityInput( 'flare_fx', 'start', 0 );
	} ) );

	const dx = x - cx;
	const dy = y - cy;
	let duration = Math.sqrt( dx * dx + dy * dy ) / speed;
	duration = duration + 0.5;

	seq.actions.push( new WaitAction( duration ) );

	if ( nFlareOrigin != 0 )
	{
		seq.actions.push( new RunFunctionAction( function ()
		{
			$.DispatchEvent( 'DOTACavernCrawlFlareShooting', panel, false );
		} ) );
	}

	duration = 3.0;

	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'flare_fx', 'StopPlayEndCap', 0 );
		$.DispatchEvent( 'PlaySoundEffect', 'ui_flare_explode' );

		fxPanel.FireEntityInput( 'illumination_fx', 'SetControlPoint', '0: ' + x + ' ' + y + ' 0' );
		fxPanel.FireEntityInput( 'illumination_fx', 'SetControlPoint', '1: ' + ( duration - 1 ) + ' 0 0' );
		fxPanel.FireEntityInput( 'illumination_fx', 'start', 0 );
	} ) );

	seq.actions.push( new WaitAction( duration - 1.6 ) );

	seq.actions.push( new AddClassAction( panel, 'RewardRevealing' ) );
	seq.actions.push( new AddClassAction( panel, 'RewardRevealed' ) );
	seq.actions.push( new RemoveClassAction( panel, 'RewardUnavailable' ) );

	seq.actions.push( new WaitAction( 1.6 ) );

	seq.actions.push( new RemoveClassAction( panel, 'RewardRevealing' ) );
	seq.actions.push( new RemoveClassAction( fxPanel, 'ShowFlare' ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'flare_fx', 'stop', 0 );
		fxPanel.FireEntityInput( 'illumination_fx', 'stop', 0 );
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel );
	} ) );

	RunSingleAction( seq );
};

var OnRoomAvailable = function ( id: string, nPrevState: number ): void
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id )!;

	if ( nPrevState == 2 )                    
	{
		seq.actions.push( new AddClassAction( panel, 'RewardReavealedToAvailable' ) );
	}
	else
	{
		seq.actions.push( new AddClassAction( panel, 'RewardRevealing' ) );
	}
	seq.actions.push( new RemoveClassAction( panel, 'RewardRevealed' ) );
	seq.actions.push( new RemoveClassAction( panel, 'RewardUnavailable' ) );
	seq.actions.push( new WaitAction( 1.3 ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'Relic.Received' );
	} ) );

	seq.actions.push( new WaitAction( 0.3 ) );

	seq.actions.push( new RemoveClassAction( panel, 'RewardRevealing' ) );
	seq.actions.push( new RemoveClassAction( panel, 'RewardReavealedToAvailable' ) );
	seq.actions.push( new AddClassAction( panel, 'RewardAvailable' ) );

	seq.actions.push( new WaitAction( 0.3 ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel );
	} ) );

	RunSingleAction( seq );
};

var OnRoomCompleted = function ( id: string, nPrevState: number, isSet: boolean, isTreasureMap: boolean ): void
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id );
	seq.actions.push( new RemoveClassAction( panel, 'RewardAvailable' ) );

	if ( isTreasureMap )
	{
		seq.actions.push( new AddClassAction( panel, 'RewardClaimed' ) );
		seq.actions.push( new WaitAction( 0.1 ) );	                                                  
		seq.actions.push( new RunFunctionAction( function ()
		{
			$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel! );
		} ) );
		RunSingleAction( seq );
		return;
	}

	seq.actions.push( new AddClassAction( panel, 'RewardClaiming' ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'Shards.Stop.Increase' );
	} ) );

	if ( isSet )
	{
		seq.actions.push( new WaitAction( 0.7 ) );
		seq.actions.push( new RunFunctionAction( function ()
		{
			$.DispatchEvent( 'PlaySoundEffect', 'Relic.Received' );
		} ) );
		seq.actions.push( new WaitAction( 0.3 ) );
	}
	else
	{
		seq.actions.push( new WaitAction( 1.0 ) );
	}

	seq.actions.push( new RemoveClassAction( panel, 'RewardClaiming' ) );
	seq.actions.push( new AddClassAction( panel, 'RewardClaimed' ) );

	seq.actions.push( new WaitAction( 0.5 ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel! );
	} ) );

	RunSingleAction( seq );
};

var OnPathRevealed = function ( id: string, nPrevState: number ): void
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id );
	seq.actions.push( new AddClassAction( panel, 'ChallengeRevealing' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeUnavailable' ) );
	seq.actions.push( new AddClassAction( panel, 'ChallengeRevealed' ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'ui_flare_explode' );
	} ) );

	seq.actions.push( new WaitAction( 1.6 ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeRevealing' ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel! );
	} ) );

	RunSingleAction( seq );
};

var OnPathAvailable = function ( id: string, nPrevState: number ): void
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id );

	if ( nPrevState == 2 )                    
	{
		seq.actions.push( new AddClassAction( panel, 'ChallengeReavealedToAvailable' ) );
	}
	else
	{
		seq.actions.push( new AddClassAction( panel, 'ChallengeRevealing' ) );
	}

	seq.actions.push( new RemoveClassAction( panel, 'ChallengeUnavailable' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeRevealed' ) );
	seq.actions.push( new WaitAction( 1.3 ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'Relic.Received' );
	} ) );

	seq.actions.push( new WaitAction( 0.3 ) );

	seq.actions.push( new RemoveClassAction( panel, 'ChallengeRevealing' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeReavealedToAvailable' ) );
	seq.actions.push( new AddClassAction( panel, 'ChallengeAvailable' ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel! );
	} ) );

	RunSingleAction( seq );
};

var OnPathRetired = function ( id: string, nPrevState: number ): void
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id );

	seq.actions.push( new AddClassAction( panel, 'ChallengeRetiring' ) );

	seq.actions.push( new WaitAction( 1.6 ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeRetiring' ) );
	seq.actions.push( new AddClassAction( panel, 'ChallengeRetired' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeAvailable' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeRevealed' ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel! );
	} ) );

	RunSingleAction( seq );
};

var OnPathHalfCompleted = function ( id: string, nPrevState: number ): void
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id )!;

	const fxPanel = $( '#ChallengeFX' ) as DOTAScenePanel_t;
	const x = panel.actualxoffset / panel.actualuiscale_x;
	const y = panel.actualyoffset / panel.actualuiscale_y;
	fxPanel.SetPositionInPixels( x, y, 0 );

	seq.actions.push( new ActionWithTimeout( new WaitForClassAction( fxPanel, 'SceneLoaded' ), 2.0 ) );

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'ui_wounded_start' );
	} ) );
	seq.actions.push( new AddClassAction( fxPanel, 'ShowWounding' ) );
	seq.actions.push( new WaitAction( 0.8 ) );

	seq.actions.push( new AddClassAction( panel, 'ChallengeWounding' ) );
	seq.actions.push( new AddClassAction( panel, 'ChallengeWound1' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'wound_fx_left', 'start', 0 );
		$.DispatchEvent( 'PlaySoundEffect', 'ui_wounded_attack' );
	} ) );
	seq.actions.push( new WaitAction( 0.2 ) );

	seq.actions.push( new AddClassAction( panel, 'ChallengeWound2' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeWound1' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'wound_fx_left', 'stop', 0 );
		fxPanel.FireEntityInput( 'wound_fx_right', 'start', 0 );
		$.DispatchEvent( 'PlaySoundEffect', 'ui_wounded_attack' );
	} ) );
	seq.actions.push( new WaitAction( 0.2 ) );

	seq.actions.push( new AddClassAction( panel, 'ChallengeWound3' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeWound2' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'wound_fx_right', 'stop', 0 );
		fxPanel.FireEntityInput( 'wound_fx_left', 'start', 0 );
		$.DispatchEvent( 'PlaySoundEffect', 'ui_wounded_attack' );
	} ) );
	seq.actions.push( new WaitAction( 0.2 ) );

	seq.actions.push( new AddClassAction( panel, 'ChallengeWound4' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeWound3' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'wound_fx_left', 'stop', 0 );
		fxPanel.FireEntityInput( 'wound_fx_right', 'start', 0 );
		$.DispatchEvent( 'PlaySoundEffect', 'ui_wounded_attack' );
	} ) );
	seq.actions.push( new WaitAction( 0.2 ) );

	seq.actions.push( new AddClassAction( panel, 'ChallengeHalfCompleted' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeWound4' ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeWounding' ) );

	seq.actions.push( new WaitAction( 1.2 ) );
	seq.actions.push( new RemoveClassAction( fxPanel, 'ShowWounding' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'wound_fx_right', 'stop', 0 );
	} ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel );
	} ) );

	RunSingleAction( seq );
};

var OnPathCompleted = function ( id: string, nPrevState: number ): void
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id )!;

	const fxPanel = $( '#ChallengeFX' ) as DOTAScenePanel_t;
	const x = panel.actualxoffset / panel.actualuiscale_x;
	const y = panel.actualyoffset / panel.actualuiscale_y;
	fxPanel.SetPositionInPixels( x, y, 0 );

	seq.actions.push( new ActionWithTimeout( new WaitForClassAction( fxPanel, 'SceneLoaded' ), 2.0 ) );

	seq.actions.push( new AddClassAction( panel, 'ChallengeCompleting' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'powerup_03' );
	} ) );
	seq.actions.push( new WaitAction( 2.0 ) );
	seq.actions.push( new RemoveClassAction( panel, 'ChallengeCompleting' ) );
	seq.actions.push( new AddClassAction( fxPanel, 'ShowExplosion' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'burst_fx', 'start', 0 );
		$.DispatchEvent( 'PlaySoundEffect', 'ui_explosion' );
	} ) );
	seq.actions.push( new WaitAction( 0.2 ) );
	seq.actions.push( new AddClassAction( panel, 'ChallengeCompleted' ) );

	seq.actions.push( new WaitAction( 1.2 ) );
	seq.actions.push( new RemoveClassAction( fxPanel, 'ShowExplosion' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlShowPathParticles', panel );
		fxPanel.FireEntityInput( 'burst_fx', 'stop', 0 );
	} ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel );
	} ) );

	RunSingleAction( seq );
};

var OnPathSwapped = function ( id: string, id2: string, newImage: string, newImage2: string )
{
	const seq = new RunSequentialActions();

	const panel = $( '#' + id )!;
	const fxPanel = $( '#ChallengeFX' ) as DOTAScenePanel_t;
	const x = panel.actualxoffset / panel.actualuiscale_x;
	const y = panel.actualyoffset / panel.actualuiscale_y;
	fxPanel.SetPositionInPixels( x, y, 0 );

	const panel2 = $( '#' + id2 );
	let fxPanel2: DOTAScenePanel_t | null = null;
	if ( panel2 != null )
	{
		fxPanel2 = $( '#ChallengeFX2' ) as DOTAScenePanel_t;
		const x2 = panel2.actualxoffset / panel.actualuiscale_x;
		const y2 = panel2.actualyoffset / panel.actualuiscale_y;
		fxPanel2.SetPositionInPixels( x2, y2, 0 );
	}

	seq.actions.push( new ActionWithTimeout( new WaitForClassAction( fxPanel, 'SceneLoaded' ), 3.0 ) );
	if ( fxPanel2 != null )
	{
		seq.actions.push( new ActionWithTimeout( new WaitForClassAction( fxPanel2, 'SceneLoaded' ), 3.0 ) );
	}

	seq.actions.push( new AddClassAction( panel, 'ChallengeSwappingOut' ) );
	seq.actions.push( new AddClassAction( fxPanel, 'ShowSwap' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'PlaySoundEffect', 'ui_swap' );
		fxPanel.FireEntityInput( 'swap_fx', 'start', 0 );
	} ) );

	if ( panel2 != null )
	{
		seq.actions.push( new AddClassAction( panel2, 'ChallengeSwappingOut' ) );
		seq.actions.push( new AddClassAction( fxPanel2, 'ShowSwap' ) );
		seq.actions.push( new RunFunctionAction( function ()
		{
			fxPanel2!.FireEntityInput( 'swap_fx', 'start', 0 );
		} ) );
	}

	seq.actions.push( new WaitAction( 0.2 ) );

	seq.actions.push( new RemoveClassAction( panel, 'ChallengeSwappingOut' ) );
	seq.actions.push( new AddClassAction( panel, 'ChallengeSwappingIn' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		const image = panel.FindChildTraverse( "Image" ) as Image_t;
		image.SetImage( newImage );
	} ) );

	if ( panel2 != null )
	{
		seq.actions.push( new RemoveClassAction( panel2, 'ChallengeSwappingOut' ) );
		seq.actions.push( new AddClassAction( panel2, 'ChallengeSwappingIn' ) );
		seq.actions.push( new RunFunctionAction( function ()
		{
			const image2 = panel2.FindChildTraverse( "Image" ) as Image_t;
			image2.SetImage( newImage2 );
		} ) );
	}
	seq.actions.push( new WaitAction( 0.2 ) );

	seq.actions.push( new RemoveClassAction( panel, 'ChallengeSwappingIn' ) );
	seq.actions.push( new RemoveClassAction( fxPanel, 'ShowSwap' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		fxPanel.FireEntityInput( 'swap_fx', 'stop', 0 );
	} ) );

	if ( panel2 != null )
	{
		seq.actions.push( new RemoveClassAction( panel2, 'ChallengeSwappingIn' ) );
		seq.actions.push( new RemoveClassAction( fxPanel2, 'ShowSwap' ) );
		seq.actions.push( new RunFunctionAction( function ()
		{
			fxPanel2!.FireEntityInput( 'swap_fx', 'stop', 0 );
		} ) );
	}

	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTACavernCrawlAdvanceUpdates', panel );
	} ) );

	RunSingleAction( seq );
};