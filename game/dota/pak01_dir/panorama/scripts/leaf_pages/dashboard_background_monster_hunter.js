"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../common/async.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="../dota_sequence_actions.ts" />
// Called from C++ when the scene starts
var PlayScene = function () {
    const mainPanel = $.GetContextPanel();
    const scenePanel = $('#MonsterHunterScene');
    const speedFreeze = '0.04';
    const lerpRate = 6; //Multiply by 100
    const secondScene = 1;
    const fovFinal = 40;
    let fovValue = 80;
    let dragonName = 'rathalos';
    if (secondScene === 1) {
        dragonName = 'rathalos_b';
    }
    let i = 60; //Multiply by 100
    let names = [];
    if (secondScene) {
        names.push('sniper_b');
        names.push('antimage_b');
        names.push('beastmaster_b');
        names.push('windranger_b');
        //names.push('palico');
        //names.push('poogie');
    }
    else {
        names.push('sniper');
        names.push('antimage');
        names.push('beastmaster');
        names.push('windranger');
    }
    //	if (secondScene === 1)
    //	{
    scenePanel.FireEntityInput('rathalos', 'TurnOff', '');
    scenePanel.FireEntityInput('rathalos_b', 'TurnOff', '');
    scenePanel.FireEntityInput(dragonName, 'TurnOn', '');
    if (secondScene) {
        scenePanel.FireEntityInput('dashboard_camera', 'SetDOFNearBlurry', 100);
        scenePanel.FireEntityInput('dashboard_camera', 'SetDOFNearCrisp', 350);
        scenePanel.FireEntityInput('dashboard_camera', 'SetDOFFarCrisp', 500);
        scenePanel.FireEntityInput('dashboard_camera', 'SetDOFFarBlurry', 3500);
    }
    //	}
    function HeroEnabler(names) {
        scenePanel.FireEntityInput(names, 'Enable', '');
    }
    function AnimSpeed(names) {
        scenePanel.FireEntityInput(names, 'SetPlaybackRateOnAllLayers', (secondScene) ? speedFreeze : (i / 100));
        //Antimage exception, the animation was too slow
        scenePanel.FireEntityInput('antimage_b', 'SetPlaybackRateOnAllLayers', 0.3);
        scenePanel.FireEntityInput(dragonName, 'SetPlaybackRate', (secondScene) ? speedFreeze : (i / 100));
        //$.Msg("Hero Numer is " + names); 
    }
    function AnimNames(names) {
        scenePanel.FireEntityInput(names, 'SetActivity', (secondScene) ? 'ACT_DOTA_LOADOUT' : 'ACT_DOTA_RUN');
        //scenePanel.FireEntityInput('windranger_b', 'SetActivity', 'ACT_DOTA_LOADOUT');
        //		scenePanel.FireEntityInput('windranger_b', 'SetActivity', 'windrun');
    }
    function Freeze(names) {
        scenePanel.FireEntityInput(names, 'SetPlaybackRate', speedFreeze);
    }
    function FoVChange() {
        for (let t = 0; t < 16; t += 0.1) {
            $.Schedule(t, function () {
                if (fovValue >= fovFinal) {
                    fovValue *= 0.99;
                    scenePanel.FireEntityInput('dashboard_camera', 'ChangeFOV', fovValue);
                    $.Msg(fovValue);
                }
                else {
                }
            });
        }
    }
    function SlowDown() {
        for (let t = 0; t < 16; t += 0.1) {
            $.Schedule(t, function () {
                if (secondScene) {
                    //	names.forEach(Freeze);
                    //	scenePanel.FireEntityInput(dragonName, 'SetPlaybackRate', speedFreeze);
                }
                else {
                    if (i > 0) {
                        names.forEach(AnimSpeed);
                        i -= lerpRate;
                        $.Msg(i);
                    }
                    else {
                        if (secondScene) {
                        }
                        else {
                            scenePanel.FireEntityInput(dragonName, 'SetAnimation', 'rathalos_dashboard_lift_loop');
                        }
                        names.forEach(Freeze);
                    }
                }
            });
        }
    }
    const mainSeq = new RunSequentialActions();
    //	mainSeq.actions.push(new RunFunctionAction(function ()
    //	{
    //		names.forEach(AnimSpeed);
    //	}))
    //	mainSeq.actions.push(new WaitAction(2));
    //	mainSeq.actions.push(new RunFunctionAction(function ()
    //	{
    //		names.forEach(Freeze);
    //	}))
    mainSeq.actions.push(new RunFunctionAction(function () {
        mainSeq.actions.push(new AddClassAction($('#MonsterHunterScene'), 'Initialize'));
        names.forEach(HeroEnabler);
        scenePanel.FireEntityInput('mh_camera_movement', 'SetAnimation', 'monster_hunter_dashboard_camera_intro');
        names.forEach(AnimSpeed);
        names.forEach(AnimNames);
        scenePanel.FireEntityInput(dragonName, 'SetAnimation', (secondScene) ? 'rathalos_dashboard_flying_forward' : 'rathalos_dashboard_lift');
        scenePanel.FireEntityInput(dragonName, 'SetPlaybackRate', (secondScene) ? speedFreeze : (i / 100));
        // custom anim to avoid WR looking at the camera after camera reposition
        scenePanel.FireEntityInput("windranger_b", 'SetAnimation', 'idle_V2_loadout_rare');
        //scenePanel.FireEntityInput('rathalos', 'SetPlaybackRate', (i / 50));
    }));
    mainSeq.actions.push(new WaitAction(1.5));
    //mainSeq.actions.push(new WaitAction(4));
    mainSeq.actions.push(new RunFunctionAction(function () {
        SlowDown();
    }));
    RunSingleAction(mainSeq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfbW9uc3Rlcl9odW50ZXIuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9sZWFmX3BhZ2VzL2Rhc2hib2FyZF9iYWNrZ3JvdW5kX21vbnN0ZXJfaHVudGVyLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLDJDQUEyQztBQUMzQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBS3BELHdDQUF3QztBQUV4QyxJQUFJLFNBQVMsR0FBRztJQUVmLE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQTBCLENBQUM7SUFDOUQsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLHFCQUFxQixDQUFxQixDQUFDO0lBQ2hFLE1BQU0sV0FBVyxHQUFHLE1BQU0sQ0FBQztJQUMzQixNQUFNLFFBQVEsR0FBRyxDQUFDLENBQUMsQ0FBQyxpQkFBaUI7SUFDckMsTUFBTSxXQUFXLEdBQVcsQ0FBQyxDQUFDO0lBQzlCLE1BQU0sUUFBUSxHQUFXLEVBQUUsQ0FBQztJQUU1QixJQUFJLFFBQVEsR0FBVyxFQUFFLENBQUM7SUFFMUIsSUFBSSxVQUFVLEdBQVcsVUFBVSxDQUFDO0lBQ3BDLElBQUksV0FBVyxLQUFLLENBQUMsRUFDckI7UUFDQyxVQUFVLEdBQUcsWUFBWSxDQUFDO0tBQzFCO0lBQ0QsSUFBSSxDQUFDLEdBQUcsRUFBRSxDQUFDLENBQUMsaUJBQWlCO0lBRzVCLElBQUksS0FBSyxHQUFhLEVBQUUsQ0FBQztJQUMxQixJQUFJLFdBQVcsRUFDZjtRQUNDLEtBQUssQ0FBQyxJQUFJLENBQUMsVUFBVSxDQUFDLENBQUM7UUFDdkIsS0FBSyxDQUFDLElBQUksQ0FBQyxZQUFZLENBQUMsQ0FBQztRQUN6QixLQUFLLENBQUMsSUFBSSxDQUFDLGVBQWUsQ0FBQyxDQUFDO1FBQzVCLEtBQUssQ0FBQyxJQUFJ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