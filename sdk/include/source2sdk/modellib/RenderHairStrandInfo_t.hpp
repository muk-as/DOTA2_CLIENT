#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x24
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RenderHairStrandInfo_t
    {
    public:
        uint32_t m_nGuideHairIndices_nSurfaceTriIndex[2]; // 0x0        
        uint16_t m_vGuideBary_vBaseBary[4]; // 0x8        
        uint16_t m_vRootOffset_flLengthScale[4]; // 0x10        
        uint16_t m_nPackedBaseUv[2]; // 0x18        
        uint32_t m_nPackedSurfaceNormalOs; // 0x1c        
        uint32_t m_nPackedSurfaceTangentOs; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RenderHairStrandInfo_t, m_nGuideHairIndices_nSurfaceTriIndex) == 0x0);
    static_assert(offsetof(RenderHairStrandInfo_t, m_vGuideBary_vBaseBary) == 0x8);
    static_assert(offsetof(RenderHairStrandInfo_t, m_vRootOffset_flLengthScale) == 0x10);
    static_assert(offsetof(RenderHairStrandInfo_t, m_nPackedBaseUv) == 0x18);
    static_assert(offsetof(RenderHairStrandInfo_t, m_nPackedSurfaceNormalOs) == 0x1c);
    static_assert(offsetof(RenderHairStrandInfo_t, m_nPackedSurfaceTangentOs) == 0x20);
    
    static_assert(sizeof(RenderHairStrandInfo_t) == 0x24);
};
