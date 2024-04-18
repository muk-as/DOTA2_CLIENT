/// <reference path="../winter2022.d.ts" />

//-----------------------------------------------------------------------------------------
const g_sDiretideTips = [
	"#DOTA_winter_2022_gameplay_tip_00",
	"#DOTA_winter_2022_gameplay_tip_01",
	"#DOTA_winter_2022_gameplay_tip_02",
	"#DOTA_winter_2022_gameplay_tip_03",
	"#DOTA_winter_2022_gameplay_tip_04",
	"#DOTA_winter_2022_gameplay_tip_05",
	"#DOTA_winter_2022_gameplay_tip_06",
	"#DOTA_winter_2022_gameplay_tip_07",
	"#DOTA_winter_2022_gameplay_tip_08",
	"#DOTA_winter_2022_gameplay_tip_09",
	"#DOTA_winter_2022_gameplay_tip_10",
	"#DOTA_winter_2022_gameplay_tip_11",
	"#DOTA_winter_2022_gameplay_tip_12",
	"#DOTA_winter_2022_gameplay_tip_13",
	"#DOTA_winter_2022_gameplay_tip_14",
	"#DOTA_winter_2022_gameplay_tip_15",
	"#DOTA_winter_2022_gameplay_tip_16",
	"#DOTA_winter_2022_gameplay_tip_17",
	"#DOTA_winter_2022_gameplay_tip_18",
	"#DOTA_winter_2022_gameplay_tip_19",
	"#DOTA_winter_2022_gameplay_tip_20",
	"#DOTA_winter_2022_gameplay_tip_21",
	"#DOTA_winter_2022_gameplay_tip_22",
	"#DOTA_winter_2022_gameplay_tip_23",
	"#DOTA_winter_2022_gameplay_tip_24",
	"#DOTA_winter_2022_gameplay_tip_25",
	"#DOTA_winter_2022_gameplay_tip_26",
	"#DOTA_winter_2022_gameplay_tip_27",
	"#DOTA_winter_2022_gameplay_tip_28",
	"#DOTA_winter_2022_gameplay_tip_29",
	"#DOTA_winter_2022_gameplay_tip_30",
	"#DOTA_winter_2022_gameplay_tip_31",
	"#DOTA_winter_2022_gameplay_tip_32",
	"#DOTA_winter_2022_gameplay_tip_33",
	"#DOTA_winter_2022_gameplay_tip_34",
	"#DOTA_winter_2022_gameplay_tip_35",
	"#DOTA_winter_2022_gameplay_tip_36",
	"#DOTA_winter_2022_gameplay_tip_37",
	"#DOTA_winter_2022_gameplay_tip_38",
	"#DOTA_winter_2022_gameplay_tip_39",
	"#DOTA_winter_2022_gameplay_tip_40",
	"#DOTA_winter_2022_gameplay_tip_41",
];

const g_nNumDiretideTips = g_sDiretideTips.length
let g_nCurrentDiretideTip = 0

//-----------------------------------------------------------------------------------------
$.Schedule( 0.0, () =>
{
	$.Msg( "diretide_pregame_strategy.js - START!" )

	g_nCurrentDiretideTip = Game.Winter2022GetGameplayTipNumber();

	OnShowPregameStrategy();
} );

//-----------------------------------------------------------------------------------------
function OnShowPregameStrategy(): void
{
	$.Msg( "diretide_pregame_strategy.js - OnShowPregameStrategy()!" )
	$.GetContextPanel().SetDialogVariableInt( "num_tips", g_nNumDiretideTips );
	SetDiretideTipDialogVars();
}

//-----------------------------------------------------------------------------------------
function IncrementTip( nIncrement: number ): void
{
	g_nCurrentDiretideTip = g_nCurrentDiretideTip + nIncrement;
	while ( g_nCurrentDiretideTip < 0 )
	{
		g_nCurrentDiretideTip += g_nNumDiretideTips;
	}
	g_nCurrentDiretideTip = g_nCurrentDiretideTip % g_nNumDiretideTips;

	Game.Winter2022SetGameplayTipNumber( g_nCurrentDiretideTip );
	SetDiretideTipDialogVars();

	if (nIncrement == -1){
		$( '#TipBodyText' )!.RemoveClass('AnimateNextTip');
		$( '#TipBodyText' )!.TriggerClass( 'AnimatePrevTip' );
	}

	if (nIncrement == 1){
		$( '#TipBodyText' )!.RemoveClass('AnimatePrevTip');
		$( '#TipBodyText' )!.TriggerClass( 'AnimateNextTip' );
	}

	Game.EmitSound( "ui_select_arrow" );
}

//-----------------------------------------------------------------------------------------
function SetDiretideTipDialogVars(): void
{
	$.GetContextPanel().SetDialogVariable( "tip_text", $.Localize( g_sDiretideTips[g_nCurrentDiretideTip] ) );
	$.GetContextPanel().SetDialogVariableInt( "current_tip_num", g_nCurrentDiretideTip + 1 );
}