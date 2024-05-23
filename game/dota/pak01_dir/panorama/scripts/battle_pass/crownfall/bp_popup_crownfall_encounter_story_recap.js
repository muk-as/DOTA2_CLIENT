"use strict";

var step = 0;
// 0 open, show column 1
// 1 show column 2
// 2 show column 3
// 3 show story page
// 4 go to comic page
// 5 exit

function SetStep(newStep) {
    let panel = $.GetContextPanel();
    step = newStep;
    switch (step) {
        case 1:
            panel.AddClass("ShowColumn2");
            PlayUISoundScript("ui.shortwhoosh");
            break;
        case 2:
            panel.AddClass("ShowColumn3");
            PlayUISoundScript("ui.shortwhoosh");
            break;
        case 3:
            PlayUISoundScript("ui.shortwhoosh");
            panel.AddClass("ShowStoryPage");
            $.Schedule(0.7, function () {
                $.GetContextPanel().AddClass("StoryPageLoaded");
                PlayUISoundScript("ui_find_match_slide_out");
            });
            break;
        case 4:
            PlayUISoundScript("ui.shortwhoosh");
            panel.AddClass("ShowComicPage");
            break;
        default:
            PlayUISoundScript("ui.shortwhoosh");
            $.DispatchEvent("UIPopupButtonClicked", panel);
            $.DispatchEvent("DOTANextOverworldIntro", panel);
            break;
    }
}
function GoToNext() {
    SetStep(step + 1);

    return true;
}
function SkipToStory() {
    if (step < 3) {
        SetStep(3);
    }
}

(function () {
    $.GetContextPanel().SetHasClass( "Loaded", false );
    $.Schedule(0.3, function () {
        $.GetContextPanel().AddClass("Loaded");
    });
    $.Schedule(1.1, function () {
        PlayUISoundScript("ui_find_match_slide_out");
    });
})();