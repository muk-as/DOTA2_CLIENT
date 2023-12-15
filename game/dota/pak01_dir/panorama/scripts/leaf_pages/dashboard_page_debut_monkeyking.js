$.Schedule( 0.0, function()
{
    $.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#Model' ), function() { $.DispatchEvent( 'PlaySoundEffect', 'monkeyking_debut_takeover_stinger' ); } );
});