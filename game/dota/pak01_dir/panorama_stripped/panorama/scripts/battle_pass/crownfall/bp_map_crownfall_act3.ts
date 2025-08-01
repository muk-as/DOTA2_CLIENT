/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />

                                                         
function MapInit()
{
}

                                     
                   
                                     

                                                                                                                     
function GetForegroundPanel() : Panel_t
{
    return $.GetContextPanel().GetParent().FindChildInLayoutFile( "MapForegroundLayers" );
}

function IsNodeUnlocked( nodeID : number ): boolean
{
    let hPanel = $.GetContextPanel().GetParent().FindChildInLayoutFile("Map").FindChild( "Node" + nodeID ) as Panel_t;
    if ( hPanel )
    {
        return hPanel.BHasClass( "Node__Completed" );
    }

    return false;
}

function GetProp( sName: string, bForeground: boolean = false ) : Panel_t
{
    if ( bForeground )
    {
        return GetForegroundPanel().FindChildTraverse( sName ) as Panel_t;
    }
    else
    {
        return $( "#" + sName )! as Panel_t;
    }
}

function GetAnimatedImage( sName: string, bForeground: boolean = false ) : AnimatedImageStrip_t
{
    return GetProp( sName, bForeground ) as AnimatedImageStrip_t;
}

function RandomFloat( lbound: number, ubound: number ): number
{
    return Math.min( ubound - lbound, Math.random() * ( ubound - lbound ) ) + lbound;
}

function RandomInt( lbound: number, ubound: number ): number
{
    return Math.floor( RandomFloat( lbound, ubound ) );
}

                                     
                          
                                     
function OnPropPlay( sPropName : string, bForeground : boolean, bAutoplay : boolean )
{
    if ( sPropName == "WolfAppear" )
    {
                            
        let hPropPanel = GetProp( sPropName, bForeground );
        var x = 2450 + RandomInt( -300, 300 );
        var y = 1450 + RandomInt( -200, 200 );
        hPropPanel.SetPositionInPixels( x, y, 0 );
    }
    else if ( sPropName.startsWith( "Snow" ) )
    {
        let hPropPanel = GetProp( sPropName, bForeground );
        var x = 2450 + RandomInt( -200, 200 );
        var y = 1450 + RandomInt( -150, 150 );
        hPropPanel.SetPositionInPixels( x, y, 0 );

        let hTopLayerPanel : AnimatedImageStrip_t = GetAnimatedImage( "TopLayer" + sPropName, bForeground );
        hTopLayerPanel.SetPositionInPixels( x, y, 0 );
        hTopLayerPanel.StartAnimating();
    }
}

                                     
                                
                                     
function OnNodeComplete( unNodeId:number )
{
    $.Msg( "OnNodeComplete: " + unNodeId );

    if ( unNodeId == 26 )
    {
        $.DispatchEvent( 'DotaOverworldMapProp_PlayPanelID', 'ZaugDragon', true );
        GetAnimatedImage( 'ZaugDragon', true ).AddClass( 'FadeDragon' );
    }
}
