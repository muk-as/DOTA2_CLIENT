"use strict";

var g_typeWriterEffect = {
    m_nCharacterIndex: 0,
    m_strText: "",
    m_panel: null,
    m_bFinished: true,
    m_strVoiceSound: "",
    m_parentPanel: null,
    m_flBaseSoundDelay: 0,
    m_bDoPlaySounds: false,
    m_bSkipToEnd: false,
    m_flCharacterDelay: 0.1,
    m_flCharDelayMult: 1.0
};

function SkipToEnd() {
    if (!g_typeWriterEffect.m_bFinished) {
        g_typeWriterEffect.m_bSkipToEnd = true
        return true;
    }
    return false;
}

function SetFinished() {
    g_typeWriterEffect.m_bFinished = true;
    if (g_typeWriterEffect.m_strText.length != 0) {
        g_typeWriterEffect.m_panel.text = CleanEscapes( g_typeWriterEffect.m_strText );// + "<child id='Cursor' replacechar=' '/>";
    }
    g_typeWriterEffect.m_parentPanel.GetParent().SetHasClass("Animating", false);
    g_typeWriterEffect.m_parentPanel.SetHasClass( "AnimateCursor", false );
    var strText = g_typeWriterEffect.m_strText;
    if ( strText.length == 1 && strText.charAt( 0 ) === ' ' )
        strText = "";
    $.DispatchEvent( 'DOTATypeWriterTextComplete', g_typeWriterEffect.m_parentPanel, strText.length > 0 );
    //$.Msg("Finished effects on ", g_typeWriterEffect.m_strText);
}

function UpdateSounds() {
    if ( g_typeWriterEffect.m_bDoPlaySounds && g_typeWriterEffect.m_strVoiceSound != "" ) {
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

function CleanEscapes( strInput ) {
    
    strInput = strInput.replace( /\^[+-]?[0-9]+\.?[0-9]*/g, "");
    strInput = strInput.replace( /\^([\!|\?|\.])/g, "$1" );
    strInput = strInput.replace("\\", "");
    return strInput;
}

function CleanInlinePanels( strInput )
{
    strInput = strInput.replace( /<img.*\/>/g, "X" ); // hero icons etc
    strInput = strInput.replace( /<child.*\/>/g, "X" ); // emoticons etc
    return strInput;
}

function AdvanceAndEatHTML( strInput, nIndex )
{
    var chCur = strInput.charAt( nIndex );
    const nSafeIndex = nIndex + 1;
    var bInTag = false;
    if ( chCur === "<" )
    {
        // Html tag. Skip characters until we get to the end of the tag.
        while ( nIndex < strInput.length - 1 )
        {
            nIndex++;
            chCur = strInput.charAt( nIndex );
            if ( chCur === ">" )
            {
                return nIndex + 1;
            }
        }
    }

    return nSafeIndex;
}

function FindEndOfMaybeFloatingPointNumber(strInput, nStartIndex)
{
    var m = strInput.substring(nStartIndex).match("^[+-]?[0-9]+\.?[0-9]*");
    if (m === null)
        return nStartIndex;
    return m[0].length + nStartIndex;
}

function GetNextCharInfo( strInput, nSplitIndex, flOffset )
{
    var nIndex = nSplitIndex - 1;
    const nLength = strInput.length;
    var bEscaped = false;
    var bAnimateCursor = true;
    var bPlaySounds = true;
    var flDelayMult = 1.0;

    var chCur = strInput.charAt( nIndex );
    if ( chCur === "\\" )
    {
        return GetNextCharInfo( strInput, nSplitIndex + 1, flOffset );
    }
    else if ( nIndex < nLength - 1 && chCur === "^" )
    {
        var chNext = strInput.charAt( nIndex + 1 )
        if ( chNext === "?"
            || chNext === "!"
            || chNext === "." )
        {
            bEscaped = true;
            nIndex++;
            chCur = chNext;
        }
        else if ( ( chNext >= '0' && chNext <= '9' ) || chNext === '-' || chNext === '+' )
        {
            var flMult = 1.0;
            const nStart = nIndex+1;
            var nEnd = FindEndOfMaybeFloatingPointNumber( strInput, nStart );
            flMult = parseFloat( strInput.substring( nStart, nEnd ) );
            if ( chNext === '-' || chNext === '+' )
                flOffset += flMult;
            else
                g_typeWriterEffect.m_flCharDelayMult = flMult;
            return GetNextCharInfo( strInput, nEnd, flOffset );
        }
    }

    if ( !bEscaped )
    {
        if ( chCur === "." ||
			 chCur === "。" || chCur === "…" )	// sChinese
        {
            bAnimateCursor = false
            bPlaySounds = false;
            flDelayMult *= 15;
        }
        else if ( chCur === "!" || chCur === "?" ||
				  chCur === "！" || chCur === "？" )	// sChinese
        {
            bAnimateCursor = false
            bPlaySounds = false;
            flDelayMult *= 20;
        }
    }
    nSplitIndex = nIndex + 1;
    flDelayMult *= g_typeWriterEffect.m_flCharDelayMult;
    return { chCur, nSplitIndex, bAnimateCursor, bPlaySounds, flDelayMult, flOffset };
}

function UpdateEffects() {
    if (!g_typeWriterEffect.m_panel || g_typeWriterEffect.m_bFinished) {
        return;
    }

    var nCharactersLeft = g_typeWriterEffect.m_strText.length - g_typeWriterEffect.m_nCharacterIndex;
    //$.Msg(g_typeWriterEffect.m_nCharacterIndex, "/", g_typeWriterEffect.m_strText.length);

    var nCharIncrement = 1;
    if( g_typeWriterEffect.m_bSkipToEnd )
    {
        // Only skip if we're not almost done. We want to process the last few characters, so that the cursor
        // updates correctly.
        if (nCharactersLeft > 5) {
            nCharIncrement = 5;
        }
    }

    var charData = {
        chCur: "",
        nSplitIndex: -1,
        bAnimateCursor: true,
        bPlaySounds: true,
        flDelayMult: 1.0,
        flOffset: 0.0
    };
    for ( var i = 0; i < nCharIncrement; ++i )
    {
        g_typeWriterEffect.m_nCharacterIndex = AdvanceAndEatHTML( g_typeWriterEffect.m_strText, g_typeWriterEffect.m_nCharacterIndex );
        charData = GetNextCharInfo( g_typeWriterEffect.m_strText, g_typeWriterEffect.m_nCharacterIndex, 0 );
    }

    g_typeWriterEffect.m_nCharacterIndex = charData.nSplitIndex;

    if ( g_typeWriterEffect.m_nCharacterIndex >= g_typeWriterEffect.m_strText.length ) {
        SetFinished();
        return;
    }

    var partialString = g_typeWriterEffect.m_strText.substring( 0, g_typeWriterEffect.m_nCharacterIndex );
    var endString = g_typeWriterEffect.m_strText.substring( g_typeWriterEffect.m_nCharacterIndex );

    // Putting all spaces in tags prevents word wrapping from changing as the text is typed out.
    // It doesn't seem to matter what kind of tags are used.
    {
        var fixed = "";

        // Be careful not to insert tags inside existing tags, such as the <img> tags used for emoji.
        var inTags = 0;

        for ( let i = 0; i < endString.length; i++ )
        {
            var ch = endString[i];

            if ( ch === "<" )
            {
                inTags += 1;
            }
            else if ( ch === ">" )
            {
                inTags -= 1;
            }

            if ( ch === " " && inTags === 0 )
            {
                fixed += "<b> </b>";
            }
            else
            {
                fixed += ch;
            }
        }

        endString = fixed;
    }

    // We want the cursor to act like the next character in the word so that it word breaks or wraps correctly.
    var replaceCharAttribute = "";
    if (endString.length > 0 )
    {
        var endStartChar = endString.charAt(0);
        if (endStartChar == "'") {
            replaceCharAttribute = ' replacechar="' + endStartChar + '"';
        }
        else {
            replaceCharAttribute = " replacechar='" + endStartChar + "'";
        }
        //$.Msg(replaceCharAttribute, partialString);
    }

    var combinedString = partialString + "<child id='Cursor'" + replaceCharAttribute + "/>";
    if (endString.length > 0) {
        // Now append the hidden string.
        endString = endString.replaceAll("class=\"", "class=\"HideText ");
        combinedString = combinedString + "<span class='HideText'>" + endString + "</span>";
    }

    // Handle escapes
    combinedString = CleanEscapes( combinedString );

    //$.Msg("Before:\t" + combinedString);
    var fixedString = FixUpHtmlTags(combinedString);
    //$.Msg("After:\t" + fixedString);
    g_typeWriterEffect.m_panel.text = fixedString;

    // Vary the character delay depending on punctuation.
    var flCharacterDelay = g_typeWriterEffect.m_flCharacterDelay * charData.flDelayMult;
    g_typeWriterEffect.m_bDoPlaySounds = charData.bPlaySounds;
    g_typeWriterEffect.m_parentPanel.SetHasClass( "AnimateCursor", charData.bAnimateCursor );

    if( g_typeWriterEffect.m_bSkipToEnd )
    {
        flCharacterDelay = 0;
    }

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

function OnTextChanged(parentPanel, strText, strVoice, flDelay, flSoundDelay, bInstant, flCharacterDelay, flVODuration ) {

    var textLabel = parentPanel.FindChildInLayoutFile("TypewriterLabel");
    g_typeWriterEffect.m_nCharacterIndex = 0;
    // Adding a space at the end keeps word-wrap stable for the last word of the sentence.
    g_typeWriterEffect.m_strText = strText + " ";

    // $.Msg("OnTextChanged called: ", strText);
    g_typeWriterEffect.m_panel = textLabel;
    g_typeWriterEffect.m_bFinished = false;
    g_typeWriterEffect.m_bSkipToEnd = false;
    g_typeWriterEffect.m_strVoiceSound = strVoice;
    g_typeWriterEffect.m_panel.text = "";
    g_typeWriterEffect.m_parentPanel = parentPanel;
    g_typeWriterEffect.m_parentPanel.GetParent().SetHasClass("Animating", true);
    g_typeWriterEffect.m_flBaseSoundDelay = flSoundDelay;
    g_typeWriterEffect.m_bDoPlaySounds = true;
    g_typeWriterEffect.m_flCharacterDelay = flCharacterDelay;

    if (strText.length == 0) {
        SetFinished();
        return;
    }
    if (bInstant) {
        flDelay = 0.0;
        GoToNextStep();
    }
    else {
        // Calculate needed duration
        if ( flVODuration > 0 )
        {
            var charData = {
                chCur: "",
                nSplitIndex: -1,
                bAnimateCursor: true,
                bPlaySounds: true,
                flDelayMult: 1.0,
                flOffset: 0.0
            };
            var nIndex = 0;
            var flTotalRelative = 0.0;
            const strInput = g_typeWriterEffect.m_strText;
            const flOldMult = g_typeWriterEffect.m_flCharDelayMult;
            while ( nIndex < strInput.length )
            {
                nIndex = AdvanceAndEatHTML( strInput, nIndex );
                charData = GetNextCharInfo( strInput, nIndex, charData.flOffset );
                nIndex = charData.nSplitIndex;
                flTotalRelative += charData.flDelayMult;
            }
            g_typeWriterEffect.m_flCharacterDelay = ( flVODuration + charData.flOffset - flDelay ) / flTotalRelative;
            if ( g_typeWriterEffect.m_flCharacterDelay < 0.01 )
                g_typeWriterEffect.m_flCharacterDelay = 0.01;
            g_typeWriterEffect.m_flCharDelayMult = flOldMult;
            //$.Msg( "Total chars: ", strInput.length, ". Relative: ", flTotalRelative, ". VO: ", flVODuration, ". Entrance: ", flDelay, " so calc: ", g_typeWriterEffect.m_flCharacterDelay );
        }

        $.Schedule(flDelay, UpdateEffects);
        $.Schedule(flSoundDelay, UpdateSounds);
    }
}
