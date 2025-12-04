#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_EchoSlamPotion : public source2sdk::client::C_DOTA_Item
        {
        public:
            std::int32_t echo_slam_damage_range; // 0x_            
            std::int32_t echo_slam_echo_search_range; // 0x_            
            std::int32_t echo_slam_echo_range; // 0x_            
            std::int32_t echo_slam_echo_damage; // 0x_            
            std::int32_t echo_slam_initial_damage; // 0x_            
            float spend_charge_delay; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_EchoSlamPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_EchoSlamPotion) == 0x_);
    };
};
