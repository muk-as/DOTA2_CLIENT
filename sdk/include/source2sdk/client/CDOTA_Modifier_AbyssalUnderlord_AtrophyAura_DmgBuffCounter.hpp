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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t cleave_damage_pct; // 0x1878            
            float cleave_starting_width; // 0x187c            
            std::int32_t cleave_angle; // 0x1880            
            float cleave_distance_base; // 0x1884            
            std::int32_t cleave_distance_per_stack; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter) == 0x1890);
    };
};
