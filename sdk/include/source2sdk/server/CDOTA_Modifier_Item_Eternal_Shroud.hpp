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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Eternal_Shroud : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_spell_resist; // 0x1878            
            std::int32_t bonus_strength; // 0x187c            
            std::int32_t bonus_armor; // 0x1880            
            float bonus_health; // 0x1884            
            std::int32_t mana_restore_pct; // 0x1888            
            float stack_threshold; // 0x188c            
            float stack_resist; // 0x1890            
            float stack_duration; // 0x1894            
            std::int32_t max_stacks; // 0x1898            
            float m_flCumulativeDamage; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Eternal_Shroud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Eternal_Shroud) == 0x18a0);
    };
};
