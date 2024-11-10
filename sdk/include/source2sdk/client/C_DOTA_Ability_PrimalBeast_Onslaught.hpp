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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_PrimalBeast_Onslaught : public client::C_DOTABaseAbility
    {
    public:
        float max_charge_time; // 0x600        
        float knockback_distance; // 0x604        
        int32_t knockback_damage; // 0x608        
        int32_t collision_radius; // 0x60c        
        int32_t max_distance; // 0x610        
        Vector m_vStartPos; // 0x614        
        client::ParticleIndex_t m_nFXIndex; // 0x620        
        int32_t m_nProjectileID; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x628[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_PrimalBeast_Onslaught because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_PrimalBeast_Onslaught) == 0x630);
};
