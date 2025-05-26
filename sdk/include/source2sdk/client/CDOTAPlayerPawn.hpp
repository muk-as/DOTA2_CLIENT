#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CQuickBuyController.hpp"
#include "source2sdk/client/C_BasePlayerPawn.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xee0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
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
        // static metadata: MNetworkVarNames "CQuickBuyController m_quickBuyController"
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        #pragma pack(push, 1)
        class CDOTAPlayerPawn : public source2sdk::client::C_BasePlayerPawn
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTATeamMatesAndCommentatorTable"
            source2sdk::client::CQuickBuyController m_quickBuyController; // 0xd90            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0xed8            
            uint8_t _pad0edc[0x4];
            
            // Datamap fields:
            // CDOTAPlayer_CameraServices m_pCameraServices; // 0xc58
            // CDOTAPlayer_MovementServices m_pMovementServices; // 0xc60
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAPlayerPawn) == 0xee0);
    };
};
