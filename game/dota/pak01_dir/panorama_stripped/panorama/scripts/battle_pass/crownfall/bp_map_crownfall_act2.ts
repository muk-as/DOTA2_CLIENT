/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />

                                                         
function MapInit()
{
    if( g_PuffballTimer == 0 )
    {
        UpdatePuffballs();
    }
}

                                     
                   
                                     

                                                                                                                     
function GetForegroundPanel() : Panel_t
{
    return $.GetContextPanel().GetParent().FindChildInLayoutFile( "MapForegroundLayers" );
}

function GetProp( sName: string, bForeground: boolean = false ): Panel_t
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

function GetAnimatedImage( sName: string, bForeground: boolean = false ): AnimatedImageStrip_t
{
    return GetProp( sName, bForeground ) as AnimatedImageStrip_t;
}

                                     
                          
                                     
function OnPropPlay( sPropName: string, bForeground: boolean, bAutoplay: boolean )
{
}

                                     
                                
                                     
function OnNodeComplete( unNodeId:number )
{
    $.Msg( "OnNodeComplete: " + unNodeId );
}

function HideCometUntilImpact(unNodeId: number) {
    $.Msg("HideCometUntilImpact");
    $.GetContextPanel().SetHasClass("HideCometCrater", true);
}

                                     
                 
                                     

let g_PuffballTimer : number = 0;

function UpdatePuffballs(  )
{
                                    
    var dashboard = $.GetContextPanel().FindAncestor( "Dashboard" );
    let vecPuffballs = dashboard.FindChildrenWithClassTraverse( "SnapfirePuffball" );
    let nVisible1 = Math.floor(Math.random()*vecPuffballs.length);
    let nVisible2 = Math.floor(Math.random()*vecPuffballs.length);

    for( let pInd = 0; pInd < vecPuffballs.length; ++pInd )
    {
        if( pInd == nVisible1 )
        {
                                                  
        }
        vecPuffballs[pInd].SetHasClass( "PuffballVisible", pInd == nVisible1 || pInd == nVisible2 );
    }

    g_PuffballTimer = $.Schedule( 25, function ()
    {
        UpdatePuffballs( );
    } );    
}

function FirebugActivate()
{
    if( g_FirebugSlowApproach == true )
    {
       let hFirebugClickable =  $.GetContextPanel().GetParent().FindChildrenWithClassTraverse("SnapfireFirebug")[0];
       if( hFirebugClickable != null && hFirebugClickable != undefined )
       {
           hFirebugClickable.AddClass('Squished')
           $.Schedule( 5, function () 
            {
                if( hFirebugClickable ) 
                {
                    hFirebugClickable.RemoveClass('Squished') 
                }
            }  )    
            $.DispatchEvent('DotaOverworldMapProp_Play', hFirebugClickable, true); 
       }
    }
    else
    {
       FirebugFly();
    }

}


let g_FirebugTimer1 : number = 0;
let g_FirebugTimer2 : number = 0;

                                                               
let g_flFirebugExhaustion : number = 1;

type Vec3 =
{
    x: number,y:number,z:number
}

let g_vFirebugStartPosition : Vec3 = {x:0,y:0,z:0}

function Vec2Str( v : Vec3)
{
    return "["+v.x+ ", "+v.y+", "+v.z+"]";
}

let g_FirebugCursorHistory : Array<Vec3> = new Array<Vec3>();
let g_FirebugSlowApproach : boolean = false;

function FirebugBorderMouseOver()
{ 
    if( g_FirebugTimer1 != null && g_FirebugTimer1 > 0 )
    {
        $.CancelScheduled(g_FirebugTimer1)
    }
    FirebugBorderUpdate()
}

function GetMaxDist( arrCursorHistory : Array<Vec3>, v : Vec3 ) 
{
    var flMaxDist : number = 0;
    for( var vCur of arrCursorHistory )
    {
        flMaxDist = Math.max( Game.Length2D(v,vCur), flMaxDist );
    }
    return flMaxDist;
}

function FirebugBorderUpdate()
{
    let v2Cursor = GameUI.GetCursorPosition();
    var vCursor : Vec3 = { x:v2Cursor[0], y:v2Cursor[1], z:0} 

    if( g_FirebugCursorHistory.length > 10 )
    {
        g_FirebugCursorHistory.shift();
    }

    g_FirebugCursorHistory.push( vCursor )

    let hMap = $.GetContextPanel().FindAncestor("Map");
    if( hMap == null )
    {
        return;
    }
    let hFirebug = $.GetContextPanel().FindChildTraverse( "FirebugCrawlingState" )
    if( hFirebug == null || hFirebug == undefined )
    {
        return;
    }
    
    let flMapScale = 1.0;
    if( hMap.BHasClass("ZoomedOut"))
    {
        flMapScale = 0.45;
    }

    let vTemp = hFirebug.GetPositionWithinWindow();
    vTemp.x += hFirebug.actuallayoutwidth*flMapScale/2;
    vTemp.y += hFirebug.actuallayoutheight*flMapScale/2;
    var vFirebugPos : Vec3 = { x:vTemp.x, y:vTemp.y, z:0};

    let flMaxDist = GetMaxDist( g_FirebugCursorHistory, vFirebugPos ) 
    let flSlowThreshold = g_flFirebugExhaustion*flMapScale*hFirebug.actuallayoutwidth;
    g_FirebugSlowApproach = g_FirebugCursorHistory.length > 9 && flMaxDist < flSlowThreshold;
    let flDistToFirebug = Game.Length2D( vCursor, vFirebugPos )
                                                                                              

    if( flDistToFirebug < 500 )
    {
        g_FirebugTimer1 = $.Schedule( 0.15, function ()
        {
            FirebugBorderUpdate();
        } );
    }
    else
    {
        g_FirebugCursorHistory = new Array<Vec3>();
    }
}

function FirebugFly()
{
    if( !g_FirebugSlowApproach )
    {

        let hMap = $.GetContextPanel().FindAncestor("Map");
        if( hMap == null )
        {
            return;
        }
        let hFirebug = $.GetContextPanel().FindChildTraverse( "FirebugCrawlingState" )
        if( hFirebug == null || hFirebug == undefined )
        {
            return;
        }
        
        let flMapScale = 1.0;
        if( hMap.BHasClass("ZoomedOut"))
        {
            flMapScale = 0.45;
        }

        let hFirebugClickable =  $.GetContextPanel().GetParent().FindChildrenWithClassTraverse("SnapfireFirebug")[0];
        hFirebugClickable.AddClass('Flying')
        
        let vTemp = hFirebug.GetPositionWithinWindow();
        vTemp.x += hFirebug.actuallayoutwidth*flMapScale/2;
        vTemp.y += hFirebug.actuallayoutheight*flMapScale/2;
        var vFirebugPos : Vec3 = { x:vTemp.x, y:vTemp.y, z:0};

        if( g_vFirebugStartPosition.x == 0 && g_vFirebugStartPosition.y == 0 )
        {
            g_vFirebugStartPosition = vFirebugPos;
        }

        let vCursor = GameUI.GetCursorPosition();
                                                             
                                                                          

        let flDistMult = 70.0;
        let flDeltaX = flDistMult * ( vFirebugPos.x - vCursor[0] )
        let flDeltaY = flDistMult * ( vFirebugPos.y - vCursor[1] )
        let vDelta = Game.Normalized( {x:flDeltaX,y:flDeltaY,z:0} )

        let flDistFromStart = Game.Length2D( g_vFirebugStartPosition, vFirebugPos )

                                                                                                                   
        if( flDistFromStart > 350*flMapScale )
        {
            vDelta = Game.Normalized( { x:g_vFirebugStartPosition.x-vFirebugPos.x, y:g_vFirebugStartPosition.y-vFirebugPos.y ,z:0 } )
        }

        vDelta[0] *= flDistMult;
        vDelta[1] *= flDistMult;

        let vLocalPos = hFirebugClickable.GetPosition( false );
        hFirebugClickable.SetPositionInPixels(vLocalPos.x+vDelta[0], vLocalPos.y+vDelta[1],0)

        g_flFirebugExhaustion = Math.min(4,g_flFirebugExhaustion+0.05);

        $.DispatchEvent( 'PlaySoundEffect', 'crownfall.map.click.SnapfireFirebugMove' );

        if( g_FirebugTimer2 != null && g_FirebugTimer2 > 0 )
        {
            $.CancelScheduled(g_FirebugTimer2)
        }

        g_FirebugTimer2 = $.Schedule( 0.75, function ()
        {
            FirebugStopFlying();
        } );
    }
}

function FirebugStopFlying()
{
    $.GetContextPanel().RemoveClass('Flying')
}
