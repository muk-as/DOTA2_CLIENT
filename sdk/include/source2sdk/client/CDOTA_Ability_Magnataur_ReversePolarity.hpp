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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Magnataur_ReversePolarity : public client::C_DOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x5d8        
        Vector m_vPullLocation; // 0x5dc        
        float push_radius; // 0x5e8        
        float max_knockback_distance; // 0x5ec        
        float pull_radius; // 0x5f0        
        float flEffectRadius; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_ReversePolarity because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Magnataur_ReversePolarity) == 0x5f8);
};
