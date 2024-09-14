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
    class CDOTA_Modifier_Dazzle_Innate_Weave_Armor : public client::CDOTA_Buff
    {
    public:
        float armor_change; // 0x16e8        
        float heal_reduction; // 0x16ec        
        client::ParticleIndex_t m_nFXIndex; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Innate_Weave_Armor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dazzle_Innate_Weave_Armor) == 0x16f8);
};
