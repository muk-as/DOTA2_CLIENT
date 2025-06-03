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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_ArenaOfBlood : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            std::int32_t width; // 0x187c            
            std::int32_t spear_damage; // 0x1880            
            std::int32_t spear_distance_from_wall; // 0x1884            
            float spear_attack_interval; // 0x1888            
            uint8_t _pad188c[0x1c]; // 0x188c
            float warrior_fade_min_dist; // 0x18a8            
            float warrior_fade_max_dist; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_ArenaOfBlood) == 0x18b0);
    };
};
