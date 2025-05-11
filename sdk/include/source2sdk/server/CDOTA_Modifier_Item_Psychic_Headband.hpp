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
        // Size: 0x1800
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Psychic_Headband : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t intelligence_pct; // 0x17f8            
            std::int32_t cast_range; // 0x17fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Psychic_Headband because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Psychic_Headband) == 0x1800);
    };
};
