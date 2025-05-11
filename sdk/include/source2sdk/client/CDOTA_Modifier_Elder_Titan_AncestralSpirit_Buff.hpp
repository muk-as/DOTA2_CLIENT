#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float move_pct_creeps; // 0x17f8            
            float move_pct_heroes; // 0x17fc            
            std::int32_t damage_creeps; // 0x1800            
            std::int32_t damage_heroes; // 0x1804            
            float armor_creeps; // 0x1808            
            float armor_heroes; // 0x180c            
            float move_pct_cap; // 0x1810            
            std::int32_t m_nCreepsHit; // 0x1814            
            std::int32_t m_nHeroesHit; // 0x1818            
            float m_fSpeedPercentage; // 0x181c            
            std::int32_t m_nDamage; // 0x1820            
            std::int32_t m_nArmor; // 0x1824            
            bool m_bSpellImmunity; // 0x1828            
            uint8_t _pad1829[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff) == 0x1830);
    };
};
