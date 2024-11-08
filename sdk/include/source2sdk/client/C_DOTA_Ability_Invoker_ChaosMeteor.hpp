#pragma once
#include "source2sdk/client/CDOTA_Ability_Invoker_InvokedBase.hpp"
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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Invoker_ChaosMeteor : public client::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        int32_t area_of_effect; // 0x610        
        float damage_interval; // 0x614        
        int32_t vision_distance; // 0x618        
        float end_vision_duration; // 0x61c        
        float main_damage; // 0x620        
        float burn_duration; // 0x624        
        float burn_dps; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_ChaosMeteor because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Invoker_ChaosMeteor) == 0x638);
};
