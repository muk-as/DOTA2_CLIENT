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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Invoker_DeafeningBlast : public client::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        float end_vision_duration; // 0x5e8        
        float damage; // 0x5ec        
        float knockback_duration; // 0x5f0        
        float disarm_duration; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_DeafeningBlast because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Invoker_DeafeningBlast) == 0x5f8);
};
