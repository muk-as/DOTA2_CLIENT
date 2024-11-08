#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Snapfire_MortimerKisses : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nDamagePerProjectile; // 0x600        
        int32_t damage_per_impact; // 0x604        
        int32_t impact_radius; // 0x608        
        int32_t projectile_vision; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_MortimerKisses because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Snapfire_MortimerKisses) == 0x610);
};
