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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Undying_Decay : public server::CDOTABaseAbility
    {
    public:
        int32_t decay_damage; // 0x5a0        
        float radius; // 0x5a4        
        float decay_duration; // 0x5a8        
        int32_t str_steal; // 0x5ac        
        float creep_damage_multiplier; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Undying_Decay because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Undying_Decay) == 0x5b8);
};
