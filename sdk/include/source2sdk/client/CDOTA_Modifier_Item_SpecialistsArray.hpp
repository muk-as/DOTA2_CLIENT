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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_SpecialistsArray : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t agility; // 0x_            
            std::int32_t damage; // 0x_            
            std::int32_t proc_chance; // 0x_            
            std::int32_t proc_dmg_pct; // 0x_            
            std::int32_t count; // 0x_            
            std::int32_t secondary_target_range_bonus; // 0x_            
            std::int32_t secondary_target_angle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_SpecialistsArray because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_SpecialistsArray) == 0x_);
    };
};
