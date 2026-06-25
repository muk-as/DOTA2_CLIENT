"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../common/async.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="../dota_sequence_actions.ts" />
// Called from C++ when the scene starts
var PlayScene = function () {
    const mainPanel = $.GetContextPanel();
    const scenePanel = $('#RobotTreasureCarouselScene');
    const mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new RunFunctionAction(function () {
        mainSeq.actions.push(new AddClassAction($('#MonsterHunterScene'), 'Initialize'));
    }));
    mainSeq.actions.push(new WaitAction(1.5));
    //mainSeq.actions.push(new WaitAction(4));
    RunSingleAction(mainSeq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFya19jYXJuaXZhbF9yb2JvdF90cmVhc3VyZV9jYXJvdXNlbC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2V2ZW50cy9kYXJrX2Nhcm5pdmFsX3JvYm90X3RyZWFzdXJlX2Nhcm91c2VsLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLDJDQUEyQztBQUMzQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBS3BELHdDQUF3QztBQUV4QyxJQUFJLFNBQVMsR0FBRztJQUVmLE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQTBCLENBQUM7SUFDOUQsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLDZCQUE2QixDQUFxQixDQUFDO0lBRXhFLE1BQU0sT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUUzQyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLGlCQUFpQixDQUFDO1FBRTFDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksY0FBYyxDQUFDLENBQUMsQ0FBQyxxQkFBcUIsQ0FBQyxFQUFFLFlBQVksQ0FBQyxDQUFDLENBQUM7SUFFbEYsQ0FBQyxDQUFDLENBQUMsQ0FBQTtJQUNILE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksVUFBVSxDQUFDLEdBQUcsQ0FBQyxDQUFDLENBQUM7SUFDMUMsMENBQTBDO0lBRTFDLGVBQWUsQ0FBQyxPQUFPLENBQUMsQ0FBQztBQUUxQixDQUFDLENBQUEifQ==