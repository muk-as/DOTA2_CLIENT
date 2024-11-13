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
    class CDOTA_Ability_Earthshaker_EchoSlam : public server::CDOTABaseAbility
    {
    public:
        float echo_slam_damage_range; // 0x5c8        
        int32_t echo_slam_echo_search_range; // 0x5cc        
        int32_t echo_slam_echo_range; // 0x5d0        
        int32_t echo_slam_echo_damage; // 0x5d4        
        int32_t echo_slam_initial_damage; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Earthshaker_EchoSlam because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Earthshaker_EchoSlam) == 0x5e0);
};
