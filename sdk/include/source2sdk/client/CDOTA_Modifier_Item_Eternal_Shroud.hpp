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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Eternal_Shroud : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_spell_resist; // 0x1888            
            std::int32_t bonus_strength; // 0x188c            
            std::int32_t bonus_armor; // 0x1890            
            float bonus_health; // 0x1894            
            std::int32_t mana_restore_pct; // 0x1898            
            float stack_threshold; // 0x189c            
            float stack_resist; // 0x18a0            
            float stack_duration; // 0x18a4            
            std::int32_t max_stacks; // 0x18a8            
            float m_flCumulativeDamage; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Eternal_Shroud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Eternal_Shroud) == 0x18b0);
    };
};
