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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_ChaosMeteor : public server::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        int32_t area_of_effect; // 0x5d8        
        float damage_interval; // 0x5dc        
        int32_t vision_distance; // 0x5e0        
        float end_vision_duration; // 0x5e4        
        float main_damage; // 0x5e8        
        float burn_duration; // 0x5ec        
        float burn_dps; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_ChaosMeteor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_ChaosMeteor) == 0x600);
};
