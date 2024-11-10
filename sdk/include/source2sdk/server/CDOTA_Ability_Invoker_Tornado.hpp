#pragma once
#include "source2sdk/server/CDOTA_Ability_Invoker_InvokedBase.hpp"
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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_Tornado : public server::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        int32_t vision_distance; // 0x5d8        
        float end_vision_duration; // 0x5dc        
        float lift_duration; // 0x5e0        
        float base_damage; // 0x5e4        
        float quas_damage; // 0x5e8        
        float wex_damage; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5f0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Tornado because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_Tornado) == 0x5f8);
};
