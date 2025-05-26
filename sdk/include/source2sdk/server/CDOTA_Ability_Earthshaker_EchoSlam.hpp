#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Earthshaker_EchoSlam : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float echo_slam_damage_range; // 0x5c0            
            float echo_slam_echo_search_range; // 0x5c4            
            float echo_slam_echo_range; // 0x5c8            
            float echo_slam_echo_damage; // 0x5cc            
            float echo_slam_initial_damage; // 0x5d0            
            uint8_t _pad05d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Earthshaker_EchoSlam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Earthshaker_EchoSlam) == 0x5d8);
    };
};
