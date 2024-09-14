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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Clinkz_BurningBarrage : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5a0        
        int32_t m_iArrowProjectile; // 0x5ac        
        int32_t m_nFXIndex; // 0x5b0        
        float arrow_speed; // 0x5b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Clinkz_BurningBarrage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Clinkz_BurningBarrage) == 0x5b8);
};
