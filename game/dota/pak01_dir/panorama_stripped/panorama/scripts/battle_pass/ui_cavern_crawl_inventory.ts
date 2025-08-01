/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />

var OnItemAdded = function ( id: string, count: number ): void
{
	const seq = new RunSequentialActions();

	const panel = $('#' + id)!;

	seq.actions.push( new AddClassAction( panel, 'AddingItem' ) );
	seq.actions.push( new RemoveClassAction( panel, 'Empty' ) );

	seq.actions.push( new WaitAction( 0.5 ) );

	seq.actions.push( new RemoveClassAction( panel, 'AddingItem' ) );
	seq.actions.push( new RunFunctionAction( function ()
	{
		panel.SetDialogVariableInt( "count", count );
	} ) );

	RunSingleAction( seq );
}

var OnItemRemoved = function ( id: string, count: number )
{
    const seq = new RunSequentialActions();

    const panel = $('#' + id)!;

    seq.actions.push( new AddClassAction( panel, 'RemovingItem' ) );

    seq.actions.push( new WaitAction( 0.5 ) );

    seq.actions.push( new RemoveClassAction( panel, 'RemovingItem' ) );

    seq.actions.push(new RunFunctionAction(function ()
    {
    	panel.SetDialogVariableInt( "count", count );
    	if ( count == 0 )
    	{
    		panel.AddClass( "Empty" );
    	}
    }));

    RunSingleAction(seq);
}
