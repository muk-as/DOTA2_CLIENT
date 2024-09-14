#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x7a8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flLightScale"
    // static metadata: MNetworkVarNames "float32 m_Radius"
    #pragma pack(push, 1)
    class CSpotlightEnd : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flLightScale; // 0x788        
        // metadata: MNetworkEnable
        float m_Radius; // 0x78c        
        Vector m_vSpotlightDir; // 0x790        
        Vector m_vSpotlightOrg; // 0x79c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSpotlightEnd because it is not a standard-layout class
    static_assert(sizeof(CSpotlightEnd) == 0x7a8);
};
