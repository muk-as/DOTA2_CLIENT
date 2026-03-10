"use strict";
/// <reference path="../util.ts" />
/// <reference path="../common/async.ts" />
/// <reference path="dota.d.ts" />
PlayQuarteroItemClaimPopupDialog();
function PlayQuarteroItemClaimPopupDialog() {
    $.Msg("CLAIM!");
    if (Math.random() < 0.1) {
        PlayUISoundScript('quartero_itemclaim_popup_rare');
    }
    else {
        PlayUISoundScript('quartero_itemclaim_popup_common');
    }
}
class EmoteSequence {
    emotes;
    static gUniqueEmoteURLs = new Set([]);
    constructor(emotes) {
        this.emotes = emotes;
        for (let emote of emotes) {
            EmoteSequence.gUniqueEmoteURLs.add(emote.emote);
        }
    }
    GetEmoteURLs() {
        return new Set(this.emotes.map((entry) => entry.emote));
    }
}
// HOW TO CREATE QUARTERO SEQUENCES
//  * The Emote Sequences are constructed with an array of EmoteDisplays.
//  * Each EmoteDisplay has an emote name and a duration.
//  * The emote filename is {images}/events/seasonal/visual_novel/portraits/quartero/quartero_portrait_<emotename>.png.
// 
// SEQUENCES
//  * The gFirstSequence is the first sequence that will play.
//  * After that is played, a random sequence from those listed in gSequences is played.
//  * Currently gSequences does not include the sequence that gFirstSequence is set to, but there's no reason it shouldn't.
//
// HOVER ANIMATION
//  * There is a hover animation sequence that gets played when the user hovers over the shard box.
//  * Currently there is just one, but you can add more as long as you add them in to the gShardHoverSequences array.
//
// NOTE
//  * It will take a small amount of time for the images to load; so until that happens the portrait will show whatever
//    image you have set in the xml. If you remove that from the xml, the portrait circle will be blank briefly when
//    the popup loads.
const gIntroSequence = new EmoteSequence([
    { emote: "idle", duration: 2 },
    { emote: "irritated_01", duration: 3 },
    { emote: "irritated_03", duration: 3 },
    { emote: "irritated_01", duration: 2 },
    { emote: "irritated_02", duration: 3 },
    { emote: "irritated_03", duration: 3 },
    { emote: "irritated_07", duration: 3 },
]);
const gLookAtWatch = new EmoteSequence([
    { emote: "irritated_01", duration: 2 },
    { emote: "irritated_02", duration: 3 },
    { emote: "irritated_03", duration: 2 },
    { emote: "irritated_02", duration: 3 },
    { emote: "irritated_01", duration: 1 },
]);
const gTentHands = new EmoteSequence([
    { emote: "irritated_03", duration: 2 },
    { emote: "irritated_04", duration: 3 },
    { emote: "irritated_05", duration: 2 },
    { emote: "irritated_04", duration: 4 },
    { emote: "irritated_01", duration: 3 },
]);
const gSequences = [
    gLookAtWatch,
    gLookAtWatch,
    gTentHands
];
const gFirstSequence = gIntroSequence;
const gShardHoverSequence = new EmoteSequence([
    { emote: "pointing_01", duration: 0.5 },
    { emote: "pointing_02", duration: 0.5 },
    { emote: "pointing_03", duration: 2 },
    { emote: "pointing_04", duration: 1 },
    { emote: "pointing_03", duration: 4 }
]);
const gShardHoverSequences = [
    gShardHoverSequence
];
let gAsyncAbort = null;
class EmoteSequencePlayer {
    sequence;
    target;
    index;
    frameTime;
    constructor(sequence, target) {
        this.sequence = sequence;
        this.target = target;
        this.index = 0;
        this.frameTime = 0;
        this.target.SetImage(EmoteSequencePlayer.EmoteToURL(this.sequence.emotes[0].emote));
    }
    static EmoteToURL(emote) {
        return "file://{images}/events/seasonal/visual_novel/portraits/quartero/quartero_portrait_" + emote + ".png";
    }
    Update() {
        if (this.IsFinished()) {
            return;
        }
        this.frameTime += Game.GetGameFrameTime();
        if (this.frameTime >= this.sequence.emotes[this.index].duration) {
            this.index += 1;
            this.frameTime = 0;
            if (!this.IsFinished()) {
                this.target.SetImage(EmoteSequencePlayer.EmoteToURL(this.sequence.emotes[this.index].emote));
            }
        }
    }
    IsFinished() {
        return this.index >= this.sequence.emotes.length;
    }
}
let gCurrentSequence = gFirstSequence;
class QuarteroAnimator {
    target;
    currentPlayer;
    sequences;
    preLoadComplete = false;
    constructor(target, sequences, initialSequence) {
        this.target = target;
        this.sequences = sequences;
        this.currentPlayer = new EmoteSequencePlayer(initialSequence, this.target);
    }
    SetNewSequences(sequences) {
        if (!this.preLoadComplete) {
            return;
        }
        this.sequences = sequences;
        this.StartRandomSequence();
    }
    StartRandomSequence() {
        const index = Math.floor(Math.random() * this.sequences.length);
        this.currentPlayer = new EmoteSequencePlayer(this.sequences[index], this.target);
    }
    IsClaimPanelVisible() {
        const shardPanel = $.GetContextPanel().FindChildTraverse("ClaimAsPointsPanel");
        return shardPanel != null && shardPanel.IsValid() && shardPanel.visible;
    }
    *PreloadImages() {
        const container = $.GetContextPanel().FindChildTraverse("PortraitStack");
        for (let emote of EmoteSequence.gUniqueEmoteURLs) {
            const emoteURL = EmoteSequencePlayer.EmoteToURL(emote);
            $.Msg("Preloading " + emoteURL);
            let imagePanel = $.CreatePanel("Image", container, "", { defaultsrc: emoteURL });
            imagePanel.style.opacity = "0.001";
            yield Async.NextFrame();
        }
        this.preLoadComplete = true;
    }
    *RunCoroutine(abortSignal) {
        // Because the claim points panel gets its visibility set by C++, we need to wait a frame for its state to get set.
        yield Async.NextFrame();
        if (!(yield this.IsClaimPanelVisible())) {
            return;
        }
        yield* this.PreloadImages();
        while (!abortSignal.aborted) {
            if (this.currentPlayer == null || this.currentPlayer.IsFinished()) {
                this.StartRandomSequence();
            }
            this.currentPlayer.Update();
            yield Async.NextFrame();
        }
    }
}
let gQuatero;
function ShardClaimOnMouseOver() {
    $.Msg("On Mouse over!");
    gQuatero.SetNewSequences(gShardHoverSequences);
}
function ShardClaimOnMouseOut() {
    $.Msg("On Mouse out!");
    gQuatero.SetNewSequences(gSequences);
}
function StartActorPictureAnimation() {
    const actorPicture = $.GetContextPanel().FindChildTraverse("ActorPictureMain");
    if (!actorPicture.IsValid()) {
        $.Msg("Could not find actor picture for animation.");
        return;
    }
    gQuatero = new QuarteroAnimator(actorPicture, gSequences, gFirstSequence);
    gAsyncAbort = new Async.AbortController();
    //gQuatero.Run( gAsyncAbort.signal );
    Async.RunSequence(function* (signal) { yield* gQuatero.RunCoroutine(signal); }, gAsyncAbort.signal);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicXVhcnRlcm9faXRlbWNsYWltX3BvcHVwLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvZXZlbnRzL3F1YXJ0ZXJvX2l0ZW1jbGFpbV9wb3B1cC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsbUNBQW1DO0FBQ25DLDJDQUEyQztBQUMzQyxrQ0FBa0M7QUFFbEMsZ0NBQWdDLEVBQUUsQ0FBQztBQUVuQyxTQUFTLGdDQUFnQztJQUN4QyxDQUFDLENBQUMsR0FBRyxDQUFFLFFBQVEsQ0FBRSxDQUFBO0lBQ2pCLElBQUssSUFBSSxDQUFDLE1BQU0sRUFBRSxHQUFHLEdBQUcsRUFDeEI7UUFDQyxpQkFBaUIsQ0FBRSwrQkFBK0IsQ0FBRSxDQUFDO0tBQ3JEO1NBRUQ7UUFDQyxpQkFBaUIsQ0FBRSxpQ0FBaUMsQ0FBRSxDQUFDO0tBQ3ZEO0FBQ0YsQ0FBQztBQU9ELE1BQU0sYUFBYTtJQUNsQixNQUFNLENBQWtCO0lBQ3hCLE1BQU0sQ0FBQyxnQkFBZ0IsR0FBa0IsSUFBSSxHQUFHLENBQUMsRUFBRSxDQUFDLENBQUM7SUFFckQsWUFBYSxNQUFzQjtRQUNsQyxJQUFJLENBQUMsTUFBTSxHQUFHLE1BQU0sQ0FBQztRQUNyQixLQUFNLElBQUksS0FBSyxJQUFJLE1BQU0sRUFBRztZQUMzQixhQUFhLENBQUMsZ0JBQWdCLENBQUMsR0FBRyxDQUFFLEtBQUssQ0FBQyxLQUFLLENBQUUsQ0FBQztTQUNsRDtJQUNGLENBQUM7SUFFRCxZQUFZO1FBQ1gsT0FBTyxJQUFJLEdBQUcsQ0FBWSxJQUFJLENBQUMsTUFBTSxDQUFDLEdBQUcsQ0FBRSxDQUFFLEtBQUssRUFBRyxFQUFFLENBQUMsS0FBSyxDQUFDLEtBQUssQ0FBRSxDQUFFLENBQUM7SUFDekUsQ0FBQzs7QUFHRixtQ0FBbUM7QUFDbkMseUVBQXlFO0FBQ3pFLHlEQUF5RDtBQUN6RCx1SEFBdUg7QUFDdkgsR0FBRztB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