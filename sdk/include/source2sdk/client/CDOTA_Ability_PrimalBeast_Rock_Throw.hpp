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
    class CDOTA_Ability_PrimalBeast_Rock_Throw : public client::C_DOTABaseAbility
    {
    public:
        int32_t base_damage; // 0x5d8        
        float impact_radius; // 0x5dc        
        float fragment_impact_radius; // 0x5e0        
        int32_t fragment_impact_distance; // 0x5e4        
        int32_t min_range; // 0x5e8        
        float stun_duration; // 0x5ec        
        client::ParticleIndex_t m_nFXPreview; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_PrimalBeast_Rock_Throw because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_PrimalBeast_Rock_Throw) == 0x5f8);
};
