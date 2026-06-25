"use strict";
/// <reference path="../util.ts" />
/// <reference path="../dota.d.ts" />
/// <reference path="../dota_sequence_actions.ts" />
var seq;
function SplashAdDisplayed() {
    seq = new RunSequentialActions();
    let mainPanel = $.GetContextPanel();
    seq.actions.push(new WaitAction(0.1));
    var RingmasterTalkingHead = $.GetContextPanel().FindChildInLayoutFile('RingmasterTalkingHead');
    if (RingmasterTalkingHead) {
        seq.actions.push(new AddClassAction(RingmasterTalkingHead, 'Show'));
    }
    seq.actions.push(new PlaySoundAction('dark_carnival_debut_takeover'));
    RunSingleAction(seq);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9wdXBfZGFya19jYXJuaXZhbC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3BvcHVwcy9wb3B1cF9kYXJrX2Nhcm5pdmFsLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxtQ0FBbUM7QUFDbkMscUNBQXFDO0FBQ3JDLG9EQUFvRDtBQUVwRCxJQUFJLEdBQXlCLENBQUM7QUFFOUIsU0FBUyxpQkFBaUI7SUFDekIsR0FBRyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUVqQyxJQUFJLFNBQVMsR0FBWSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDN0MsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxVQUFVLENBQUMsR0FBRyxDQUFDLENBQUMsQ0FBQztJQUN0QyxJQUFJLHFCQUFxQixHQUFZLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxxQkFBcUIsQ0FBQyx1QkFBdUIsQ0FBQyxDQUFDO0lBQ3hHLElBQUkscUJBQXFCLEVBQUU7UUFDMUIsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxjQUFjLENBQUMscUJBQXFCLEVBQUUsTUFBTSxDQUFDLENBQUMsQ0FBQztLQUNwRTtJQUNELEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksZUFBZSxDQUFDLDhCQUE4QixDQUFDLENBQUMsQ0FBQztJQUV0RSxlQUFlLENBQUMsR0FBRyxDQUFDLENBQUM7QUFDdEIsQ0FBQyJ9