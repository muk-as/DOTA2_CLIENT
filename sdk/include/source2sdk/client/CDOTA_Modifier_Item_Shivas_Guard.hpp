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
        class CDOTA_Modifier_Item_Shivas_Guard : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_intellect; // 0x1878            
            std::int32_t bonus_armor; // 0x187c            
            float aura_radius; // 0x1880            
            std::int32_t bonus_hp_regen; // 0x1884            
            std::int32_t bonus_strength; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Shivas_Guard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Shivas_Guard) == 0x1890);
    };
};
