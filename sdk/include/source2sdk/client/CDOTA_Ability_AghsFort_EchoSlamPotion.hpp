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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x668
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_EchoSlamPotion : public source2sdk::client::C_DOTA_Item
        {
        public:
            std::int32_t echo_slam_damage_range; // 0x650            
            std::int32_t echo_slam_echo_search_range; // 0x654            
            std::int32_t echo_slam_echo_range; // 0x658            
            std::int32_t echo_slam_echo_damage; // 0x65c            
            std::int32_t echo_slam_initial_damage; // 0x660            
            float spend_charge_delay; // 0x664            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_EchoSlamPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_EchoSlamPotion) == 0x668);
    };
};
