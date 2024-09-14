#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DoomBringer_InfernalBlade : public client::CDOTA_Buff
    {
    public:
        bool m_bInfernalBladeAttack; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        client::ParticleIndex_t m_nFXIndex; // 0x16ec        
        float burn_duration; // 0x16f0        
        float ministun_duration; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DoomBringer_InfernalBlade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DoomBringer_InfernalBlade) == 0x16f8);
};
