#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CourierState_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x18d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "PlayerID_t m_nSoleControllingPlayer"
        // static metadata: MNetworkVarNames "bool m_bFlyingCourier"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
        // static metadata: MNetworkVarNames "CourierState_t m_nCourierState"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCourierStateEntity"
        #pragma pack(push, 1)
        class CDOTA_Unit_Courier : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            bool m_bUnitRespawned; // 0x1898            
            bool m_bPreUpdateFlyingCourier; // 0x1899            
            uint8_t _pad189a[0x2]; // 0x189a
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nSoleControllingPlayer; // 0x189c            
            // metadata: MNetworkEnable
            bool m_bFlyingCourier; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x18a4            
            // metadata: MNetworkEnable
            source2sdk::client::CourierState_t m_nCourierState; // 0x18a8            
            // metadata: MNetworkEnable
            // m_hCourierStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCourierStateEntity;
            char m_hCourierStateEntity[0x4]; // 0x18ac            
            CUtlString m_strCourierModel; // 0x18b0            
            CUtlString m_strFlyingCourierModel; // 0x18b8            
            Vector m_vSpawnLocation; // 0x18c0            
            source2sdk::entity2::GameTime_t m_flLastLeavingFountainToastTime; // 0x18cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Courier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Courier) == 0x18d0);
    };
};
