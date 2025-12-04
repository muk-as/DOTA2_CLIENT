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
        class CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t armor_reduction_pct; // 0x_            
            float m_flArmorReduction; // 0x_            
            float armor_per_tick; // 0x_            
            float tick_rate; // 0x_            
            std::int32_t max_stacks; // 0x_            
            std::int32_t m_nTickCount; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor) == 0x_);
    };
};
