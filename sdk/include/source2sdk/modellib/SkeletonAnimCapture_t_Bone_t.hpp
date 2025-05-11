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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SkeletonAnimCapture_t_Bone_t
        {
        public:
            CUtlString m_Name; // 0x0            
            uint8_t _pad0008[0x8]; // 0x8
            CTransform m_BindPose; // 0x10            
            std::int32_t m_nParent; // 0x30            
            uint8_t _pad0034[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t, m_BindPose) == 0x10);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t, m_nParent) == 0x30);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonAnimCapture_t_Bone_t) == 0x40);
    };
};
