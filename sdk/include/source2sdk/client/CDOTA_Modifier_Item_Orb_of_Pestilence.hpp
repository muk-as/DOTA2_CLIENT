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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Orb_of_Pestilence : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t poison_movement_speed_melee; // 0x1878            
            std::int32_t poison_movement_speed_range; // 0x187c            
            float poison_duration; // 0x1880            
            float poison_damage; // 0x1884            
            std::int32_t armor; // 0x1888            
            float hp_regen; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Orb_of_Pestilence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Orb_of_Pestilence) == 0x1890);
    };
};
