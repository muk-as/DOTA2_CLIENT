#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Doubloon : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            float conversion_pct; // 0x1878            
            std::int32_t bonus_health_regen; // 0x187c            
            float bonus_mana_regen; // 0x1880            
            std::int32_t regen_bonus_pct; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Doubloon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Doubloon) == 0x1888);
    };
};
