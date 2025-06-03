#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Terrorblade_Demon_Zeal : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t berserk_bonus_attack_speed; // 0x1878            
            std::int32_t berserk_bonus_movement_speed; // 0x187c            
            std::int32_t berserk_bonus_armor; // 0x1880            
            std::int32_t hp_regen; // 0x1884            
            std::int32_t reflection_pct; // 0x1888            
            std::int32_t melee_bonus; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Demon_Zeal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Terrorblade_Demon_Zeal) == 0x1890);
    };
};
