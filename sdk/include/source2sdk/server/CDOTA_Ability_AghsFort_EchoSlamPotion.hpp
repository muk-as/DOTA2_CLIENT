#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Item.hpp"

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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_EchoSlamPotion : public source2sdk::server::CDOTA_Item
        {
        public:
            std::int32_t echo_slam_damage_range; // 0x688            
            std::int32_t echo_slam_echo_search_range; // 0x68c            
            std::int32_t echo_slam_echo_range; // 0x690            
            std::int32_t echo_slam_echo_damage; // 0x694            
            std::int32_t echo_slam_initial_damage; // 0x698            
            float spend_charge_delay; // 0x69c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_EchoSlamPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_AghsFort_EchoSlamPotion) == 0x6a0);
    };
};
