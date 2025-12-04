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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SkeletonAnimCapture_t_Bone_t
        {
        public:
            CUtlString m_Name; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_BindPose; // 0x_            
            std::int32_t m_nParent; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t, m_BindPose) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t, m_nParent) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t) == 0x_);
    };
};
