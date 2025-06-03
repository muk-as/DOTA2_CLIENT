#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float move_pct_creeps; // 0x1878            
            float move_pct_heroes; // 0x187c            
            std::int32_t damage_creeps; // 0x1880            
            std::int32_t damage_heroes; // 0x1884            
            float armor_creeps; // 0x1888            
            float armor_heroes; // 0x188c            
            float move_pct_cap; // 0x1890            
            std::int32_t m_nCreepsHit; // 0x1894            
            std::int32_t m_nHeroesHit; // 0x1898            
            float m_fSpeedPercentage; // 0x189c            
            std::int32_t m_nDamage; // 0x18a0            
            std::int32_t m_nArmor; // 0x18a4            
            bool m_bSpellImmunity; // 0x18a8            
            uint8_t _pad18a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff) == 0x18b0);
    };
};
