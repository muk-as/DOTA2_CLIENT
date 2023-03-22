
#! mayapy
import maya.cmds as mc

import Animation.vDynParent as vDYN
import Character.Control.lib as CTRL
import Character.globals as GLOBALS

vDYN.SUPPRESS_STDOUT = True

def getRestObj( curCtrl ):
    spaceNul = vDYN.findSpaceNul( curCtrl )
    if not spaceNul:
        return None
    
    currentParent = mc.listRelatives(spaceNul, parent=True, pa=True)
    
    if currentParent and mc.objExists(currentParent[0]):                 
        return currentParent[0]

def createSpaces( srcCtrl, extraSpaces=[], defaultSpaceIndex=0, 
        WORLD_CTRL='World_CTRL', ROOT_CTRL='Body_CTRL', skipRoot=False ):
    assert mc.objExists( srcCtrl ), srcCtrl

    # locate spaceNul from the control stack then 
    curSpace = vDYN.findSpaceNul( srcCtrl )

    # add rest space
    spaces = [ ( getRestObj( srcCtrl ), 'Rest' ) ]

    # inject extra spaces
    map( spaces.append, extraSpaces )

    # throw in the remaining standard spaces
    ap = vDYN.createAllPurposeNul( srcCtrl )
    if skipRoot:
        map( spaces.append, 
                ( ( WORLD_CTRL, 'World' ), ( ap, 'AP' ), ) 
                )
    else:
        map( spaces.append, 
                ( ( WORLD_CTRL, 'World' ), ( ROOT_CTRL, 'Body' ), ( ap, 'AP' ), ) 
                )

    # create the space
    vDYN.addParentSpace( spaces, srcCtrl )

    # change to the default space
    vDYN.changeSpace( srcCtrl, defaultSpaceIndex )


def go():
    #
    # CORRECTIONS
    #
    mc.setAttr( 'NoTouch_NUL.visibility', 1 )

    #
    # SPACES
    #

    # ( accessories )
    #[ createSpaces( ctrl, ( 
    #        ( vDYN.createWorldOrientNul( ctrl, 'HairChainFK_CTRL' ), 'WorldOri' ), 
    #        ( 'HairChainFK_CTRL', 'Base' ), 
    #        ), 1) 
    #        for ctrl in ( 'Head_CTRL', ) ]

    # ( NECK / HEAD )
    # neck ik
    [ createSpaces( ctrl, ( 
            ( vDYN.createWorldOrientNul( ctrl, 'NeckHeadFK_0_CTRL' ), 'WorldOri' ), 
            ( 'NeckHeadFK_0_CTRL', 'Base' ), 
            ), 1) 
            for ctrl in ( 'Head_CTRL', ) ]

    # ( SPINE )
    spineCtrls = ( 
            'NeckHeadFK_0_CTRL', 
            'SpineFwdFK_3_CTRL', 
            'SpineFwdFK_2_CTRL', 
            'SpineFwdFK_1_CTRL', 
            'SpineFwdFK_0_CTRL', 
            )
    nSpineCtrls = len( spineCtrls )
    for i in xrange( nSpineCtrls ):
        currCtrl = spineCtrls[i]

        if i < ( nSpineCtrls - 1 ):
            prevCtrl = spineCtrls[i+1]
            createSpaces( currCtrl, ( 
                ( vDYN.createWorldOrientNul( currCtrl, prevCtrl ), 'WorldOri' ), 
                ) )

        else:
            createSpaces( currCtrl, skipRoot=True )

    # ( WEAPONS / ITEMS )

    # ( LHS )
    # elbows & knees
    createSpaces( 'ArmPV_L_CTRL', ( 
            ( vDYN.createWorldTranslateNul( 'ArmPV_L_CTRL', 'ArmIK_L_CTRL' ), 
                    'Wrist' ), 
            ( 'ClavicleIK_L_CTRL', 'Clavicle' ), 
            ( 'SpineFwdFK_3_CTRL', 'Chest' ),
            ) )

    createSpaces( 'LegPV_L_CTRL', ( 
            ( 'LegBase_L_CTRL', 'Hip' ), 
            ) )

    # feet
    createSpaces( 'LegIK_L_CTRL', ( 
            ( vDYN.createWorldTranslateNul( 'LegIK_L_CTRL', 'LeftLegTrans' ), 
                    'Hip' ), 
            ) )

    # fk arms & feet
    createSpaces( 'ArmFK_0_L_CTRL', ( 
            ( vDYN.createWorldOrientNul( 'ArmFK_0_L_CTRL', 'ClavicleFK_0_L_CTRL' ), 
                    'Clavicle' ), 
            #!!! redundant?
            #!!!( vDYN.createWorldOrientNul( 'ArmFK_0_L_CTRL', 'SpineFk3_CTRL' ), 
            #!!!        'Spine' ), 
            ) )
            
            
    createSpaces( 'LegFK_0_L_CTRL', ( 
            ( vDYN.createWorldOrientNul( 'LegFK_0_L_CTRL', 'Body_CTRL' ), 
                    'Pelvis' ), 
            ) )

    # ik arms and feet
    createSpaces( 'ArmIK_L_CTRL', ( 
            ( 'ClavicleIK_L_CTRL', 'Clavicle' ), 
            ( 'SpineFk3_CTRL', 'Chest' ),
            ( 'Root_CTRL', 'Pelvis' ),
            ) )
    
    createSpaces( 'LegIK_L_CTRL', ( 
            ( 'LegBase_L_CTRL', 'Hips' ), 
            ( 'Root_CTRL', 'Pelvis' ),
            ) )

    # ( RHS )
    # elbows & knees
    createSpaces( 'ArmPV_R_CTRL', ( 
            ( vDYN.createWorldTranslateNul( 'ArmPV_R_CTRL', 'ArmIK_R_CTRL' ), 
                    'Wrist' ), 
            ( 'ClavicleIK_R_CTRL', 'Clavicle' ), 
            ( 'SpineFwdFK_3_CTRL', 'Chest' ),
            ) )

    createSpaces( 'LegPV_R_CTRL', ( 
            ( 'LegBase_R_CTRL', 'Hip' ), 
            ) )
            
    createSpaces( 'WeaponChainFK_0_CTRL',[])


    # feet
    createSpaces( 'LegIK_R_CTRL', ( 
            ( vDYN.createWorldTranslateNul( 'LegIK_R_CTRL', 'LeftLegTrans' ), 
                    'Hip' ), 
            ) )

    # fk arms & feet
    createSpaces( 'ArmFK_0_R_CTRL', ( 
            ( vDYN.createWorldOrientNul( 'ArmFK_0_R_CTRL', 'ClavicleFK_0_R_CTRL' ), 
                    'Clavicle' ), 
            #!!! redundant?
            #!!!( vDYN.createWorldOrientNul( 'ArmFK_0_R_CTRL', 'SpineFk3_CTRL' ), 
            #!!!        'Spine' ), 
            ) )

    createSpaces( 'LegFK_0_R_CTRL', ( 
            ( vDYN.createWorldOrientNul( 'LegFK_0_R_CTRL', 'Body_CTRL' ), 
                    'Pelvis' ), 
            ) )

    # ik arms and feet
    createSpaces( 'ArmIK_R_CTRL', ( 
            ( 'ClavicleIK_R_CTRL', 'Clavicle' ), 
            ( 'SpineFk3_CTRL', 'Chest' ),
            ( 'Root_CTRL', 'Pelvis' ),
            ) )
    
    createSpaces( 'LegIK_R_CTRL', ( 
            ( 'LegBase_R_CTRL', 'Hips' ), 
            ( 'Root_CTRL', 'Pelvis' ),
            ) )
            
 	# Slugbutt
    createSpaces( 'BugLegIK_CTRL', ( 
            ( 'BugLegBase_CTRL', 'Hips' ), 
            ( 'Root_CTRL', 'Pelvis' ),
            ) )
            
    createSpaces( 'BugLegPV_CTRL', ( 
            ( vDYN.createWorldTranslateNul( 'BugLegPV_CTRL', 'BugLegIK_CTRL' ), 
            	'Flipper' ), 
            ( 'BugLegBase_CTRL', 'Hip' ), 
            ) )
 
    #
    # cleanup -- parent space nuls to a common location
    #
    spaceParentNul = mc.group( em=1, p='World_CTRL', name='vdynSetup_NUL' )

    reparent = []
    for n in mc.ls( assemblies=1 ) or []:
        if 'worldFollow' in n:
            mc.parent( n, spaceParentNul )

        else:
            conn = mc.listConnections( n, s=1, d=0 ) or []
            for c in conn:
                if mc.attributeQuery( 'spaceNul', n=c, ex=1 ):
                    reparent.append( n )
                    break

    if reparent:
        mc.parent( reparent, spaceParentNul )
                




go()

#===============================================================================
#===============================================================================
#===============================================================================
#===============================================================================
