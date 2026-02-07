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
    const mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new RunFunctionAction(function () {
        mainSeq.actions.push(new AddClassAction($('#MonsterHunterScene'), 'Initialize'));
    }));
    mainSeq.actions.push(new WaitAction(1.5));
    //mainSeq.actions.push(new WaitAction(4));
    RunSingleAction(mainSeq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfbW9uc3Rlcl9odW50ZXJfc2ltcGxpZmllZC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2xlYWZfcGFnZXMvZGFzaGJvYXJkX2JhY2tncm91bmRfbW9uc3Rlcl9odW50ZXJfc2ltcGxpZmllZC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywyQ0FBMkM7QUFDM0MsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUtwRCx3Q0FBd0M7QUFFeEMsSUFBSSxTQUFTLEdBQUc7SUFFZixNQUFNLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUEwQixDQUFDO0lBQzlELE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBQyxxQkFBcUIsQ0FBcUIsQ0FBQztJQUVoRSxNQUFNLE9BQU8sR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFM0MsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxpQkFBaUIsQ0FBQztRQUUxQyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLGNBQWMsQ0FBQyxDQUFDLENBQUMscUJBQXFCLENBQUMsRUFBRSxZQUFZLENBQUMsQ0FBQyxDQUFDO0lBRWxGLENBQUMsQ0FBQyxDQUFDLENBQUE7SUFDSCxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLFVBQVUsQ0FBQyxHQUFHLENBQUMsQ0FBQyxDQUFDO0lBQzFDLDBDQUEwQztJQUUxQyxlQUFlLENBQUMsT0FBTyxDQUFDLENBQUM7QUFFMUIsQ0FBQyxDQUFBIn0=