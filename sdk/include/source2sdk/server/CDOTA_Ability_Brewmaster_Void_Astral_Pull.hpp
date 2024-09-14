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
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Brewmaster_Void_Astral_Pull : public server::CDOTABaseAbility
    {
    public:
        int32_t pull_speed; // 0x5a0        
        int32_t pull_distance; // 0x5a4        
        Vector m_vTargetPos; // 0x5a8        
        Vector m_vEndpoint; // 0x5b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_Void_Astral_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Brewmaster_Void_Astral_Pull) == 0x5c0);
};
