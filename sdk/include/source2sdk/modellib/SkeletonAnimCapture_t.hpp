#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/SkeletonAnimCapture_t_Bone_t.hpp"
#include "source2sdk/modellib/SkeletonAnimCapture_t_Frame_t.hpp"

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
        struct SkeletonAnimCapture_t
        {
        public:
            CEntityIndex m_nEntIndex; // 0x_            
            CEntityIndex m_nEntParent; // 0x_            
            // m_ImportedCollision has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_ImportedCollision;
            char m_ImportedCollision[0x_]; // 0x_            
            CUtlString m_ModelName; // 0x_            
            CUtlString m_CaptureName; // 0x_            
            // m_ModelBindPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::SkeletonAnimCapture_t_Bone_t> m_ModelBindPose;
            char m_ModelBindPose[0x_]; // 0x_            
            // m_FeModelInitPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::SkeletonAnimCapture_t_Bone_t> m_FeModelInitPose;
            char m_FeModelInitPose[0x_]; // 0x_            
            std::int32_t m_nFlexControllers; // 0x_            
            bool m_bPredicted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Frames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::SkeletonAnimCapture_t_Frame_t> m_Frames;
            char m_Frames[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_nEntIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_nEntParent) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_ImportedCollision) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_ModelName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_CaptureName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_ModelBindPose) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_FeModelInitPose) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_nFlexControllers) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_bPredicted) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t, m_Frames) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonAnimCapture_t) == 0x_);
    };
};
