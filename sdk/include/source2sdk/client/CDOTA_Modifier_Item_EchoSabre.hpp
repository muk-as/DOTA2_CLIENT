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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_EchoSabre : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_intellect; // 0x1878            
            std::int32_t bonus_attack_speed; // 0x187c            
            std::int32_t bonus_damage; // 0x1880            
            float bonus_mana_regen; // 0x1884            
            std::int32_t bonus_strength; // 0x1888            
            float slow_duration; // 0x188c            
            bool bonus_speed; // 0x1890            
            uint8_t _pad1891[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_EchoSabre because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_EchoSabre) == 0x1898);
    };
};
