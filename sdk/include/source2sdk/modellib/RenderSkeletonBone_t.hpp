#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/SkeletonBoneBounds_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RenderSkeletonBone_t
        {
        public:
            CUtlString m_boneName; // 0x_            
            CUtlString m_parentName; // 0x_            
            matrix3x4_t m_invBindPose; // 0x_            
            source2sdk::modellib::SkeletonBoneBounds_t m_bbox; // 0x_            
            float m_flSphereRadius; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::RenderSkeletonBone_t, m_boneName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderSkeletonBone_t, m_parentName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderSkeletonBone_t, m_invBindPose) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderSkeletonBone_t, m_bbox) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderSkeletonBone_t, m_flSphereRadius) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::RenderSkeletonBone_t) == 0x_);
    };
};
