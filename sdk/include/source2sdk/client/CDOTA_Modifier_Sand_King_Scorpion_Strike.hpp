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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sand_King_Scorpion_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bStrikeAttack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t bonus_attack_range; // 0x_            
            std::int32_t damage_percentage; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_Scorpion_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Sand_King_Scorpion_Strike) == 0x_);
    };
};
