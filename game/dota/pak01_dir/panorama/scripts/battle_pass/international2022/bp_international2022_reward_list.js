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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfaW50ZXJuYXRpb25hbDIwMjJfcmV3YXJkX2xpc3QuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJicF9pbnRlcm5hdGlvbmFsMjAyMl9yZXdhcmRfbGlzdC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSx3Q0FBd0M7QUFDeEMsc0NBQXNDO0FBRXRDLElBQUksY0FBYyxHQUFHLFVBQVUsTUFBYyxFQUFFLE1BQWM7SUFFNUQsSUFBSSxJQUFJLEdBQVksQ0FBQyxDQUFFLEdBQUcsR0FBRyxNQUFNLENBQUUsQ0FBQztJQUN0QyxRQUFTLE1BQU0sRUFDZjtRQUNDLEtBQUssRUFBRSxDQUFDO1FBQ1IsS0FBSyxHQUFHLENBQUM7UUFDVCxLQUFLLEdBQUcsQ0FBQztRQUNULEtBQUssR0FBRyxDQUFDO1FBQ1QsS0FBSyxHQUFHLENBQUM7UUFDVCxLQUFLLEdBQUc7WUFDUCxJQUFJLENBQUMsMEJBQTBCLENBQUUsb0JBQW9CLEVBQUUsaUJBQWlCLENBQUUsQ0FBQztZQUMzRSxNQUFNO1FBRVAsS0FBSyxFQUFFO1lBQ04sSUFBSSxDQUFDLDBCQUEwQixDQUFFLG9CQUFvQixFQUFFLHlCQUF5QixDQUFFLENBQUM7WUFDbkYsTUFBTTtRQUVQLEtBQUssR0FBRztZQUNQLElBQUksQ0FBQywwQkFBMEIsQ0FBRSxvQkFBb0IsRUFBRSxpQkFBaUIsQ0FBRSxDQUFDO1lBQzNFLE1BQU07UUFFUCxLQUFLLEdBQUc7WUFDUCxJQUFJLENBQUMsMEJBQTBCLENBQUUsb0JBQW9CLEVBQUUsMEJBQTBCLENBQUUsQ0FBQztZQUNwRixNQUFNO1FBRVAsS0FBSyxFQUFFLENBQUM7UUFDUixLQUFLLEdBQUcsQ0FBQztRQUNULEtBQUssR0FBRztZQUNQLElBQUksQ0FBQywwQkFBMEIsQ0FBRSxvQkFBb0IsRUFBRSwyQ0FBMkMsQ0FBRSxDQUFDO1lBQ3JHLE1BQU07UUFFUCxLQUFLLEdBQUcsQ0FBQztRQUNULEtBQUssR0FBRztZQUNQLElBQUksQ0FBQywwQkFBMEIsQ0FBRSxvQkFBb0IsRUFBRSw0QkFBNEIsQ0FBRSxDQUFDO1lBQ3RGLE1BQU07UUFFUCxLQUFLLEdBQUcsQ0FBQztRQUNULEtBQUssR0FBRyxDQUFDO1FBQ1QsS0FBSyxHQUFHO1lBQ1AsSUFBSSxDQUFDLDBCQUEwQixDQUFFLGtCQUFrQixFQUFFLDZCQUE2QixDQUFFLENBQUM7WUFDckYsTUFBTTtRQUVQLEtBQUssSUFBSSxDQUFDO1FBQ1YsS0FBSyxJQUFJO1lBQ1IsSUFBSSxDQUFDLDBCQUEwQixDQUFFLGtCQUFrQixFQUFFLDZCQUE2QixDQUFFLENBQUM7WUFDckYsTUFBTTtLQUdQO0FBQ0YsQ0FBQyxDQUFBIn0=