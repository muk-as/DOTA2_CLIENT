

var g_typeWriterEffect = {
    m_nCharacterIndex: 0,
    m_strText: "",
    m_panel: null,
    m_bFinished: true
};

function UpdateEffects() {
    if (!g_typeWriterEffect.m_panel || g_typeWriterEffect.m_bFinished) {
        return;
    }
                                                                                            
    g_typeWriterEffect.m_nCharacterIndex = g_typeWriterEffect.m_nCharacterIndex + 1;
    if (g_typeWriterEffect.m_nCharacterIndex >= g_typeWriterEffect.m_strText.length) {
        g_typeWriterEffect.m_bFinished = true;
    }

    var partialString = g_typeWriterEffect.m_strText.substring(0, g_typeWriterEffect.m_nCharacterIndex);
                                                               
    g_typeWriterEffect.m_panel.text = partialString;

                                                         
    var flCharacterDelay = 0.02;           
    var lastCharacter = partialString.charAt(partialString.length - 1);
    if (lastCharacter == '.') {
        flCharacterDelay = 0.2;
    }
    else if (lastCharacter == '!') {
        flCharacterDelay = 0.3;
    }
    else if (lastCharacter == '?') {
        flCharacterDelay = 0.3;
    }

    if (!g_typeWriterEffect.m_bFinished ) {
        $.Schedule( flCharacterDelay, UpdateEffects);
    }
    else {
        $.Msg("Finished effects on ", g_typeWriterEffect.m_strText);
    }
}

function GoToNextStep() {
    if (!g_typeWriterEffect.m_bFinished) {
                                         
        g_typeWriterEffect.m_bFinished = true;
        g_typeWriterEffect.m_panel.text = g_typeWriterEffect.m_strText;
        return false;
    }
    return true;
}
function OnDialogueTextChanged(dialoguePanelID, textPanelID, strText) {

    var dialoguePanel = $("#" + dialoguePanelID);
    var textLabel = dialoguePanel.FindChildInLayoutFile( textPanelID );
    g_typeWriterEffect.m_nCharacterIndex = 0;
    g_typeWriterEffect.m_strText = strText;

                                                       
    g_typeWriterEffect.m_panel = textLabel;
    g_typeWriterEffect.m_bFinished = false;
    
    UpdateEffects();
}
