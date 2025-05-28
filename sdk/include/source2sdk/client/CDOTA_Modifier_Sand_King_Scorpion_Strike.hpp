#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Sand_King_Scorpion_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bStrikeAttack; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            std::int32_t bonus_attack_range; // 0x188c            
            std::int32_t damage_percentage; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1894            
            uint8_t _pad1898[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_Scorpion_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Sand_King_Scorpion_Strike) == 0x18b0);
    };
};
