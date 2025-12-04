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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float move_pct_creeps; // 0x_            
            float move_pct_heroes; // 0x_            
            std::int32_t damage_creeps; // 0x_            
            std::int32_t damage_heroes; // 0x_            
            float armor_creeps; // 0x_            
            float armor_heroes; // 0x_            
            float move_pct_cap; // 0x_            
            std::int32_t m_nCreepsHit; // 0x_            
            std::int32_t m_nHeroesHit; // 0x_            
            float m_fSpeedPercentage; // 0x_            
            std::int32_t m_nDamage; // 0x_            
            std::int32_t m_nArmor; // 0x_            
            bool m_bSpellImmunity; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff) == 0x_);
    };
};
