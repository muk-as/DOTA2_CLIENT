#pragma once
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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_VengefulSpirit_Nether_Swap : public server::CDOTABaseAbility
    {
    public:
        int32_t m_nFXIndex; // 0x5c8        
        int32_t damage; // 0x5cc        
        float damage_reduction; // 0x5d0        
        float damage_reduction_duration; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VengefulSpirit_Nether_Swap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VengefulSpirit_Nether_Swap) == 0x5d8);
};
