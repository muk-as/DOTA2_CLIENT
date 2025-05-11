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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Onslaught_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float tick_interval; // 0x17f8            
            float charge_speed; // 0x17fc            
            float movement_turn_rate; // 0x1800            
            float knockback_radius; // 0x1804            
            float knockback_distance; // 0x1808            
            std::int32_t knockback_damage; // 0x180c            
            std::int32_t m_nEnemyHeroesHit; // 0x1810            
            float m_flFacingTarget; // 0x1814            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1818            
            uint8_t _pad181c[0x4]; // 0x181c
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PrimalBeast_Onslaught_Movement) == 0x1838);
    };
};
