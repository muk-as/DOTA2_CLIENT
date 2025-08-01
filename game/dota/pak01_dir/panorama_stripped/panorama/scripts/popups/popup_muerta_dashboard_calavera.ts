/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../dota_sequence_actions.ts" />

var flameRevealSeq: RunSequentialActions | undefined;
var glowSeq: RunSequentialActions | undefined;
var flameLoopingSeq: RunLoopingActions | undefined;
var glowLoopingSeq: RunLoopingActions | undefined;

const TRANSITION_INTERVAL = 0.02;
const INITIAL_DELAY = 0.2;
const LOOP_START = 45;
const ANIM_END = 134;

                  
var FlameReveal = function (panel_id: string): void {
    let node: Panel_t = $('#' + panel_id);
    node.AddClass('Frame000');

    if (flameLoopingSeq) {
        flameLoopingSeq.finish();
    }

    if (flameRevealSeq) {
        flameRevealSeq.finish();
    }

    flameRevealSeq = new RunSequentialActions();
    flameRevealSeq.actions.push(new WaitAction(INITIAL_DELAY));

    let currentFrame = 1;
    while (currentFrame < LOOP_START) {
        flameRevealSeq.actions.push(new RemoveClassAction(node, 'Frame' + (currentFrame - 1).toString().padStart(3, '0')));
        flameRevealSeq.actions.push(new AddClassAction(node, 'Frame' + currentFrame.toString().padStart(3, '0')));
        flameRevealSeq.actions.push(new WaitAction(TRANSITION_INTERVAL));
        currentFrame++;
    }

    flameLoopingSeq = new RunLoopingActions();
    while (currentFrame <= ANIM_END) {
        flameLoopingSeq.actions.push(new RemoveClassAction(node, 'Frame' + (currentFrame - 1).toString().padStart(3, '0')));
        if (currentFrame <= ANIM_END) {
            flameLoopingSeq.actions.push(new AddClassAction(node, 'Frame' + currentFrame.toString().padStart(3, '0')));
        }
        flameLoopingSeq.actions.push(new WaitAction(TRANSITION_INTERVAL));
        if (currentFrame == ANIM_END) {
            flameLoopingSeq.actions.push(new RemoveClassAction(node, 'Frame' + ANIM_END.toString().padStart(3, '0')));
        }
        currentFrame++;
    }
     
    flameRevealSeq.actions.push(flameLoopingSeq);

    RunSingleAction(flameRevealSeq);
}

                  
var GlowReveal = function (panel_id: string): void {
    let node: Panel_t = $('#' + panel_id);
    node.AddClass('Frame000');

    if (glowLoopingSeq) {
        glowLoopingSeq.finish();
    }

    if (glowSeq) {
        glowSeq.finish();
    }

    glowSeq = new RunSequentialActions();
    glowSeq.actions.push(new WaitAction(INITIAL_DELAY));

    let currentFrame = 1;
    while (currentFrame < LOOP_START) {
        glowSeq.actions.push(new RemoveClassAction(node, 'Frame' + (currentFrame - 1).toString().padStart(3, '0')));
        glowSeq.actions.push(new AddClassAction(node, 'Frame' + currentFrame.toString().padStart(3, '0')));
        glowSeq.actions.push(new WaitAction(TRANSITION_INTERVAL));
        currentFrame++;
    }

    glowLoopingSeq = new RunLoopingActions();
    while (currentFrame <= ANIM_END) {
        glowLoopingSeq.actions.push(new RemoveClassAction(node, 'Frame' + (currentFrame - 1).toString().padStart(3, '0')));
        if (currentFrame <= ANIM_END) {
            glowLoopingSeq.actions.push(new AddClassAction(node, 'Frame' + currentFrame.toString().padStart(3, '0')));
        }
        glowLoopingSeq.actions.push(new WaitAction(TRANSITION_INTERVAL));
        if (currentFrame == ANIM_END) {
            glowLoopingSeq.actions.push(new RemoveClassAction(node, 'Frame' + ANIM_END.toString().padStart(3, '0')));
        }
        currentFrame++;
    }

    glowSeq.actions.push(glowLoopingSeq);

    RunSingleAction(glowSeq);
}