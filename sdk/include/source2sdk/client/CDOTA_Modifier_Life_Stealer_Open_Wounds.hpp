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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Life_Stealer_Open_Wounds : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_steps[8]; // 0x1888            
            std::int32_t heal_percent; // 0x18a8            
            std::int32_t m_nDamageTracker; // 0x18ac            
            std::int32_t damage_threshold; // 0x18b0            
            float spread_radius; // 0x18b4            
            std::int32_t max_health_as_damage_pct; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Open_Wounds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Life_Stealer_Open_Wounds) == 0x18c0);
    };
};
