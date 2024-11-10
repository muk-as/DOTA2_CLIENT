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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_PrimalBeast_Onslaught : public server::CDOTABaseAbility
    {
    public:
        float max_charge_time; // 0x5c8        
        float knockback_distance; // 0x5cc        
        int32_t knockback_damage; // 0x5d0        
        int32_t collision_radius; // 0x5d4        
        int32_t max_distance; // 0x5d8        
        Vector m_vStartPos; // 0x5dc        
        client::ParticleIndex_t m_nFXIndex; // 0x5e8        
        int32_t m_nProjectileID; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5f0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_PrimalBeast_Onslaught because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_PrimalBeast_Onslaught) == 0x5f8);
};
