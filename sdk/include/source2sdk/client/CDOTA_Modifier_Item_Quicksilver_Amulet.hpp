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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Quicksilver_Amulet : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t base_attack; // 0x1888            
            std::int32_t bonus_attack; // 0x188c            
            std::int32_t base_movement; // 0x1890            
            std::int32_t bonus_movement; // 0x1894            
            std::int32_t projectile_increase; // 0x1898            
            std::int32_t anim_increase; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Quicksilver_Amulet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Quicksilver_Amulet) == 0x18a0);
    };
};
