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
        class CDOTA_Modifier_Item_Naginata : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_intellect; // 0x1878            
            std::int32_t bonus_attack_speed; // 0x187c            
            std::int32_t bonus_damage; // 0x1880            
            std::int32_t bonus_health; // 0x1884            
            float bonus_mana_regen; // 0x1888            
            std::int32_t cooldown_reduction_percent; // 0x188c            
            std::int32_t bonus_chance; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Naginata because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Naginata) == 0x1898);
    };
};
