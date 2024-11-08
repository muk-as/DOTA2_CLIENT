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
    class C_DOTA_Ability_VengefulSpirit_Nether_Swap : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nFXIndex; // 0x600        
        int32_t damage; // 0x604        
        float damage_reduction; // 0x608        
        float damage_reduction_duration; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_VengefulSpirit_Nether_Swap because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_VengefulSpirit_Nether_Swap) == 0x610);
};
