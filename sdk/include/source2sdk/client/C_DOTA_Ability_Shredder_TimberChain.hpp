#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Shredder_TimberChain : public client::C_DOTABaseAbility
    {
    public:
        int32_t chain_radius; // 0x5d8        
        client::ParticleIndex_t m_nFXIndex; // 0x5dc        
        Vector m_vProjectileVelocity; // 0x5e0        
        bool m_bRetract; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Shredder_TimberChain because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Shredder_TimberChain) == 0x5f0);
};
