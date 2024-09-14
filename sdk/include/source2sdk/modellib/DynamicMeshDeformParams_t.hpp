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
    // Size: 0xc
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct DynamicMeshDeformParams_t
    {
    public:
        float m_flTensionCompressScale; // 0x0        
        float m_flTensionStretchScale; // 0x4        
        bool m_bRecomputeSmoothNormalsAfterAnimation; // 0x8        
        bool m_bComputeDynamicMeshTensionAfterAnimation; // 0x9        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DynamicMeshDeformParams_t, m_flTensionCompressScale) == 0x0);
    static_assert(offsetof(DynamicMeshDeformParams_t, m_flTensionStretchScale) == 0x4);
    static_assert(offsetof(DynamicMeshDeformParams_t, m_bRecomputeSmoothNormalsAfterAnimation) == 0x8);
    static_assert(offsetof(DynamicMeshDeformParams_t, m_bComputeDynamicMeshTensionAfterAnimation) == 0x9);
    
    static_assert(sizeof(DynamicMeshDeformParams_t) == 0xc);
};
