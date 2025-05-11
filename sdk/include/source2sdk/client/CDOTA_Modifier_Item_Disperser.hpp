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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Disperser : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_agility; // 0x17f8            
            std::int32_t bonus_intellect; // 0x17fc            
            std::int32_t bonus_attack_speed; // 0x1800            
            std::int32_t bonus_damage; // 0x1804            
            float bonus_mana_regen; // 0x1808            
            float damage_per_burn; // 0x180c            
            std::int32_t feedback_mana_burn; // 0x1810            
            std::int32_t feedback_mana_burn_illusion_melee; // 0x1814            
            std::int32_t feedback_mana_burn_illusion_ranged; // 0x1818            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Disperser because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Disperser) == 0x1820);
    };
};
