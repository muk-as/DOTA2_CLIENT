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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_PrimalBeast_Rock_Throw : public server::CDOTABaseAbility
    {
    public:
        int32_t base_damage; // 0x5a0        
        float impact_radius; // 0x5a4        
        float fragment_impact_radius; // 0x5a8        
        int32_t fragment_impact_distance; // 0x5ac        
        int32_t min_range; // 0x5b0        
        float stun_duration; // 0x5b4        
        client::ParticleIndex_t m_nFXPreview; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_PrimalBeast_Rock_Throw because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_PrimalBeast_Rock_Throw) == 0x5c8);
};
