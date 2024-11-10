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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Shredder_TimberChain : public server::CDOTABaseAbility
    {
    public:
        int32_t chain_radius; // 0x5c8        
        client::ParticleIndex_t m_nFXIndex; // 0x5cc        
        Vector m_vProjectileVelocity; // 0x5d0        
        bool m_bRetract; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5dd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Shredder_TimberChain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Shredder_TimberChain) == 0x5e0);
};
