function AbilityScenePanelReady() {

	var scenePanel = $( '#AbilitiesScene' );

	for (var iBlock = 0; iBlock < 12; iBlock++) {
		var formattedBlockNumber = ('0' + iBlock).slice(-2);           

		for (var iAbility = 0; iAbility < 3; iAbility++) {
			var abilityBlockName = 'block' + formattedBlockNumber + '_a' + iAbility + '_button';
			scenePanel.FireEntityInput( abilityBlockName, 'SetAnimation', 'initial' );
		}

		var ultBlockName = 'block' + formattedBlockNumber + '_ult' + '_button';
		scenePanel.FireEntityInput( ultBlockName, 'SetAnimation', 'initial' );

		var heroBlockName = 'block' + formattedBlockNumber + '_hero' + '_button';
		scenePanel.FireEntityInput( heroBlockName, 'SetAnimation', 'initial' );
	}
}

function HeroesReady() {

	var scenePanel = $( '#AbilitiesScene' );

	var mainContainerPanel = $( '#MainContainer' );
	mainContainerPanel.AddClass('HeroesReady');
	var loadingPanel = $( '#LoadingContainer' );
	loadingPanel.AddClass('LoadingFinished');
	
	$.Schedule( 4.8, function() {
		mainContainerPanel.AddClass('CameraMoveDone');
	}
	);
	
	$.Schedule(0.1, function () {
		for (var iBlock = 0; iBlock < 12; iBlock++) {
			var formattedBlockNumber = ('0' + iBlock).slice(-2);           

			for (var iAbility = 0; iAbility < 3; iAbility++) {
				var abilityBlockName = 'block' + formattedBlockNumber + '_a' + iAbility + '_button';
				scenePanel.FireEntityInput( abilityBlockName, 'SetAnimation', 'initial' );
			}

			var ultBlockName = 'block' + formattedBlockNumber + '_ult' + '_button';
			scenePanel.FireEntityInput( ultBlockName, 'SetAnimation', 'initial' );

			var heroBlockName = 'block' + formattedBlockNumber + '_hero' + '_button';
			scenePanel.FireEntityInput( heroBlockName, 'SetAnimation', 'initial' );
		}
	}
	);				

	$.Schedule( 1.1, function() {
			$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'AbilitiesScene', 'camera_1', 4.0 ); 
			}
	);

	$.Schedule( 3.0, function() {
		scenePanel.FireEntityInput( 'block00_hero_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block00_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block00_ult_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_ult_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.1, function () {
		scenePanel.FireEntityInput( 'block01_hero_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block02_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block00_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_ult_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_ult_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.2, function() {
		scenePanel.FireEntityInput( 'block02_hero_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block04_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block02_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block00_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block02_ult_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_ult_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.3, function() {
		scenePanel.FireEntityInput( 'block03_hero_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block04_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block02_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_ult_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_ult_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.4, function () {
		scenePanel.FireEntityInput( 'block04_hero_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block04_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block04_ult_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block10_ult_button', 'SetAnimation', 'spin' );				
	} );			

	$.Schedule( 3.5, function () {
		scenePanel.FireEntityInput( 'block05_hero_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block10_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_ult_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block11_ult_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_hero_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.6, function() {

		scenePanel.FireEntityInput( 'block10_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_hero_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.7, function() {
		scenePanel.FireEntityInput( 'block10_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_hero_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.8, function() {

		scenePanel.FireEntityInput( 'block11_a0_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_hero_button', 'SetAnimation', 'spin' );
		
	} );			

	$.Schedule( 3.9, function() {

		scenePanel.FireEntityInput( 'block11_a1_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block10_hero_button', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 4.0, function() {

		scenePanel.FireEntityInput( 'block11_a2_button', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block11_hero_button', 'SetAnimation', 'spin' );
	} );			
} 

function HeroesAndPanelReadyShortcut()
{
	var mainContainerPanel = $( '#MainContainer' );
	mainContainerPanel.AddClass('HeroesReady');
	mainContainerPanel.AddClass('CameraMoveDone');
	var loadingPanel = $( '#LoadingContainer' );
	loadingPanel.AddClass('LoadingFinished');

	$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'AbilitiesScene', 'camera_1', 0.001 ); 
}

function OnHoverButton( buttonName, abilityPanelName, IsUltimate )
{
	var internalPanel=$( '#AbilitiesScene').GetPanoramaSurfacePanel();
	
	if ( internalPanel )
	{
		var str = abilityPanelName;
		var res = str.replace( 'ability_id' , 'abilityimage' );

		var hoveredPanel = internalPanel.FindChildInLayoutFile( res );
			
		if ( hoveredPanel )
		{
			hoveredPanel.AddClass('Hovered');
		}
	}

	
	var abilityPanel = $( '#' + abilityPanelName );

	var abilityName = abilityPanel.GetAttributeString('ability_name', '');
	if( !(abilityName === '') )
	{
		$.DispatchEvent('DOTAShowAbilityTooltip', abilityPanel.GetParent(), abilityName);
	}

	var abilityDraftPanel = $( '#AbilityDraft' );
	var mainContainerPanel = $( '#MainContainer' );
	if( abilityDraftPanel.BHasClass('AbilityDraftPreRound') || !abilityDraftPanel.BHasClass('LocalPlayerIsDrafting') || ( IsUltimate && mainContainerPanel.BHasClass('UltimateChosen') ) )
	{
		return;
	}

	if( !abilityPanel.BAscendantHasClass( 'AbilityChosen' ) && !abilityDraftPanel.BHasClass('CurrentPlayerHasChosen') )
	{
		var scenePanel = $( '#AbilitiesScene' );
		scenePanel.FireEntityInput( buttonName + '_button', 'SetAnimation', 'hover' );
	}

}

function OnMouseOut( buttonName, abilityPanelName )
{
	var internalPanel=$( '#AbilitiesScene').GetPanoramaSurfacePanel();
	
	if ( internalPanel )
	{
		var str = abilityPanelName;
		var res = str.replace( 'ability_id' , 'abilityimage' );

		var hoveredPanel = internalPanel.FindChildInLayoutFile( res );
			
		if ( hoveredPanel )
		{
			hoveredPanel.RemoveClass('Hovered');
		}
	}			
	$.DispatchEvent('DOTAHideAbilityTooltip');

	var abilityDraftPanel = $( '#AbilityDraft' );
	if( abilityDraftPanel.BHasClass('AbilityDraftPreRound'))
	{
		return;
	}

	var abilityPanel = $( '#' + abilityPanelName );
	if( !abilityPanel.BAscendantHasClass( 'AbilityChosen' ) )
	{
		var scenePanel = $( '#AbilitiesScene' );
		scenePanel.FireEntityInput( buttonName + '_button', 'SetAnimation', 'idle' );
	}
}

function OnHoverButtonHero(buttonName, heroPanelName) {
	var internalPanel = $('#AbilitiesScene').GetPanoramaSurfacePanel();

	if ( internalPanel )
	{
		var str = heroPanelName;
		var res = str.replace('hero_id', 'heroimage');

		var hoveredPanel = internalPanel.FindChildInLayoutFile(res);

		if (hoveredPanel) {
			hoveredPanel.AddClass('Hovered');
		}
	}


	var heroPanel = $('#' + heroPanelName);

	var unHeroID = heroPanel.GetAttributeUInt32( 'hero_id', 0 );
	if ( unHeroID != 0 )
	{
		$.DispatchEvent('DOTAAbilityDraftShowHeroTooltip', heroPanel.GetParent(), unHeroID );
	}

	var abilityDraftPanel = $('#AbilityDraft');
	var mainContainerPanel = $('#MainContainer');
	if ( abilityDraftPanel.BHasClass('AbilityDraftPreRound') || !abilityDraftPanel.BHasClass('LocalPlayerIsDrafting') || mainContainerPanel.BHasClass('HeroChosen') )
	{
		return;
	}

	if (!heroPanel.BAscendantHasClass('HeroChosen') && !abilityDraftPanel.BHasClass('CurrentPlayerHasChosen')) {
		var scenePanel = $('#AbilitiesScene');
		scenePanel.FireEntityInput(buttonName + '_button', 'SetAnimation', 'hover');
	}
}

function OnMouseOutHero(buttonName, heroPanelName) {
	var internalPanel = $('#AbilitiesScene').GetPanoramaSurfacePanel();

	if (internalPanel) {
		var str = heroPanelName;
		var res = str.replace('hero_id', 'heroimage');

		var hoveredPanel = internalPanel.FindChildInLayoutFile(res);

		if (hoveredPanel) {
			hoveredPanel.RemoveClass('Hovered');
		}
	}
	$.DispatchEvent('DOTAAbilityDraftHideHeroTooltip');

	var abilityDraftPanel = $('#AbilityDraft');
	if (abilityDraftPanel.BHasClass('AbilityDraftPreRound')) {
		return;
	}

	var heroPanel = $('#' + heroPanelName);
	if (!heroPanel.BAscendantHasClass('HeroChosen')) {
		var scenePanel = $('#AbilitiesScene');
		scenePanel.FireEntityInput(buttonName + '_button', 'SetAnimation', 'idle');
	}
}

function OnActivateAbility( blockName, abilityPanelName, abilityIndex )
{
	if( GameUI.IsAltDown() )
	{
		$.DispatchEvent( 'DOTAAbilityDraftPingAbility', abilityIndex, GameUI.IsControlDown() ); 
		return;
	}

	if( GameUI.IsControlDown() )
	{
		$.DispatchEvent( 'DOTAAbilityDraftPingAbility', abilityIndex, true ); 
		return;
	}

	var abilityDraftPanel = $( '#AbilityDraft' );
	if( !abilityDraftPanel.BHasClass('AbilityDraftInProgress') )
	{
		return;
	}

	if( !abilityDraftPanel.BHasClass('LocalPlayerIsDrafting') )
	{
		return;
	}

	if( abilityDraftPanel.BHasClass('CurrentPlayerHasChosen') )
	{
		return;
	}
	
	var abilityPanel = $( '#' + abilityPanelName );
	if( !abilityPanel.BAscendantHasClass( 'AbilityChosen' ) )
	{
		var scenePanel = $( '#AbilitiesScene' );
		scenePanel.FireEntityInput( blockName + '_activate_relay', 'Trigger', 0 );

		$.DispatchEvent( 'DOTAAbilityDraftSelectAbility', abilityIndex ); 
	}

}

function OnActivateUltimate( blockName, abilityPanelName, abilityIndex )
{
	if( GameUI.IsAltDown() )
	{
		$.DispatchEvent( 'DOTAAbilityDraftPingAbility', abilityIndex, GameUI.IsControlDown() ); 
		return;
	}
	
	if( GameUI.IsControlDown() )
	{
		$.DispatchEvent( 'DOTAAbilityDraftPingAbility', abilityIndex, true ); 
		return;
	}

	var scenePanel = $( '#AbilitiesScene' );
	var abilityDraftPanel = $( '#AbilityDraft' );
	if( !abilityDraftPanel.BHasClass('LocalPlayerIsDrafting') || abilityDraftPanel.BHasClass('CurrentPlayerHasChosen') || scenePanel.BHasClass('UltimateChosen') )
	{
		return;
	}

	var abilityPanel = $( '#' + abilityPanelName );
	if( !abilityPanel.BAscendantHasClass( 'AbilityChosen' ) )
	{
		var scenePanel = $( '#AbilitiesScene' );
		scenePanel.FireEntityInput( blockName + '_activate_relay', 'Trigger', 0 );

		$.DispatchEvent( 'DOTAAbilityDraftSelectAbility', abilityIndex ); 
	}
}

function OnActivateHero( blockName, heroPanelName, heroIndex )
{
	if ( GameUI.IsAltDown() )
	{
		$.DispatchEvent( 'DOTAAbilityDraftPingHero', heroIndex, GameUI.IsControlDown() );
		return;
	}

	if ( GameUI.IsControlDown() )
	{
		$.DispatchEvent( 'DOTAAbilityDraftPingHero', heroIndex, true );
		return;
	}

	var scenePanel = $( '#AbilitiesScene' );
	var abilityDraftPanel = $( '#AbilityDraft' );
	if ( !abilityDraftPanel.BHasClass( 'LocalPlayerIsDrafting' ) || abilityDraftPanel.BHasClass( 'CurrentPlayerHasChosen' ) || scenePanel.BHasClass('HeroChosen') )
	{
		return;
	}

	var heroPanel = $( '#' + heroPanelName );
	if (!heroPanel.BAscendantHasClass('HeroChosen') )
	{
		var scenePanel = $( '#AbilitiesScene' );
		scenePanel.FireEntityInput( blockName + '_activate_relay', 'Trigger', 0 );

		$.DispatchEvent( 'DOTAAbilityDraftSelectHero', heroIndex );
	}
}

function OnAbilitySelected( abilityPanelId, blockName )
{
	var scenePanel = $( '#AbilitiesScene' );
	scenePanel.FireEntityInput( blockName + '_button', 'SetAnimation', 'button_press' );
}