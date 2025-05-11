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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t armor_reduction_pct; // 0x17f8            
            float m_flArmorReduction; // 0x17fc            
            std::int32_t armor_per_tick; // 0x1800            
            float tick_rate; // 0x1804            
            std::int32_t max_stacks; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor) == 0x1810);
    };
};
