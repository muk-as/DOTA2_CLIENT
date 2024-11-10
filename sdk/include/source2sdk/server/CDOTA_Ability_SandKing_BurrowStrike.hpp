#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_SandKing_BurrowStrike : public server::CDOTABaseAbility
    {
    public:
        float burrow_width; // 0x5c8        
        int32_t burrow_speed; // 0x5cc        
        int32_t burrow_speed_scepter; // 0x5d0        
        float burrow_anim_time; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_SandKing_BurrowStrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_SandKing_BurrowStrike) == 0x5d8);
};
