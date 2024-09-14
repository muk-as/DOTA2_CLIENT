#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Sand_King_Scorpion_Strike : public client::CDOTA_Buff
    {
    public:
        bool m_bStrikeAttack; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t bonus_attack_range; // 0x16ec        
        int32_t damage_percentage; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_Scorpion_Strike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sand_King_Scorpion_Strike) == 0x1700);
};
