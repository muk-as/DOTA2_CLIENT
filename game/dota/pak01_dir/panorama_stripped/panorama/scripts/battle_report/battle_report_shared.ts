/// <reference path="../dota.d.ts" />
/// <reference path="../dota_sequence_actions.ts" />

                                                                               
                         
  	                                                              
                                                                               

                                           
let g_skipReportActions: boolean = false;
function IsSkippingReportAhead(): boolean {
	return g_skipReportActions;
}

function SetSkippingReportAhead(bSkipAhead: boolean) {
	if (g_skipReportActions == bSkipAhead)
		return;
	g_skipReportActions = bSkipAhead;

	if (bSkipAhead) {
		PlayUISoundScript("ui_generic_button_click");
	}
}
function StopSkippingReportAhead(): void { SetSkippingReportAhead(false); }
function StartSkippingReportAhead(): void { SetSkippingReportAhead(true); }

                                                                               
                            
   
                                                                           
                                                                               

                                                           
class StopSkippingReportAheadAction extends RunFunctionAction {
	constructor() {
		super(() => StopSkippingReportAhead());
	}
}


                                                                               
                    
   
                                                                         
                                                                               
                                                                      
                                                                               
class SkippableReportAction extends BaseAction {
	innerAction: ISequenceAction;

	constructor(actionToMaybeSkip: ISequenceAction) {
		super();
		this.innerAction = actionToMaybeSkip;
	}

	start(): void {
		this.innerAction.start();
	}

	update(): boolean {
		return this.innerAction.update() && !IsSkippingReportAhead();
	}

	finish(): void {
		this.innerAction.finish();
	}
}
interface DOTABattleReportHighlight_t extends Panel_t
{
	GetTier(): number;
}
 
function GetShardsForHighlightTier( nTier: number ): number
{
	switch ( nTier )
	{
		case 1: return 200;
		case 2: return 300;
		case 3: return 400;
		default: return 0;
	}
}

function ShowHighlightsTableImmediate( tableID: string ): void
{
	const screen = $.GetContextPanel();
	const table = $( '#' + tableID )!;

	let nShards = 0;
	const nRows = table.GetChildCount();
	for ( let iRow = 0; iRow < nRows; ++iRow )
	{
		const row = table.GetChild( iRow );
		const nCols = row.GetChildCount();

		for ( let iCol = 0; iCol < nCols; ++iCol )
		{
			const highlight = row.GetChild( iCol ) as DOTABattleReportHighlight_t;
			const nTier = highlight.GetTier();

			highlight.AddClass( "ShowHighlight" );
			highlight.AddClass( "ShowMedal" );

			nShards += GetShardsForHighlightTier( nTier );
		}
	}

	screen.SetDialogVariableInt( 'screen_shards_earned', nShards );
}

function AnimateHighlightsTable(tableID: string ): void
{
	SetSkippingReportAhead(false);
	const screen = $.GetContextPanel();
	screen.SetDialogVariableInt('screen_shards_earned', 0);

	const table = $( '#' + tableID )!;
	const seq = new RunSequentialActions();

	seq.actions.push( new DispatchEventAction( 'DOTABattleReportSetNavEnabled', false ) );
	seq.actions.push(new SkippableReportAction( new WaitAction( 0.4 ) ) );

	let nShards = 0;
	const nRows = table.GetChildCount();
	for ( let iRow = 0; iRow < nRows; ++iRow )
	{
		const row = table.GetChild( iRow )!;
		const nCols = row.GetChildCount();

		for ( let iCol = 0; iCol < nCols; ++iCol )
		{
			const highlight = row.GetChild( iCol ) as DOTABattleReportHighlight_t;
			const nTier = highlight.GetTier();

			seq.actions.push( new AddClassAction( highlight, "ShowHighlight" ) );

			let strSound = '';
			switch ( nTier )
			{
				case 0: strSound = 'BattleReport.HighlightReceived.NoTier'; break;
				case 1: strSound = 'BattleReport.HighlightReceived.Bronze'; break;
				case 2: strSound = 'BattleReport.HighlightReceived.Silver'; break;
				case 3: strSound = 'BattleReport.HighlightReceived.Gold'; break;
			}
			if ( strSound != '' )
			{
				seq.actions.push( new PlaySoundAction( strSound ) );
			}

			seq.actions.push(new SkippableReportAction( new WaitAction( 0.1 ) ) );

			const nShardsEarned = GetShardsForHighlightTier( nTier );
			if ( nShardsEarned > 0 )
			{
				seq.actions.push( new AddClassAction( highlight, 'ShowMedal' ) );
				seq.actions.push( new SetDialogVariableIntAction( highlight, 'highlight_shards_earned', nShardsEarned ) );
				seq.actions.push( new AddClassAction( highlight, 'ShowShardsEarned' ) );
				seq.actions.push(new SkippableReportAction(new WaitAction(0.5)));


				const soundAction = new PlaySoundAction("Shards.Count");
				seq.actions.push(soundAction);
				const duration = RemapValClamped( nShardsEarned, 0, 300, 0.3, 1.0 );
				const par = new RunParallelActions();
				par.actions.push( new SkippableReportAction( new AnimateDialogVariableIntAction( screen, 'screen_shards_earned', nShards, nShards + nShardsEarned, duration ) ) );
				par.actions.push(new SkippableReportAction(new AnimateDialogVariableIntAction(highlight, 'highlight_shards_earned', nShardsEarned, 0, duration)));

				seq.actions.push( new AddClassAction( screen, 'ShardsCounting' ) );
				seq.actions.push(par);

				seq.actions.push(new StopSoundAction(soundAction));
				seq.actions.push(new RemoveClassAction(highlight, 'ShowShardsEarned'));
				seq.actions.push(new StopSkippingReportAheadAction()); 

				nShards += nShardsEarned;
			}

			seq.actions.push( new SkippableReportAction( new WaitAction( 0.1 ) ) );
			seq.actions.push( new RemoveClassAction( screen, 'ShardsCounting' ) );
		} 
	}

	
	seq.actions.push( new DispatchEventAction( 'DOTABattleReportSetNavEnabled', true ) ); 

	RunSingleAction(seq);
}




