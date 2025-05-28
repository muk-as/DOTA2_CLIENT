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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Viper_CorrosiveSkin_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_attack_speed; // 0x1888            
            float damage; // 0x188c            
            float effect_multiplier_distance; // 0x1890            
            float effect_multiplier; // 0x1894            
            std::int32_t bonus_status_resistance; // 0x1898            
            std::int32_t nethertoxin_bonus_pct; // 0x189c            
            bool m_bEffectMultiplied; // 0x18a0            
            uint8_t _pad18a1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Viper_CorrosiveSkin_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Viper_CorrosiveSkin_Slow) == 0x18a8);
    };
};
