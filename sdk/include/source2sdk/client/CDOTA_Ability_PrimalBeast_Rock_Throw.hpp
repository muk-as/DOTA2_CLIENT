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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_PrimalBeast_Rock_Throw : public client::C_DOTABaseAbility
    {
    public:
        int32_t base_damage; // 0x600        
        float impact_radius; // 0x604        
        float fragment_impact_radius; // 0x608        
        int32_t fragment_impact_distance; // 0x60c        
        int32_t min_range; // 0x610        
        float stun_duration; // 0x614        
        client::ParticleIndex_t m_nFXPreview; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_PrimalBeast_Rock_Throw because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_PrimalBeast_Rock_Throw) == 0x620);
};
