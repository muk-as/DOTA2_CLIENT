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
    // Size: 0x7d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "float32 m_flLightScale"
    // static metadata: MNetworkVarNames "float32 m_Radius"
    #pragma pack(push, 1)
    class CSpotlightEnd : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flLightScale; // 0x7b0        
        // metadata: MNetworkEnable
        float m_Radius; // 0x7b4        
        Vector m_vSpotlightDir; // 0x7b8        
        Vector m_vSpotlightOrg; // 0x7c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSpotlightEnd because it is not a standard-layout class
    static_assert(sizeof(CSpotlightEnd) == 0x7d0);
};
