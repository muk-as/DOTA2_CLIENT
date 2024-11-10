#pragma once
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_EchoSlamPotion : public server::CDOTA_Item
    {
    public:
        int32_t echo_slam_damage_range; // 0x670        
        int32_t echo_slam_echo_search_range; // 0x674        
        int32_t echo_slam_echo_range; // 0x678        
        int32_t echo_slam_echo_damage; // 0x67c        
        int32_t echo_slam_initial_damage; // 0x680        
        float spend_charge_delay; // 0x684        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_EchoSlamPotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_EchoSlamPotion) == 0x688);
};
