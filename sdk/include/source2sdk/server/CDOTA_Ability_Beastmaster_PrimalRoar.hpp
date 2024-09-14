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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Beastmaster_PrimalRoar : public server::CDOTABaseAbility
    {
    public:
        float duration; // 0x5a0        
        float slow_duration; // 0x5a4        
        int32_t side_damage; // 0x5a8        
        int32_t damage_radius; // 0x5ac        
        int32_t path_width; // 0x5b0        
        float push_duration; // 0x5b4        
        float push_distance; // 0x5b8        
        int32_t damage; // 0x5bc        
        float movement_speed_duration; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Beastmaster_PrimalRoar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Beastmaster_PrimalRoar) == 0x5c8);
};
