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
        class CDOTA_Modifier_Item_MeteorHammer : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_strength; // 0x1878            
            std::int32_t bonus_agility; // 0x187c            
            std::int32_t bonus_intellect; // 0x1880            
            float spell_amp; // 0x1884            
            float mana_regen_multiplier; // 0x1888            
            float healing_amp; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_MeteorHammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_MeteorHammer) == 0x1890);
    };
};
