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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Clinkz_BurningBarrage : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5d8        
        int32_t m_iArrowProjectile; // 0x5e4        
        int32_t m_nFXIndex; // 0x5e8        
        float arrow_speed; // 0x5ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Clinkz_BurningBarrage because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Clinkz_BurningBarrage) == 0x5f0);
};
