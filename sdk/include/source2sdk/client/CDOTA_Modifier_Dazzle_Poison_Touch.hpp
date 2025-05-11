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
        class CDOTA_Modifier_Dazzle_Poison_Touch : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x17f8            
            float bonus_slow; // 0x17fc            
            std::int32_t bonus_damage; // 0x1800            
            float flAccummulatedBonusSlow; // 0x1804            
            std::int32_t iAccummulatedBonusDamage; // 0x1808            
            std::int32_t attack_range_bonus; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Poison_Touch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dazzle_Poison_Touch) == 0x1810);
    };
};
