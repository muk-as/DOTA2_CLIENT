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
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_ShadowShaman_Serpentine : public server::CDOTABaseAbility
    {
    public:
        int32_t length; // 0x5a0        
        int32_t count; // 0x5a4        
        Vector m_vStartPosition; // 0x5a8        
        Vector m_vEndPosition; // 0x5b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_ShadowShaman_Serpentine because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_ShadowShaman_Serpentine) == 0x5c0);
};
