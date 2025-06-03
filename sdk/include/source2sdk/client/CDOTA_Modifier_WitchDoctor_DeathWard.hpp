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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_WitchDoctor_DeathWard : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_damage; // 0x1878            
            std::int32_t bonus_accuracy; // 0x187c            
            std::int32_t bonus_attack_range; // 0x1880            
            bool m_bFirstAttack; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            std::int32_t initial_target_count; // 0x1888            
            std::int32_t secondary_attack_damage_pct; // 0x188c            
            uint8_t _pad1890[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_DeathWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_WitchDoctor_DeathWard) == 0x18c8);
    };
};
