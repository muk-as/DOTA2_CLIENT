/// <reference path="dota.d.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="dota_sequence_actions.ts" />

enum ETreasureOpeningAnimationState
{
	None = 0,
	Entrance = 1,
	SpinUp = 2,
	AnimateContents = 3,
	Exit = 4
}

const strCalaveraTreasureEntityName = 'treasure';

$.Schedule( 0.0, function ()
{
	const treasureModelScene = $( '#TreasureModel' ) as DOTAScenePanel_t;

	if ( treasureModelScene == null || treasureModelScene.BHasClass("TreasureModelSetPreview") )
		return;

	$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', treasureModelScene, function ()
	{
		treasureModelScene.FireEntityInput(strCalaveraTreasureEntityName, 'SetAnimation', 'chest_idle' );
	} );
} );

function SetTreasureModelAnimation( strAnimationName: string, flDelay: number ): void
{
	const sequence = new RunSequentialActions();

	if ( flDelay > 0.0 )
	{
		sequence.actions.push( new WaitAction( flDelay ) );
	}

	sequence.actions.push( new RunFunctionAction( function ()
	{
		const treasureModelScene = $.GetContextPanel().FindChildTraverse( 'TreasureModel' ) as DOTAScenePanel_t;

		if ( treasureModelScene == null || treasureModelScene.BHasClass("TreasureModelSetPreview") )
			return;

		treasureModelScene.FireEntityInput( strCalaveraTreasureEntityName, 'SetAnimation', strAnimationName );
	} ) );

	RunSingleAction( sequence );
}

function OnAnimationStateChanged( nAnimationState: ETreasureOpeningAnimationState ): void
{
	if ( nAnimationState == ETreasureOpeningAnimationState.Entrance )
	{
		SetTreasureModelAnimation( 'chest_anticipation', 0 );
	}
	else if ( nAnimationState == ETreasureOpeningAnimationState.AnimateContents )
	{
		SetTreasureModelAnimation( 'chest_open', 0 );
	}
	else if ( nAnimationState == ETreasureOpeningAnimationState.Exit || nAnimationState == ETreasureOpeningAnimationState.None )
	{
		SetTreasureModelAnimation( 'chest_idle', 0.3 );
	}
}

function OnUnusualAdded() {
	const sequence = new RunSequentialActions();

	sequence.actions.push(new RunFunctionAction(function () {
		$.GetContextPanel()!.AddClass("ItemQuality_unusual");
	}));

	sequence.actions.push(new WaitAction( 1 ));

	sequence.actions.push(new RunFunctionAction(function () {
		$.GetContextPanel()!.AddClass("UnusualPopupAnimation_RevealContainer");
	}));

	sequence.actions.push(new WaitAction( 0.5 ));

	sequence.actions.push(new RunFunctionAction(function () {
		$.GetContextPanel()!.AddClass("UnusualPopupAnimation_RevealTitle");
	}));

	sequence.actions.push(new WaitAction( 2 ));

	sequence.actions.push(new RunFunctionAction(function () {
		$.GetContextPanel()!.AddClass("UnusualPopupAnimation_RevealInformation");
	}));

	sequence.actions.push(new WaitAction( 0.8 ));

	sequence.actions.push(new RunFunctionAction(function () {
		$.GetContextPanel()!.AddClass("UnusualPopupAnimation_ShowButton");
	}));

	RunSingleAction(sequence);
}
function OnUnusualAcknowledged() {
	
	var tierTreasureDetails = $('#DOTATierTreasureDetails');
	if( tierTreasureDetails != null )
		tierTreasureDetails.RemoveClass('ItemQuality_unusual');

	var treasureDetails = $('#DOTATreasureDetailsPage');
	if( treasureDetails != null )
		treasureDetails.RemoveClass('ItemQuality_unusual');

	$.GetContextPanel()!.RemoveClass("ItemQuality_unusual_intro");	
	$.GetContextPanel()!.RemoveClass("ItemQuality_unusual");
}

function LoadEventTitle() {
	if ( $( "#LogoContainer" )!.BAscendantHasClass( "Language_schinese" ) || $( "#LogoContainer" )!.BAscendantHasClass("Language_tchinese") ) {
		$( "#LogoContainer" )!.BLoadLayoutSnippet( "MuertaEventTitleChinese" );
	} else {
		$( "#LogoContainer" )!.BLoadLayoutSnippet( "MuertaEventTitleEnglish" );
	}
}