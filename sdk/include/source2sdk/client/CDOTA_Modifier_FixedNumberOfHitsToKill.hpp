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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_FixedNumberOfHitsToKill : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t creep_attack_divisor; // 0x1878            
            std::int32_t attack_count; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_FixedNumberOfHitsToKill because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_FixedNumberOfHitsToKill) == 0x1880);
    };
};
