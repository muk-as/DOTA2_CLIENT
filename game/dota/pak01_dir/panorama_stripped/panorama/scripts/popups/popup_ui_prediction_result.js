var numCorrect=0;
var numIncorrect=0;

function ClearState()
{
	$.GetContextPanel().RemoveClass('OriginalCorrect_1');
	$.GetContextPanel().RemoveClass('OriginalCorrect_2');
	$.GetContextPanel().RemoveClass('OriginalIncorrect_1');

	$.GetContextPanel().RemoveClass('NewCorrect_1');
	$.GetContextPanel().RemoveClass('NewCorrect_2');
	$.GetContextPanel().RemoveClass('NewCorrect_3');
	$.GetContextPanel().RemoveClass('NewIncorrect_1');
	$.GetContextPanel().RemoveClass('NewIncorrect_2');

	numCorrect = 0;
	numIncorrect = 0;
}

function Correct()
{
	numCorrect++;
	$.GetContextPanel().AddClass('NewCorrect_' + numCorrect );
	$.DispatchEventAsync( 0.0, 'PlaySoundEffect', 'ui.crafting_gem_applied' );
}

function Incorrect()
{
	numIncorrect++;
	$.GetContextPanel().AddClass('NewIncorrect_' + numIncorrect );
	$.DispatchEventAsync( 0.0, 'PlaySoundEffect', 'ui.crafting_gem_applied' );
}

function onLoad()
{
	$.DispatchEventAsync( 1.0, 'PlaySoundEffect', 'ui.crafting_gem_applied' );
}