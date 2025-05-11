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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mage_Slayer : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_magical_armor; // 0x17f8            
            std::int32_t bonus_attack_speed; // 0x17fc            
            std::int32_t bonus_damage; // 0x1800            
            float bonus_health_regen; // 0x1804            
            float bonus_mana_regen; // 0x1808            
            float duration; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mage_Slayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Mage_Slayer) == 0x1810);
    };
};
