const k_TimePerTip = 10;
const k_NumTips = 4;

let g_hScheduledShowQuestionnaire = null;
let g_hScheduledSkipWizardTip = null;

function CancelSkipWizardTip()
{
	if( g_hScheduledSkipWizardTip !== null )
	{
		$.CancelScheduled( g_hScheduledSkipWizardTip );
		g_hScheduledSkipWizardTip = null;
	}
}

function SkipWizardTip()
{
	$.DispatchEvent('DOTAHideHelpTip', true);
}

function ScheduleSkipWizardTip()
{
	CancelSkipWizardTip();
	g_hScheduledSkipWizardTip = $.Schedule( k_TimePerTip, function OnSkipWizardTip() {
		g_hScheduledSkipWizardTip = null;
		SkipWizardTip();
	} );
}

function CancelShowQuestionnaire()
{
	if( g_hScheduledShowQuestionnaire !== null )
	{
		$.CancelScheduled( g_hScheduledShowQuestionnaire );
		g_hScheduledShowQuestionnaire = null;
	}
}

function ShowQuestionnaire()
{
	CancelSkipWizardTip();
	CancelShowQuestionnaire();
	
	if( !$('#Questionnaire').BHasClass('Show') )
	{
		$('#WelcomeToDota').AddClass('Hide');
		$('#Questionnaire').AddClass('Show');
	}
}

function ScheduleShowQuestionnaire()
{
	CancelShowQuestionnaire();
	g_hScheduledShowQuestionnaire = $.Schedule( k_TimePerTip * (k_NumTips+1), function OnShowQuestionnaire() 
	{
		g_hScheduledShowQuestionnaire = null;
		ShowQuestionnaire();
	} );
}

$.RegisterForUnhandledEvent( 'DOTATipDismissed', function ( tipName ) 
{
	if( tipName == 'dota_tip_new_user_intro_wizard_speech_4')
	{
		ShowQuestionnaire();
	}
	else
	{
		ScheduleSkipWizardTip();
	}
} );

function OnLoad()
{
	$('#Background').AddClass('Shown');
	$('#WelcomeToDota').RemoveClass('Hidden');
	
	ScheduleSkipWizardTip();
	ScheduleShowQuestionnaire();
}