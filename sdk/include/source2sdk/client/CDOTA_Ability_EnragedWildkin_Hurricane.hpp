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
    class CDOTA_Ability_EnragedWildkin_Hurricane : public client::C_DOTABaseAbility
    {
    public:
        float distance; // 0x5d8        
        Vector m_vEndpoint; // 0x5dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EnragedWildkin_Hurricane because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EnragedWildkin_Hurricane) == 0x5e8);
};