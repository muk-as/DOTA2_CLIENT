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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Eternal_Shroud : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_spell_resist; // 0x_            
            std::int32_t bonus_strength; // 0x_            
            std::int32_t bonus_armor; // 0x_            
            float bonus_health; // 0x_            
            std::int32_t mana_restore_pct; // 0x_            
            float stack_threshold; // 0x_            
            float stack_resist; // 0x_            
            float stack_duration; // 0x_            
            std::int32_t max_stacks; // 0x_            
            float m_flCumulativeDamage; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Eternal_Shroud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Eternal_Shroud) == 0x_);
    };
};
