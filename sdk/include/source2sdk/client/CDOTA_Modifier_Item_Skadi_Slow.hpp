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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Skadi_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t cold_slow_melee; // 0x1888            
            std::int32_t cold_slow_ranged; // 0x188c            
            std::int32_t cold_attack_slow_melee; // 0x1890            
            std::int32_t cold_attack_slow_ranged; // 0x1894            
            float heal_reduction; // 0x1898            
            float restoration_reduction; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Skadi_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Skadi_Slow) == 0x18a0);
    };
};
