"use strict";

var sectionNames = [
    "Tokens",
    "Story",
    "Coins",
    "Candy",
    "Treasures",
    "Trinkets",
    "Store",
    "Schedule"
]
function NavigationSelect(sectionIndex) {
    if (sectionIndex < 0 || sectionIndex >= sectionNames.length) {
        // Error
        return;
    }
    var mainBodyPanel = $("#MainBody");
    if (!mainBodyPanel) {
        return;
    }
    for (let i = 0; i < sectionNames.length; ++i) {
        mainBodyPanel.SetHasClass("Show" + sectionNames[i], i == sectionIndex);
    }
}