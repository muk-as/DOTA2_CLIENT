#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Terrorblade_Demon_Zeal : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t berserk_bonus_attack_speed; // 0x17f8            
            std::int32_t berserk_bonus_movement_speed; // 0x17fc            
            std::int32_t berserk_bonus_armor; // 0x1800            
            std::int32_t hp_regen; // 0x1804            
            std::int32_t reflection_pct; // 0x1808            
            std::int32_t melee_bonus; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Demon_Zeal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Terrorblade_Demon_Zeal) == 0x1810);
    };
};
