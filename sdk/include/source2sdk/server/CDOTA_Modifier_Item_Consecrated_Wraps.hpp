#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        class CDOTA_Modifier_Item_Consecrated_Wraps : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float bonus_spell_resist; // 0x_            
            float bonus_evasion; // 0x_            
            float stack_threshold_damage; // 0x_            
            float stack_gain_time; // 0x_            
            std::int32_t max_stacks; // 0x_            
            float stack_magic_resist; // 0x_            
            float stack_evasion; // 0x_            
            float stack_heal; // 0x_            
            float heal_cd; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastHealTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Consecrated_Wraps because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Consecrated_Wraps) == 0x_);
    };
};
