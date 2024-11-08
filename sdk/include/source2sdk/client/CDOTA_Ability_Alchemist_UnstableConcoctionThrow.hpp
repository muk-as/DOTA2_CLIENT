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
    class CDOTA_Ability_Alchemist_UnstableConcoctionThrow : public client::C_DOTABaseAbility
    {
    public:
        float m_fCookTime; // 0x600        
        Vector m_vProjectileLoc; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Alchemist_UnstableConcoctionThrow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Alchemist_UnstableConcoctionThrow) == 0x610);
};
