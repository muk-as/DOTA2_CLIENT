#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        class CDOTA_Modifier_Item_Orb_of_Pestilence : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t poison_movement_speed_melee; // 0x17f8            
            std::int32_t poison_movement_speed_range; // 0x17fc            
            float poison_duration; // 0x1800            
            float poison_damage; // 0x1804            
            std::int32_t armor; // 0x1808            
            float hp_regen; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Orb_of_Pestilence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Orb_of_Pestilence) == 0x1810);
    };
};
