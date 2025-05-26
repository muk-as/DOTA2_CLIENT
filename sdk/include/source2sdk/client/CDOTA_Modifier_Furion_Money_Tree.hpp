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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Furion_Money_Tree : public source2sdk::client::CDOTA_Buff
        {
        public:
            float gold_per_bag; // 0x1878            
            float tick_interval; // 0x187c            
            float tree_duration; // 0x1880            
            std::int32_t min_throw_range; // 0x1884            
            std::int32_t max_throw_range; // 0x1888            
            float gold_bag_duration; // 0x188c            
            std::int32_t bags_per_tick; // 0x1890            
            float hero_level_gold_multiplier; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Furion_Money_Tree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Furion_Money_Tree) == 0x1898);
    };
};
