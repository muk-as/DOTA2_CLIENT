function updateMinimapPreview()
{
	var minimapPanel = $( "#MinimapContainer" );
	if ( !minimapPanel )
	    return;

	minimapPanel.SetHasClass( "PrimaryUseHeroIconsWithArrow", $("#PrimaryMinimapSetting").intValue == 0 );
	minimapPanel.SetHasClass( "PrimaryArrowPlayerColors", $("#PrimaryMinimapSetting").intValue == 1 );
	minimapPanel.SetHasClass( "PrimaryArrowTeamColors", $("#PrimaryMinimapSetting").intValue == 2 );
	minimapPanel.SetHasClass( "PrimaryUseHeroIconsOnly", $("#PrimaryMinimapSetting").intValue == 3 );
	minimapPanel.SetHasClass( "PrimaryUseHeroNames", $("#PrimaryMinimapSetting").intValue == 4 );
	minimapPanel.SetHasClass( "SecondaryUseHeroIconsWithArrow", $("#SecondaryMinimapSetting").intValue == 0 );
	minimapPanel.SetHasClass( "SecondaryArrowPlayerColors", $("#SecondaryMinimapSetting").intValue == 1 );
	minimapPanel.SetHasClass( "SecondaryArrowTeamColors", $("#SecondaryMinimapSetting").intValue == 2 );
	minimapPanel.SetHasClass( "SecondaryUseHeroIconsOnly", $("#SecondaryMinimapSetting").intValue == 3 );
	minimapPanel.SetHasClass( "SecondaryUseHeroNames", $("#SecondaryMinimapSetting").intValue == 4 );
	minimapPanel.SetHasClass( "NoBackground", $("#MinimapBackgroundSetting").intValue == 0 );
	minimapPanel.SetHasClass( "SimpleBackground", $("#MinimapBackgroundSetting").intValue == 1 );
	minimapPanel.SetHasClass( "ExtraLargeMinimap", $("#dota_hud_extra_large_minimap").checked );

	var heroSizePanel = $( "#dota_minimap_hero_size" );
	var iconValue = heroSizePanel.value;
	var minScale = 0.22;
	var maxScale = .92;
	var iconScale = ( ( iconValue - heroSizePanel.min )  / ( heroSizePanel.max - heroSizePanel.min ) ) * ( maxScale - minScale ) + minScale;

	var heroRegEx = /Hero\d+$/;
	var heroArrowRegEx = /Hero\d+Arrow$/;

	for ( var i = 0; i < minimapPanel.GetChildCount(); ++i )
	{
		var childPanel = minimapPanel.GetChild( i );
		if (heroRegEx.test(childPanel.id) ) {
			childPanel.style.preTransformScale2d = iconScale;
		} else if (heroArrowRegEx.test(childPanel.id)) {
			childPanel.style.preTransformScale2d = iconScale * 2.2;
		}
	}
}

