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
        class CDOTA_Modifier_Item_Buckler : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            bool m_bAppliesToCreeps; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            float bonus_aoe_radius; // 0x187c            
            float armor; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Buckler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Buckler) == 0x1888);
    };
};
