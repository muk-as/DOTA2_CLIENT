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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Tusk_WalrusKick : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nTargetFXIndex; // 0x5a0        
        Vector m_vEndpoint; // 0x5a4        
        float landing_radius; // 0x5b0        
        float push_length; // 0x5b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tusk_WalrusKick because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tusk_WalrusKick) == 0x5b8);
};
