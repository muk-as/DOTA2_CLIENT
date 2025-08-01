function setupTooltip()
{
	var nAbility1 = $.GetContextPanel().GetAttributeInt( "ability1", 0 );
	var nAbility2 = $.GetContextPanel().GetAttributeInt( "ability2", 0 );
	var nAbility3 = $.GetContextPanel().GetAttributeInt( "ability3", 0 );
	var nAbility4 = $.GetContextPanel().GetAttributeInt( "ability4", 0 );

	$( '#TopBarADSpell1' ).abilityid = nAbility1;
	$( '#TopBarADSpell2' ).abilityid = nAbility2;
	$( '#TopBarADSpell3' ).abilityid = nAbility3;
	$( '#TopBarADSpell4' ).abilityid = nAbility4;
}