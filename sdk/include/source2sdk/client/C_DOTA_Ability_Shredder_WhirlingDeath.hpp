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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Shredder_WhirlingDeath : public client::C_DOTABaseAbility
    {
    public:
        int32_t whirling_radius; // 0x5d8        
        int32_t whirling_damage; // 0x5dc        
        float whirling_tick; // 0x5e0        
        float duration; // 0x5e4        
        int32_t tree_damage_scale; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Shredder_WhirlingDeath because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Shredder_WhirlingDeath) == 0x5f0);
};
