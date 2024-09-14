#pragma once
#include "source2sdk/worldrenderer/ObjectTypeFlags_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AggregateMeshInfo_t
    {
    public:
        uint32_t m_nVisClusterMemberOffset; // 0x0        
        uint8_t m_nVisClusterMemberCount; // 0x4        
        bool m_bHasTransform; // 0x5        
        int16_t m_nDrawCallIndex; // 0x6        
        int16_t m_nLODSetupIndex; // 0x8        
        uint8_t m_nLODGroupMask; // 0xa        
        Color m_vTintColor; // 0xb        
        [[maybe_unused]] std::uint8_t pad_0x0f[0x1]; // 0xf
        worldrenderer::ObjectTypeFlags_t m_objectFlags; // 0x10        
        int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AggregateMeshInfo_t, m_nVisClusterMemberOffset) == 0x0);
    static_assert(offsetof(AggregateMeshInfo_t, m_nVisClusterMemberCount) == 0x4);
    static_assert(offsetof(AggregateMeshInfo_t, m_bHasTransform) == 0x5);
    static_assert(offsetof(AggregateMeshInfo_t, m_nDrawCallIndex) == 0x6);
    static_assert(offsetof(AggregateMeshInfo_t, m_nLODSetupIndex) == 0x8);
    static_assert(offsetof(AggregateMeshInfo_t, m_nLODGroupMask) == 0xa);
    static_assert(offsetof(AggregateMeshInfo_t, m_vTintColor) == 0xb);
    static_assert(offsetof(AggregateMeshInfo_t, m_objectFlags) == 0x10);
    static_assert(offsetof(AggregateMeshInfo_t, m_nLightProbeVolumePrecomputedHandshake) == 0x14);
    
    static_assert(sizeof(AggregateMeshInfo_t) == 0x18);
};
