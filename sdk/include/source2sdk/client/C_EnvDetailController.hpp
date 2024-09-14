#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flFadeStartDist"
    // static metadata: MNetworkVarNames "float32 m_flFadeEndDist"
    #pragma pack(push, 1)
    class C_EnvDetailController : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flFadeStartDist; // 0x538        
        // metadata: MNetworkEnable
        float m_flFadeEndDist; // 0x53c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvDetailController because it is not a standard-layout class
    static_assert(sizeof(C_EnvDetailController) == 0x540);
};
