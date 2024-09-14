#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flFadeStartDist"
    // static metadata: MNetworkVarNames "float32 m_flFadeEndDist"
    #pragma pack(push, 1)
    class CEnvDetailController : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flFadeStartDist; // 0x4b8        
        // metadata: MNetworkEnable
        float m_flFadeEndDist; // 0x4bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvDetailController because it is not a standard-layout class
    static_assert(sizeof(CEnvDetailController) == 0x4c0);
};
