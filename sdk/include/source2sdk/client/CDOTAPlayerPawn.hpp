#pragma once
#include "source2sdk/client/C_BasePlayerPawn.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb60
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkUserGroupProxy "CDOTAPlayerPawn"
    // static metadata: MNetworkExcludeByName "m_angRotation"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flPlaybackRate"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_flSimulationTime"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_vecVelocity"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkExcludeByName "m_nTickBase"
    // static metadata: MNetworkVarTypeOverride "CDOTAPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CDOTAPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    #pragma pack(push, 1)
    class CDOTAPlayerPawn : public client::C_BasePlayerPawn
    {
    public:
        // Datamap fields:
        // CDOTAPlayer_CameraServices m_pCameraServices; // 0xa48
        // CDOTAPlayer_MovementServices m_pMovementServices; // 0xa50
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTAPlayerPawn) == 0xb60);
};
