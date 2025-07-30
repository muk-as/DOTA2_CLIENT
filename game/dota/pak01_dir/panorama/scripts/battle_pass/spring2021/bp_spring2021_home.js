function OnMouseOverArcana()
{				
	var arcanaScenePanel = $( '#Arcana' );
	var now = Game.Time();
	if ( now - OnMouseOverArcana.flLastTriggerTime > 5 )
	{
		OnMouseOverArcana.flLastTriggerTime = now;
		arcanaScenePanel.FireEntityInput( 'ArcanaModel', 'StartGestureOverride', 'ACT_DOTA_BATTLEPASS_IDLE');
	}
	
	var glowPanel = $( '#ArcanaGlow' );
	var infoPanel = $( '#ArcanaInfo' );

	arcanaScenePanel.ToggleClass('Hovered');
	glowPanel.ToggleClass('Hovered');
	infoPanel.ToggleClass('Hovered');
}
OnMouseOverArcana.flLastTriggerTime = 0;

function OnMouseOutArcana()
{
	var arcanaScenePanel = $( '#Arcana' );
	                                                                                               

	var glowPanel = $( '#ArcanaGlow' );
	var infoPanel = $( '#ArcanaInfo' );

	arcanaScenePanel.ToggleClass('Hovered');
	glowPanel.ToggleClass('Hovered');
	infoPanel.ToggleClass('Hovered');
}
function OnMouseOverPersona()
{
	var personaScenePanel = $( '#Persona' );
	var now = Game.Time();
	if ( now - OnMouseOverPersona.flLastTriggerTime > 8 )
	{
		OnMouseOverPersona.flLastTriggerTime = now;
		personaScenePanel.FireEntityInput( 'PersonaModel', 'StartGestureOverride', 'ACT_DOTA_BATTLEPASS_IDLE');
	}

	var glowPanel = $( '#PersonaGlow' );
	var infoPanel = $( '#PersonaInfo' );

	personaScenePanel.ToggleClass('Hovered');
	glowPanel.ToggleClass('Hovered');
	infoPanel.ToggleClass('Hovered');
}
OnMouseOverPersona.flLastTriggerTime = 0;			
function OnMouseOutPersona()
{
	var personaScenePanel = $( '#Persona' );
	                                                                                                 

	var glowPanel = $( '#PersonaGlow' );
	var infoPanel = $( '#PersonaInfo' );

	personaScenePanel.ToggleClass('Hovered');
	glowPanel.ToggleClass('Hovered');
	infoPanel.ToggleClass('Hovered');
}