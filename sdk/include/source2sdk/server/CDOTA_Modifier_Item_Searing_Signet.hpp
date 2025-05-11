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
        class CDOTA_Modifier_Item_Searing_Signet : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float damage_threshold; // 0x17f8            
            float burn_duration; // 0x17fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Searing_Signet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Searing_Signet) == 0x1800);
    };
};
