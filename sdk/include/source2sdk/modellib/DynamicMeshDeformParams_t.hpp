#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
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
            bool m_bSmoothNormalsAcrossUvSeams; // 0xa            
            uint8_t _pad000b[0x1];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_flTensionCompressScale) == 0x0);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_flTensionStretchScale) == 0x4);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_bRecomputeSmoothNormalsAfterAnimation) == 0x8);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_bComputeDynamicMeshTensionAfterAnimation) == 0x9);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_bSmoothNormalsAcrossUvSeams) == 0xa);
        
        static_assert(sizeof(source2sdk::modellib::DynamicMeshDeformParams_t) == 0xc);
    };
};
