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
        class CDOTA_Modifier_Item_Falcon_Blade : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x_            
            std::int32_t bonus_damage_per_kill; // 0x_            
            std::int32_t bonus_damage_per_assist; // 0x_            
            std::int32_t bonus_health; // 0x_            
            std::int32_t max_damage; // 0x_            
            float bonus_mana_regen; // 0x_            
            std::int32_t stack_limit; // 0x_            
            float stack_duration; // 0x_            
            source2sdk::entity2::GameTime_t m_flStackDieTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Falcon_Blade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Falcon_Blade) == 0x_);
    };
};
