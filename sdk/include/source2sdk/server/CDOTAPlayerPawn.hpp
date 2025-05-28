#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CBasePlayerPawn.hpp"
#include "source2sdk/server/CQuickBuyController.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc20
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
        // static metadata: MNetworkUserGroupProxy "CDOTAPlayerPawn"
        // static metadata: MNetworkUserGroupProxy "CDOTAPlayerPawn"
        // static metadata: MNetworkOverride "m_vecOrigin CGameSceneNode"
        // static metadata: MNetworkOverride "m_cellX CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_cellY CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_cellZ CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkVarTypeOverride "CDOTAPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CDOTAPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarNames "CQuickBuyController m_quickBuyController"
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        #pragma pack(push, 1)
        class CDOTAPlayerPawn : public source2sdk::server::CBasePlayerPawn
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTATeamMatesAndCommentatorTable"
            source2sdk::server::CQuickBuyController m_quickBuyController; // 0xa80            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0xc08            
            bool m_bIsHLTV; // 0xc0c            
            bool m_bIsTeamRestricted; // 0xc0d            
            uint8_t _pad0c0e[0x2]; // 0xc0e
            std::int32_t m_nTeamRestrictedTeamNum; // 0xc10            
            uint8_t _pad0c14[0xc];
            
            // Datamap fields:
            // CDOTAPlayer_CameraServices m_pCameraServices; // 0x970
            // CDOTAPlayer_MovementServices m_pMovementServices; // 0x978
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPlayerPawn) == 0xc20);
    };
};
