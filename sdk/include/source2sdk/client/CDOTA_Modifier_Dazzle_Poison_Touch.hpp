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
        class CDOTA_Modifier_Dazzle_Poison_Touch : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x1888            
            float bonus_slow; // 0x188c            
            std::int32_t bonus_damage; // 0x1890            
            float flAccummulatedBonusSlow; // 0x1894            
            std::int32_t iAccummulatedBonusDamage; // 0x1898            
            std::int32_t attack_range_bonus; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Poison_Touch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dazzle_Poison_Touch) == 0x18a0);
    };
};
