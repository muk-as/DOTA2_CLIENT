function mysteryBoxMouseOver()
{
	                                 
	var courierScenePanel = $("#Model");
	var MainPanel = $("#MainContainer");
	
	courierScenePanel.FireEntityInput( "selection", "Start", '' );
	courierScenePanel.SetHasClass( "Hovered", true );
	MainPanel.SetHasClass( "Hovered", true );
}

function mysteryBoxMouseOut()
{
	                                
	var courierScenePanel = $("#Model");
	var MainPanel = $("#MainContainer");
	courierScenePanel.FireEntityInput( "selection", "StopPlayEndCap", '' );
	courierScenePanel.SetHasClass( "Hovered", false );
	MainPanel.SetHasClass( "Hovered", false );
}

function mysteryBoxActivate()
{
}