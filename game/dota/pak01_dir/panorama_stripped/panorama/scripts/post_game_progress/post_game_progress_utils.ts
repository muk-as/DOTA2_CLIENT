/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />

                                     
const HERO_BADGE_XP_TYPE_MATCH_FINISHED = 0;
const HERO_BADGE_XP_TYPE_MATCH_WON = 1;
const HERO_BADGE_XP_TYPE_CHALLENGE_COMPLETED = 2;
const HERO_BADGE_XP_TYPE_RELIC_LEVELS = 3;

                                          
const HERO_BADGE_LEVEL_REWARD_TIER = 0;
const HERO_BADGE_LEVEL_REWARD_CHAT_WHEEL = 1;
const HERO_BADGE_LEVEL_REWARD_CURRENCY = 2;

                                               
const k_unMaxHeroRewardLevel = 30;

                                                                               
                              
                                                                               

function CreateProgressScreen( panelID: string ): Panel_t
{
	const screenPanel = $.CreatePanel( 'Panel', $( '#ProgressScreens' ), panelID );
	screenPanel.AddClass( 'ProgressScreen' );
	return screenPanel;
}

function ShowProgressScreen( screenPanel: Panel_t ): void
{
	const screensContainer = $( '#ProgressScreens' )!;
	for ( let i = 0; i < screensContainer.GetChildCount(); ++i )
	{
		const otherScreenPanel = screensContainer.GetChild( i );
		otherScreenPanel.SetHasClass( 'ShowScreen', otherScreenPanel == screenPanel );
	}
}

function StartNewScreen( panelID: string ): Panel_t
{
	const screenPanel = CreateProgressScreen( panelID );
	ShowProgressScreen( screenPanel );
	return screenPanel;
}


function GetScreenLinksContainer(): Panel_t
{
	                                                                                                        
	return $.GetContextPanel().GetParent().FindPanelInThisOrParentLayoutFile( 'ProgressScreenButtons' );
}

                          
function ResetScreens(): void
{
	$( '#ProgressScreens' )!.RemoveAndDeleteChildren();
	GetScreenLinksContainer().RemoveAndDeleteChildren();
}

function AddScreenLink( screenPanel: Panel_t, linkClass: string, tooltipText: string, activateFunction?: () => void ): Panel_t
{
	const link = $.CreatePanel( 'Button', GetScreenLinksContainer(), '' );
	link.AddClass( 'ProgressScreenButton' );
	link.AddClass( linkClass );

	link.SetPanelEvent( 'onactivate', function ()
	{
		$.DispatchEvent( 'DOTAPostGameProgressShowSummary', screenPanel );
		ShowProgressScreen( screenPanel );
		if ( activateFunction )
		{
			activateFunction();
		}
	} );

	link.SetPanelEvent( 'onmouseover', function () { $.DispatchEvent( 'UIShowTextTooltip', link, tooltipText ); } );
	link.SetPanelEvent( 'onmouseout', function () { $.DispatchEvent( 'UIHideTextTooltip', link ); } );

	return link;
}

class AddScreenLinkAction extends RunFunctionAction
{
	constructor( screenPanel: Panel_t, linkClass: string, tooltipText: string, activateFunction?: () => void )
	{
		super( function () { AddScreenLink( screenPanel, linkClass, tooltipText, activateFunction ); } );
	}
}


                                                                               
                         
                                                                               

let g_bSkipAheadActions = false;

function IsSkippingAhead(): boolean
{
	return g_bSkipAheadActions;
}

function SetSkippingAhead( bSkipAhead: boolean )
{
	if ( g_bSkipAheadActions == bSkipAhead )
		return;

	if ( bSkipAhead )
	{
		$.DispatchEvent( "PostGameProgressSkippingAhead" );
	}
	$.GetContextPanel().SetHasClass( 'SkippingAhead', bSkipAhead );
	g_bSkipAheadActions = bSkipAhead;

	if ( bSkipAhead )
	{
		PlayUISoundScript( "ui_generic_button_click" );
	}
}
function StopSkippingAhead(): void { SetSkippingAhead( false ); }
function StartSkippingAhead(): void { SetSkippingAhead( true ); }

                                                                               
                            
   
                                                                           
                                                                               

                                                           
class StopSkippingAheadAction extends RunFunctionAction
{
	constructor()
	{
		super( () => StopSkippingAhead() );
	}
}


                                                                               
                    
   
                                                                         
                                                                               
                                                                      
                                                                               
class SkippableAction extends BaseAction
{
	innerAction: ISequenceAction;

	constructor( actionToMaybeSkip: ISequenceAction )
	{
		super();
		this.innerAction = actionToMaybeSkip;
	}

	start(): void
	{
		this.innerAction.start();
	}

	update(): boolean
	{
		return this.innerAction.update() && !IsSkippingAhead();
	}

	finish(): void
	{
		this.innerAction.finish();
	}
}



                                                                                                   
class RunSkippableStaggeredActions extends RunParallelActions
{
	staggerSeconds: number;

	constructor( staggerSeconds: number )
	{
		super();
		this.staggerSeconds = staggerSeconds;
	}

	start(): void
	{
		const inputActions = this.actions;
		this.actions = [];

		for ( let i = 0; i < inputActions.length; ++i )
		{
			const delay = i * this.staggerSeconds;
			if ( delay > 0 )
			{
				const seq = new RunSequentialActions();
				seq.actions.push( new SkippableAction( new WaitAction( delay ) ) );
				seq.actions.push( inputActions[i] );
				this.actions.push( seq );
			}
			else
			{
				this.actions.push( inputActions[i] );
			}
		}

		super.start();
	}
}


                                                                               
                            
   
                                                                              
                                                                              
                                                                             
                                                                           
                                                                               
class OptionalSkippableAction extends BaseAction
{
	innerAction: ISequenceAction;
	innerActionStarted: boolean = false;

	constructor( actionToMaybeSkip: ISequenceAction )
	{
		super();
		this.innerAction = actionToMaybeSkip;
	}

	start(): void
	{
		this.innerActionStarted = false;

		if ( !IsSkippingAhead() )
		{
			this.innerAction.start();
			this.innerActionStarted = true;
		}
	}

	update(): boolean
	{
		if ( this.innerActionStarted )
			return this.innerAction.update() && !IsSkippingAhead();

		if ( IsSkippingAhead() )
			return false;

		this.innerAction.start();
		this.innerActionStarted = true;

		return this.innerAction.update();
	};

	finish(): void
	{
		if ( this.innerActionStarted )
		{
			this.innerAction.finish();
		}
	}
}

function GetXPIncreaseAnimationDuration( xpAmount: number ): number
{
	return RemapValClamped( xpAmount, 0, 500, 0.3, 0.6 );
}
