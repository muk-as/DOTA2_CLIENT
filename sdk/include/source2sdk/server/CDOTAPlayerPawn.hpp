#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CBasePlayerPawn.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        #pragma pack(push, 1)
        class CDOTAPlayerPawn : public source2sdk::server::CBasePlayerPawn
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CDOTAPlayer_CameraServices m_pCameraServices; // 0x_
            // CDOTAPlayer_MovementServices m_pMovementServices; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPlayerPawn) == 0x_);
    };
};
