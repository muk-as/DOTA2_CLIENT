#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_SandKing_BurrowStrike : public client::C_DOTABaseAbility
    {
    public:
        float burrow_width; // 0x5d8        
        int32_t burrow_speed; // 0x5dc        
        int32_t burrow_speed_scepter; // 0x5e0        
        float burrow_anim_time; // 0x5e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_SandKing_BurrowStrike because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_SandKing_BurrowStrike) == 0x5e8);
};