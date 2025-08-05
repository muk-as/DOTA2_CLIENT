#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/CourierState_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1b10
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
        class C_DOTA_Unit_Courier : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            bool m_bUnitRespawned; // 0x1a18            
            bool m_bPreUpdateFlyingCourier; // 0x1a19            
            uint8_t _pad1a1a[0x2]; // 0x1a1a
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nSoleControllingPlayer; // 0x1a1c            
            // metadata: MNetworkEnable
            bool m_bFlyingCourier; // 0x1a20            
            uint8_t _pad1a21[0x3]; // 0x1a21
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a24            
            // metadata: MNetworkEnable
            source2sdk::client::CourierState_t m_nCourierState; // 0x1a28            
            // metadata: MNetworkEnable
            // m_hCourierStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCourierStateEntity;
            char m_hCourierStateEntity[0x4]; // 0x1a2c            
            uint8_t _pad1a30[0xe0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Courier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Courier) == 0x1b10);
    };
};
