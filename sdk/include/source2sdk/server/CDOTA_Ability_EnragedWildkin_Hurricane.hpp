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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_EnragedWildkin_Hurricane : public server::CDOTABaseAbility
    {
    public:
        float distance; // 0x5c8        
        Vector m_vEndpoint; // 0x5cc        
        Vector m_vDashPosition; // 0x5d8        
        Vector m_vFacePosition; // 0x5e4        
        Vector m_vTravelDir; // 0x5f0        
        float m_fTravelDistance; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EnragedWildkin_Hurricane because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EnragedWildkin_Hurricane) == 0x600);
};
