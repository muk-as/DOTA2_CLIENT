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
        class CDOTA_Modifer_Item_DandelionAmulet : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t move_speed; // 0x1878            
            std::int32_t mana; // 0x187c            
            std::int32_t magic_block; // 0x1880            
            std::int32_t min_damage; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifer_Item_DandelionAmulet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifer_Item_DandelionAmulet) == 0x1888);
    };
};
