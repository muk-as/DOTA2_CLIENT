#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Onslaught_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float tick_interval; // 0x1878            
            float charge_speed; // 0x187c            
            float movement_turn_rate; // 0x1880            
            float knockback_radius; // 0x1884            
            float knockback_distance; // 0x1888            
            std::int32_t knockback_damage; // 0x188c            
            std::int32_t m_nEnemyHeroesHit; // 0x1890            
            float m_flFacingTarget; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PrimalBeast_Onslaught_Movement) == 0x18b8);
    };
};
