/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />

var InitCustomCell = function( cellID: string, nLevel: number )
{
	let cell: Panel_t = $( '#' + cellID );
	switch ( nLevel )
	{
		case 15:
		case 156:
		case 183:
		case 221:
		case 241:
		case 285:
			cell.SetDialogVariableLocString( "diretide_item_type", "#DOTA_ChatWheel" );
			break;

		case 62:
			cell.SetDialogVariableLocString( "diretide_item_type", "#LoadoutSlot_Map_Effect" );
			break;

		case 101:
			cell.SetDialogVariableLocString( "diretide_item_type", "#loading_screen" );
			break;

		case 194:
			cell.SetDialogVariableLocString( "diretide_item_type", "#DOTA_FavoriteTeam_Spray" );
			break;

		case 81:
		case 161:
		case 279:
			cell.SetDialogVariableLocString( "diretide_item_type", "#DOTA_International2022_CustomGameUpgrade" );
			break;

		case 117:
		case 239:
			cell.SetDialogVariableLocString( "diretide_item_type", "#LoadoutSlot_Versus_Screen" );
			break;

		case 675:
		case 771:
		case 883:
			cell.SetDialogVariableLocString( "chat_wheel_label", "#DOTA_TI10_Legacy_Chat_Pack" );
			break;

		case 1131:
		case 1245:
			cell.SetDialogVariableLocString( "chat_wheel_label", "#DOTA_TI10_Legacy_Epic_Pack" );
			break;


	}
}
