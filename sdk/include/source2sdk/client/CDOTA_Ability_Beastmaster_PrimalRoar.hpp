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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Beastmaster_PrimalRoar : public client::C_DOTABaseAbility
    {
    public:
        float duration; // 0x5d8        
        float slow_duration; // 0x5dc        
        int32_t side_damage; // 0x5e0        
        int32_t damage_radius; // 0x5e4        
        int32_t path_width; // 0x5e8        
        float push_duration; // 0x5ec        
        float push_distance; // 0x5f0        
        int32_t damage; // 0x5f4        
        float movement_speed_duration; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Beastmaster_PrimalRoar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Beastmaster_PrimalRoar) == 0x600);
};
