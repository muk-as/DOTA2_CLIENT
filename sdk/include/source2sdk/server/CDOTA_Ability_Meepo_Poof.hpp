#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Meepo_Poof : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x8]; // 0x5a4
        int32_t radius; // 0x5ac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Meepo_Poof because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Meepo_Poof) == 0x5b0);
};
