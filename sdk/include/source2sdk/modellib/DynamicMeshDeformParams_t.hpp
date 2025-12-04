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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct DynamicMeshDeformParams_t
        {
        public:
            float m_flTensionCompressScale; // 0x_            
            float m_flTensionStretchScale; // 0x_            
            bool m_bRecomputeSmoothNormalsAfterAnimation; // 0x_            
            bool m_bComputeDynamicMeshTensionAfterAnimation; // 0x_            
            bool m_bSmoothNormalsAcrossUvSeams; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_flTensionCompressScale) == 0x_);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_flTensionStretchScale) == 0x_);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_bRecomputeSmoothNormalsAfterAnimation) == 0x_);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_bComputeDynamicMeshTensionAfterAnimation) == 0x_);
        static_assert(offsetof(source2sdk::modellib::DynamicMeshDeformParams_t, m_bSmoothNormalsAcrossUvSeams) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::DynamicMeshDeformParams_t) == 0x_);
    };
};
