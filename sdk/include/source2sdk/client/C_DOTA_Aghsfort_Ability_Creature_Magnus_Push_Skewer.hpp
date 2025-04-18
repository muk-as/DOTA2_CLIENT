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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer : public client::C_DOTABaseAbility
    {
    public:
        float skewer_radius; // 0x600        
        float skewer_speed; // 0x604        
        float range; // 0x608        
        int32_t tree_radius; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer) == 0x610);
};
