/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />

var InitCustomCell = function( cellID: string, nLevel: number )
{
	let cell: Panel_t = $('#' + cellID);
	switch ( nLevel ) {
		case 175:
			cell.SetDialogVariableLocString("chat_wheel_label", "#DOTA_TI10_Legacy_Chat_Pack");
			break;
	}

}
