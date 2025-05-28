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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_SpecialistsArray : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t all_stats; // 0x1888            
            std::int32_t bonus_damage; // 0x188c            
            std::int32_t proc_bonus_damage; // 0x1890            
            std::int32_t count; // 0x1894            
            std::int32_t secondary_target_range_bonus; // 0x1898            
            uint8_t _pad189c[0x3c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_SpecialistsArray because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_SpecialistsArray) == 0x18d8);
    };
};
