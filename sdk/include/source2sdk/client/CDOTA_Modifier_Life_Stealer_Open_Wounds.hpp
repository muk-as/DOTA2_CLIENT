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
        class CDOTA_Modifier_Life_Stealer_Open_Wounds : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_steps[8]; // 0x_            
            std::int32_t heal_percent; // 0x_            
            std::int32_t m_nDamageTracker; // 0x_            
            std::int32_t damage_threshold; // 0x_            
            float spread_radius; // 0x_            
            std::int32_t max_health_as_damage_pct; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Open_Wounds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Life_Stealer_Open_Wounds) == 0x_);
    };
};
