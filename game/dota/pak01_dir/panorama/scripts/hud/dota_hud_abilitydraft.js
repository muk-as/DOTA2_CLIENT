function AbilityScenePanelReady() {

	var scenePanel = $( '#AbilitiesScene' );
	scenePanel.FireEntityInput( 'block00_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block00_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block00_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block01_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block01_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block01_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block02_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block02_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block02_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block03_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block03_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block03_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block04_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block04_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block04_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block05_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block05_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block05_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block06_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block06_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block06_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block07_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block07_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block07_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block08_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block08_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block08_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block09_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block09_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block09_a2', 'SetAnimation', 'initial' );				

	scenePanel.FireEntityInput( 'block10_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block10_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block10_a2', 'SetAnimation', 'initial' );				

	scenePanel.FireEntityInput( 'block11_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block11_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block11_a2', 'SetAnimation', 'initial' );		

	scenePanel.FireEntityInput( 'block00_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block01_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block02_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block03_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block04_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block05_ult', 'SetAnimation', 'initial' );	
	scenePanel.FireEntityInput( 'block06_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block07_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block08_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block09_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block10_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block11_ult', 'SetAnimation', 'initial' );	
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
	
	$.Schedule( 0.1, function() {
	scenePanel.FireEntityInput( 'block00_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block00_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block00_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block01_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block01_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block01_a2', 'SetAnimation', 'initial' );				

	scenePanel.FireEntityInput( 'block02_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block02_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block02_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block03_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block03_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block03_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block04_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block04_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block04_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block05_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block05_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block05_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block06_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block06_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block06_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block07_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block07_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block07_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block08_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block08_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block08_a2', 'SetAnimation', 'initial' );

	scenePanel.FireEntityInput( 'block09_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block09_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block09_a2', 'SetAnimation', 'initial' );				

	scenePanel.FireEntityInput( 'block10_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block10_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block10_a2', 'SetAnimation', 'initial' );				

	scenePanel.FireEntityInput( 'block11_a0', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block11_a1', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block11_a2', 'SetAnimation', 'initial' );		

	scenePanel.FireEntityInput( 'block00_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block01_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block02_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block03_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block04_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block05_ult', 'SetAnimation', 'initial' );	
	scenePanel.FireEntityInput( 'block06_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block07_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block08_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block09_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block10_ult', 'SetAnimation', 'initial' );
	scenePanel.FireEntityInput( 'block11_ult', 'SetAnimation', 'initial' );					
			}
	);				

	$.Schedule( 1.1, function() {
			$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'AbilitiesScene', 'camera_1', 4.0 ); 
			}
		);				
	

	$.Schedule( 3.0, function() {

		scenePanel.FireEntityInput( 'block00_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block00_ult', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_ult', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.1, function() {
		scenePanel.FireEntityInput( 'block02_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block00_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_ult', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_ult', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.2, function() {

		scenePanel.FireEntityInput( 'block04_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block02_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block00_a2', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block02_ult', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_ult', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.3, function() {

		scenePanel.FireEntityInput( 'block06_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block04_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block02_a2', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_ult', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_ult', 'SetAnimation', 'spin' );
	} );			

	$.Schedule( 3.4, function() {
		scenePanel.FireEntityInput( 'block08_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block04_a2', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block04_ult', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block10_ult', 'SetAnimation', 'spin' );				
	} );			

	$.Schedule( 3.5, function() {
		scenePanel.FireEntityInput( 'block10_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block06_a2', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block01_a2', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_ult', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block11_ult', 'SetAnimation', 'spin' );				
		
	} );			

	$.Schedule( 3.6, function() {

		scenePanel.FireEntityInput( 'block10_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block08_a2', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block03_a2', 'SetAnimation', 'spin' );
		
	} );			

	$.Schedule( 3.7, function() {
		scenePanel.FireEntityInput( 'block10_a2', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block05_a2', 'SetAnimation', 'spin' );
		
	} );			

	$.Schedule( 3.8, function() {

		scenePanel.FireEntityInput( 'block11_a0', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block07_a2', 'SetAnimation', 'spin' );
		
		
	} );			

	$.Schedule( 3.9, function() {

		scenePanel.FireEntityInput( 'block11_a1', 'SetAnimation', 'spin' );
		scenePanel.FireEntityInput( 'block09_a2', 'SetAnimation', 'spin' );
		
	} );			

	$.Schedule( 4.0, function() {

		scenePanel.FireEntityInput( 'block11_a2', 'SetAnimation', 'spin' );

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
		scenePanel.FireEntityInput( buttonName, 'SetAnimation', 'hover');
	}

}

function OnMouseOut(buttonName, abilityPanelName, IsUltimate)
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
		scenePanel.FireEntityInput( buttonName, 'SetAnimation', 'idle');
	}
}

function OnActivate( buttonNumber, buttonRow, abilityPanelName, abilityIndex )
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
		var blockName = 'block' + buttonNumber + '_' + buttonRow;
		var particleName = 'ability_picked' + buttonNumber + '_' + buttonRow;
		scenePanel.FireEntityInput( blockName, 'SetAnimation', 'button_press');
		scenePanel.FireEntityInput( particleName, 'stop', 0 ); 
		scenePanel.FireEntityInput( particleName, 'start', 0 );

		var buttonName = 'ability_picked' + buttonNumber + '_' + buttonRow;
		scenePanel.FireEntityInput( buttonName, 'SetAnimation', 'stop');
		scenePanel.FireEntityInput( buttonName, 'SetAnimation', 'start');
		$.DispatchEvent( 'DOTAAbilityDraftSelectAbility', abilityIndex ); 
	}

}

function OnActivateUltimate( buttonNumber, buttonRow, abilityPanelName, abilityIndex )
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
		var buttonName = 'block' + buttonNumber + '_' + buttonRow;
		scenePanel.FireEntityInput( buttonName, 'SetAnimation', 'button_press');
		$.DispatchEvent( 'DOTAAbilityDraftSelectAbility', abilityIndex ); 
		
		var particleName = 'ability_picked' + buttonNumber + '_' + buttonRow;
		scenePanel.FireEntityInput( particleName, 'stop', 0 ); 
		scenePanel.FireEntityInput( particleName, 'start', 0 );
	}
}

function OnAbilitySelected( abilityPanelId, blockName )
{
	var scenePanel = $( '#AbilitiesScene' );
	scenePanel.FireEntityInput( blockName, 'SetAnimation', 'button_press');
}