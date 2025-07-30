"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
/// <reference path="hud/versus/dota_hud_versus_scene_shared.ts" />
var mainPanel = $('#BackgroundScene');
var RunPageAnimation = function () {
    var mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new RunFunctionAction(function () {
        mainPanel.FireEntityInput('hero_ursa', 'Disable', '');
        mainPanel.FireEntityInput('roshan', 'Disable', '');
        mainPanel.FireEntityInput('hero_earthshaker', 'SetActivityModifier', 'collectors_cache');
        mainPanel.FireEntityInput('hero_earthshaker', 'DisableDefaultActivityModifiers', 1);
        mainPanel.FireEntityInput('hero_earthshaker', 'SetPlaybackRateOnAllLayers', 0.9);
        $.Schedule(2, function () {
        });
        $.Schedule(1.2, function () {
            mainPanel.FireEntityInput('hero_ursa', 'Enable', '');
            mainPanel.FireEntityInput('hero_ursa', 'SetPlaybackRateOnAllLayers', 0.6);
        });
        $.Schedule(2.0, function () {
            mainPanel.FireEntityInput('roshan', 'Enable', '');
            mainPanel.FireEntityInput('roshan', 'DisableDefaultActivityModifiers', 1);
            mainPanel.FireEntityInput('roshan', 'SetActivityModifier', 'nofx');
            mainPanel.FireEntityInput('roshan', 'StartGestureOverride', 'ACT_DOTA_SPAWN');
            mainPanel.FireEntityInput('roshan', 'SetPlaybackRateOnAllLayers', 0.6);
        });
    }));
    RunSingleAction(mainSeq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfMTB0aF9hbm5pdmVyc2FyeS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2Rhc2hib2FyZF9iYWNrZ3JvdW5kXzEwdGhfYW5uaXZlcnNhcnkudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsaURBQWlEO0FBQ2pELG1FQUFtRTtBQWdCbkUsSUFBSSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGtCQUFrQixDQUFxQixDQUFDO0FBQzFELElBQUksZ0JBQWdCLEdBQUc7SUFHbkIsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFJdEMsU0FBUyxDQUFDLGVBQWUsQ0FBRSxXQUFXLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQ3hELFNBQVMsQ0FBQyxlQUFlLENBQUUsUUFBUSxFQUFFLFNBQVMsRUFBRSxFQUFFLENBQUUsQ0FBQztRQU1yRCxTQUFTLENBQUMsZUFBZSxDQUFFLGtCQUFrQixFQUFFLHFCQUFxQixFQUFFLGtCQUFrQixDQUFFLENBQUM7UUFDM0YsU0FBUyxDQUFDLGVBQWUsQ0FBRSxrQkFBa0IsRUFBRSxpQ0FBaUMsRUFBRSxDQUFDLENBQUUsQ0FBQztRQUN0RixTQUFTLENBQUMsZUFBZSxDQUFFLGtCQUFrQixFQUFFLDRCQUE0QixFQUFFLEdBQUcsQ0FBRSxDQUFDO1FBRW5GLENBQUMsQ0FBQyxRQUFRLENBQUMsQ0FBQyxFQUFFO1FBR2QsQ0FBQyxDQUFDLENBQUM7UUFFSCxDQUFDLENBQUMsUUFBUSxDQUFDLEdBQUcsRUFBRTtZQUNaLFNBQVMsQ0FBQyxlQUFlLENBQUUsV0FBVyxFQUFFLFFBQVEsRUFBRSxFQUFFLENBQUUsQ0FBQztZQUl2RCxTQUFTLENBQUMsZUFBZSxDQUFFLFdBQVcsRUFBRSw0QkFBNEIsRUFBRSxHQUFHLENBQUUsQ0FBQztRQUNoRixDQUFDLENBQUMsQ0FBQztRQUNILENBQUMsQ0FBQyxRQUFRLENBQUMsR0FBRyxFQUFFO1lBQ1osU0FBUyxDQUFDLGVBQWUsQ0FBRSxRQUFRLEVBQUUsUUFBUSxFQUFFLEVBQUUsQ0FBRSxDQUFDO1lBRXBELFNBQVMsQ0FBQyxlQUFlLENBQUUsUUFBUSxFQUFFLGlDQUFpQyxFQUFFLENBQUMsQ0FBRSxDQUFDO1lBRTVFLFNBQVMsQ0FBQyxlQUFlLENBQUUsUUFBUSxFQUFFLHFCQUFxQixFQUFFLE1BQU0sQ0FBRSxDQUFDO1lBRXJFLFNBQVMsQ0FBQyxlQUFlLENBQUUsUUFBUSxFQUFFLHNCQUFzQixFQUFFLGdCQUFnQixDQUFFLENBQUM7WUFDaEYsU0FBUyxDQUFDLGVBQWUsQ0FBRSxRQUFRLEVBQUUsNEJBQTRCLEVBQUUsR0FBRyxDQUFFLENBQUM7UUFDN0UsQ0FBQyxDQUFDLENBQUM7SUFJUCxDQUFDLENBQUMsQ0FBQyxDQUFDO0lBS1AsZUFBZSxDQUFFLE9BQU8sQ0FBRSxDQUFDO0FBQzVCLENBQUMsQ0FBQSJ9