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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Invoker_Tornado : public client::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        int32_t vision_distance; // 0x5e8        
        float end_vision_duration; // 0x5ec        
        float lift_duration; // 0x5f0        
        float base_damage; // 0x5f4        
        float quas_damage; // 0x5f8        
        float wex_damage; // 0x5fc        
        [[maybe_unused]] std::uint8_t pad_0x600[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_Tornado because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Invoker_Tornado) == 0x608);
};
