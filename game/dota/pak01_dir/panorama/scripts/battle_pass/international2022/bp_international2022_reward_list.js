"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
var InitCustomCell = function (cellID, nLevel) {
    let cell = $('#' + cellID);
    switch (nLevel) {
        case 15:
        case 156:
        case 183:
        case 221:
        case 241:
        case 285:
            cell.SetDialogVariableLocString("diretide_item_type", "#DOTA_ChatWheel");
            break;
        case 62:
            cell.SetDialogVariableLocString("diretide_item_type", "#LoadoutSlot_Map_Effect");
            break;
        case 101:
            cell.SetDialogVariableLocString("diretide_item_type", "#loading_screen");
            break;
        case 194:
            cell.SetDialogVariableLocString("diretide_item_type", "#DOTA_FavoriteTeam_Spray");
            break;
        case 81:
        case 161:
        case 279:
            cell.SetDialogVariableLocString("diretide_item_type", "#DOTA_International2022_CustomGameUpgrade");
            break;
        case 117:
        case 239:
            cell.SetDialogVariableLocString("diretide_item_type", "#LoadoutSlot_Versus_Screen");
            break;
        case 675:
        case 771:
        case 883:
            cell.SetDialogVariableLocString("chat_wheel_label", "#DOTA_TI10_Legacy_Chat_Pack");
            break;
        case 1131:
        case 1245:
            cell.SetDialogVariableLocString("chat_wheel_label", "#DOTA_TI10_Legacy_Epic_Pack");
            break;
    }
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfaW50ZXJuYXRpb25hbDIwMjJfcmV3YXJkX2xpc3QuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJicF9pbnRlcm5hdGlvbmFsMjAyMl9yZXdhcmRfbGlzdC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLHNDQUFzQztBQUV0QyxJQUFJLGNBQWMsR0FBRyxVQUFVLE1BQWMsRUFBRSxNQUFjO0lBRTVELElBQUksSUFBSSxHQUFZLENBQUMsQ0FBRSxHQUFHLEdBQUcsTUFBTSxDQUFFLENBQUM7SUFDdEMsUUFBUyxNQUFNLEVBQ2Y7UUFDQyxLQUFLLEVBQUUsQ0FBQztRQUNSLEtBQUssR0FBRyxDQUFDO1FBQ1QsS0FBSyxHQUFHLENBQUM7UUFDVCxLQUFLLEdBQUcsQ0FBQztRQUNULEtBQUssR0FBRyxDQUFDO1FBQ1QsS0FBSyxHQUFHO1lBQ1AsSUFBSSxDQUFDLDBCQUEwQixDQUFFLG9CQUFvQixFQUFFLGlCQUFpQixDQUFFLENBQUM7WUFDM0UsTUFBTTtRQUVQLEtBQUssRUFBRTtZQUNOLElBQUksQ0FBQywwQkFBMEIsQ0FBRSxvQkFBb0IsRUFBRSx5QkFBeUIsQ0FBRSxDQUFDO1lBQ25GLE1BQU07UUFFUCxLQUFLLEdBQUc7WUFDUCxJQUFJLENBQUMsMEJBQTBCLENBQUUsb0JBQW9CLEVBQUUsaUJBQWlCLENBQUUsQ0FBQztZQUMzRSxNQUFNO1FBRVAsS0FBSyxHQUFHO1lBQ1AsSUFBSSxDQUFDLDBCQUEwQixDQUFFLG9CQUFvQixFQUFFLDBCQUEwQixDQUFFLENBQUM7WUFDcEYsTUFBTTtRQUVQLEtBQUssRUFBRSxDQUFDO1FBQ1IsS0FBSyxHQUFHLENBQUM7UUFDVCxLQUFLLEdBQUc7WUFDUCxJQUFJLENBQUMsMEJBQTBCLENBQUUsb0JBQW9CLEVBQUUsMkNBQTJDLENBQUUsQ0FBQztZQUNyRyxNQUFNO1FBRVAsS0FBSyxHQUFHLENBQUM7UUFDVCxLQUFLLEdBQUc7WUFDUCxJQUFJLENBQUMsMEJBQTBCLENBQUUsb0JBQW9CLEVBQUUsNEJBQTRCLENBQUUsQ0FBQztZQUN0RixNQUFNO1FBRVAsS0FBSyxHQUFHLENBQUM7UUFDVCxLQUFLLEdBQUcsQ0FBQztRQUNULEtBQUssR0FBRztZQUNQLElBQUksQ0FBQywwQkFBMEIsQ0FBRSxrQkFBa0IsRUFBRSw2QkFBNkIsQ0FBRSxDQUFDO1lBQ3JGLE1BQU07UUFFUCxLQUFLLElBQUksQ0FBQztRQUNWLEtBQUssSUFBSTtZQUNSLElBQUksQ0FBQywwQkFBMEIsQ0FBRSxrQkFBa0IsRUFBRSw2QkFBNkIsQ0FBRSxDQUFDO1lBQ3JGLE1BQU07S0FHUDtBQUNGLENBQUMsQ0FBQSJ9