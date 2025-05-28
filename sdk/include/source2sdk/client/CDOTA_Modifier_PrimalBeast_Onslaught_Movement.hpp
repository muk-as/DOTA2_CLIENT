#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Onslaught_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float tick_interval; // 0x1888            
            float charge_speed; // 0x188c            
            float movement_turn_rate; // 0x1890            
            float knockback_radius; // 0x1894            
            float knockback_distance; // 0x1898            
            std::int32_t knockback_damage; // 0x189c            
            std::int32_t m_nEnemyHeroesHit; // 0x18a0            
            float m_flFacingTarget; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x18b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PrimalBeast_Onslaught_Movement) == 0x18c8);
    };
};
