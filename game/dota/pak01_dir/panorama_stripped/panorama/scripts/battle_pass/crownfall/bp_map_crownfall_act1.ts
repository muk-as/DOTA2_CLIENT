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

                                     
                                
                                     

function UnlockPremiumQuest1( unNodeId: number )
{
    $.Msg( "UnlockPremiumQuest1" );

    const pPremiumRope: AnimatedImageStrip_t = GetAnimatedImage( "PremiumRope", true );
    pPremiumRope.StartAnimating();
    pPremiumRope.StopAnimatingAtFrame( pPremiumRope.GetFrameCount() - 1 );
}

function UnlockPremiumQuest2( unNodeId: number )
{
    $.Msg( "UnlockPremiumQuest2" );

    const pPremiumRope: AnimatedImageStrip_t = GetAnimatedImage( "PremiumRope2", true );
    pPremiumRope.StartAnimating();
    pPremiumRope.StopAnimatingAtFrame( pPremiumRope.GetFrameCount() - 1 );
}