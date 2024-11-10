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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Shredder_WhirlingDeath : public server::CDOTABaseAbility
    {
    public:
        int32_t whirling_radius; // 0x5c8        
        int32_t whirling_damage; // 0x5cc        
        float whirling_tick; // 0x5d0        
        float duration; // 0x5d4        
        int32_t tree_damage_scale; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Shredder_WhirlingDeath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Shredder_WhirlingDeath) == 0x5e0);
};
