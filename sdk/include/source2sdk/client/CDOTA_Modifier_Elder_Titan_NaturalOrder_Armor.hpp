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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t armor_reduction_pct; // 0x1878            
            float m_flArmorReduction; // 0x187c            
            float armor_per_tick; // 0x1880            
            float tick_rate; // 0x1884            
            std::int32_t max_stacks; // 0x1888            
            std::int32_t m_nTickCount; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor) == 0x1890);
    };
};
