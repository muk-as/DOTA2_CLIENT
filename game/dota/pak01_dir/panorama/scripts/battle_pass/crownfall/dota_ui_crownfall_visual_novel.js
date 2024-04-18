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

    g_typeWriterEffect.m_nCharacterIndex = g_typeWriterEffect.m_nCharacterIndex + nCharIncrement;
    if (g_typeWriterEffect.m_nCharacterIndex >= g_typeWriterEffect.m_strText.length) {
        SetFinished();
        return;
    }

    var partialString = g_typeWriterEffect.m_strText.substring(0, g_typeWriterEffect.m_nCharacterIndex);
    var endString = g_typeWriterEffect.m_strText.substring(g_typeWriterEffect.m_nCharacterIndex);

    //$.Msg(partialString, " / ", g_typeWriterEffect.m_strText)
    g_typeWriterEffect.m_panel.text = partialString + "<child id='Cursor' nobreak='1'><span class='HideText'>" + endString + "</span>";

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
