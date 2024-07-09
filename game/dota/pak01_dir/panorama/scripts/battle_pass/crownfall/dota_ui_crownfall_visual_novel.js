"use strict";

var g_typeWriterEffect = {
    m_nCharacterIndex: 0,
    m_strText: "",
    m_panel: null,
    m_bFinished: true,
    m_strVoiceSound: "",
    m_storyPanel: null,
    m_donkeyPanel: null,
    m_flBaseSoundDelay: 0,
    m_bDoPlaySounds: false,
    m_bSkipToEnd: false,
    m_fSpeedModifier: 1.0
};

function SkipToEnd() {
    if (!g_typeWriterEffect.m_bFinished) {
        g_typeWriterEffect.m_bSkipToEnd = true
        return false;
    }
    return true;
}

function SetFinished() {
    g_typeWriterEffect.m_bFinished = true;
    if (g_typeWriterEffect.m_strText.length != 0) {
        g_typeWriterEffect.m_panel.text = g_typeWriterEffect.m_strText + " <child id='Cursor' nobreak='1'>";
    }
    g_typeWriterEffect.m_storyPanel.GetParent().SetHasClass("Animating", false);
    g_typeWriterEffect.m_storyPanel.SetHasClass("AnimateDonkey", false);
    $.Msg("Finished effects on ", g_typeWriterEffect.m_strText);
}

function UpdateSounds() {
    if (g_typeWriterEffect.m_bDoPlaySounds) {
        PlayUISoundScript(g_typeWriterEffect.m_strVoiceSound);
    }
    if (!g_typeWriterEffect.m_bFinished) {
        $.Schedule(g_typeWriterEffect.m_flBaseSoundDelay, UpdateSounds);
    }
}
function strncmp(str1, str2, n) {
    str1 = str1.substring(0, n);
    str2 = str2.substring(0, n);
    return ((str1 == str2) ? 0 :
        ((str1 > str2) ? 1 : -1));
}

function splitHTMLString(htmlString) {
    const regex = /<[^>]*>|[^<]+/g; // Regular expression to match HTML tags and text content
    return htmlString.match(regex);
}
// Since we're dynamically inserting a <span> in the middle of our dialogue line,
// this can result in a formatting tag like <b></b> getting broken up. We need to
// detect and fix these cases.
// Example: <b>Hello <span>World</b></span>
//          should be
//          <b>Hello </b><span>World</span>
function FixUpHtmlTags(strHtmlText) {
    var chunks = splitHTMLString(strHtmlText);
    var rebuiltString = "";
    var isBold = false;
    var isItalics = false;
    var someText = false;
    var isSpan = false;

    //$.Msg("FixUphtmlTags, chunks: " + chunks.join('|'));

    for (var i = 0; i < chunks.length; ++i) {
        // This is hacky, but we only need to support a limited number of tag types.
        var isOpeningTag = false;
        if (chunks[i] == "<b>") {
            isBold = true;
            someText = false;
        }
        else if (chunks[i] == "<i>") {
            isItalics = true;
            someText = false;
        }
        else if (strncmp(chunks[i], "<span", 5) == 0 ) {
            isSpan = true;
            someText = false;
            //$.Msg("Detected span opening tag. " + i);
        }
        else if (chunks[i] == "</b>") {
            isBold = false;
        }
        else if (chunks[i] == "</i>") {
            isItalics = false;
        }
        else if (strncmp(chunks[i], "<child ", 5) == 0) {
            if (isSpan) {
                //$.Msg("Fixing up child inside span");
                // Find the closing tag, and insert it here.
                var closingTagIndex = chunks.indexOf("</span>", i);
                chunks.splice(closingTagIndex, 1);
                if (someText) {
                    chunks.splice(i + 1, 0, "</span>");
                }
                else {
                    chunks.splice(i, 0, "</span>");
                }
                isSpan = false;
            } 
            else if (isBold) {
                // Find the closing tag, and insert it here.
                var closingTagIndex = chunks.indexOf("</b>", i);
                chunks.splice(closingTagIndex, 1);
                if (someText) {
                    chunks.splice(i+1, 0, "</b>");
                }
                else {
                    chunks.splice(i, 0, "</b>");
                }
                isBold = false;
            }
            else if (isItalics) {
                var closingTagIndex = chunks.indexOf("</i>", i);
                chunks.splice(closingTagIndex, 1);
                if (someText) {
                    chunks.splice(i+1, 0, "</i>");
                }
                else {
                    chunks.splice(i, 0, "</i>");
                }
                isItalics = false;
            }
        }
        else if (chunks[i].charAt(0) == "<" ) {
            someText = true;
        }
    }
    return chunks.join('');
}

function UpdateEffects() {
    if (!g_typeWriterEffect.m_panel || g_typeWriterEffect.m_bFinished) {
        return;
    }
    //$.Msg(g_typeWriterEffect.m_nCharacterIndex, "/", g_typeWriterEffect.m_strText.length);

    var nCharIncrement = 1;
    if( g_typeWriterEffect.m_bSkipToEnd )
    {
        nCharIncrement = 5;
    }

    for (var i = 0; i < nCharIncrement; ++i) {
        var lastCharacter = g_typeWriterEffect.m_strText.charAt(g_typeWriterEffect.m_nCharacterIndex);
        g_typeWriterEffect.m_nCharacterIndex = g_typeWriterEffect.m_nCharacterIndex + 1;
        if (lastCharacter === "<") {
            // Html tag. Skip characters until we get to the end of the tag.
            while (lastCharacter !== ">") {
                lastCharacter = g_typeWriterEffect.m_strText.charAt(g_typeWriterEffect.m_nCharacterIndex);
                g_typeWriterEffect.m_nCharacterIndex++;
                //$.Msg("Skipping" + newestCharacter);
            }
        }
    }
    if (g_typeWriterEffect.m_nCharacterIndex >= g_typeWriterEffect.m_strText.length) {
        SetFinished();
        return;
    }

    var partialString = g_typeWriterEffect.m_strText.substring(0, g_typeWriterEffect.m_nCharacterIndex);
    var endString = g_typeWriterEffect.m_strText.substring(g_typeWriterEffect.m_nCharacterIndex);

    //$.Msg(partialString, " / ", g_typeWriterEffect.m_strText)
    var combinedString = partialString + "<child id='Cursor' nobreak='1'/><span class='HideText'>" + endString + "</span>";
    //$.Msg("Before:\t" + combinedString);
    var fixedString = FixUpHtmlTags(combinedString);
    //$.Msg("After:\t" + fixedString);
    g_typeWriterEffect.m_panel.text = fixedString;

    // Vary the character delay depending on punctuation.
    var flCharacterDelay = 0.02; // Default
    var lastCharacter = partialString.charAt(partialString.length - 2);
    var bAnimateDonkey = false;
    if (lastCharacter == '.') {
        flCharacterDelay = 0.3;
        g_typeWriterEffect.m_bDoPlaySounds = false;
    }
    else if (lastCharacter == '!') {
        flCharacterDelay = 0.4;
        g_typeWriterEffect.m_bDoPlaySounds = false;
    }
    else if (lastCharacter == '?') {
        flCharacterDelay = 0.4;
        g_typeWriterEffect.m_bDoPlaySounds = false;
    }
    else {
        bAnimateDonkey = true;
        g_typeWriterEffect.m_bDoPlaySounds = true;
    }
    g_typeWriterEffect.m_storyPanel.SetHasClass( "AnimateDonkey", bAnimateDonkey );

    if( g_typeWriterEffect.m_bSkipToEnd )
    {
        flCharacterDelay = 0;
    }

    flCharacterDelay *= g_typeWriterEffect.m_fSpeedModifier;

    if ( !g_typeWriterEffect.m_bFinished ) {
        $.Schedule(flCharacterDelay, UpdateEffects);
    }
}

function GoToNextStep() {
    if (!g_typeWriterEffect.m_bFinished) {
        // Skip and finish the animation.
        SetFinished();
        return false;
    }
    return true;
}

function OnDialogueTextChanged(parentPanelID, textPanelID, strText, strVoice, flDelay, flSoundDelay, bInstant, bFast ) {

    var dialoguePanel = $("#" + parentPanelID);
    var textLabel = dialoguePanel.FindChildInLayoutFile(textPanelID);
    g_typeWriterEffect.m_donkeyPanel = dialoguePanel.FindChildInLayoutFile("Donkey1");
    g_typeWriterEffect.m_nCharacterIndex = 0;
    g_typeWriterEffect.m_strText = strText;

    // $.Msg("OnDialogueTextChange called: ", strText);
    g_typeWriterEffect.m_panel = textLabel;
    g_typeWriterEffect.m_bFinished = false;
    g_typeWriterEffect.m_bSkipToEnd = false;
    g_typeWriterEffect.m_strVoiceSound = strVoice;
    g_typeWriterEffect.m_panel.text = "";
    g_typeWriterEffect.m_storyPanel = dialoguePanel;
    g_typeWriterEffect.m_storyPanel.GetParent().SetHasClass("Animating", true);
    g_typeWriterEffect.m_flBaseSoundDelay = flSoundDelay;
    g_typeWriterEffect.m_bDoPlaySounds = true;
    g_typeWriterEffect.m_fSpeedModifier = 1.0;
    if ( bFast ) {
        g_typeWriterEffect.m_fSpeedModifier = 0.01;
    }

    if (strText.length == 0) {
        SetFinished();
        return;
    }
    if (bInstant) {
        flDelay = 0.0;
    }
    if (bInstant) {
        GoToNextStep();
    }
    else {
        $.Schedule(flDelay, UpdateEffects);
        $.Schedule(flSoundDelay, UpdateSounds);
    }
}
