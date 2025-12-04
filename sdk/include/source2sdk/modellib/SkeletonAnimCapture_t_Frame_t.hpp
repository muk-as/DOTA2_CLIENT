#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/SkeletonAnimCapture_t_FrameStamp_t.hpp"

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
        struct SkeletonAnimCapture_t_Frame_t
        {
        public:
            float m_flTime; // 0x_            
            source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t m_Stamp; // 0x_            
            CTransform m_Transform; // 0x_            
            bool m_bTeleport; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_CompositeBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_CompositeBones;
            char m_CompositeBones[0x_]; // 0x_            
            // m_SimStateBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_SimStateBones;
            char m_SimStateBones[0x_]; // 0x_            
            // m_FeModelAnims has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_FeModelAnims;
            char m_FeModelAnims[0x_]; // 0x_            
            // m_FeModelPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorAligned> m_FeModelPos;
            char m_FeModelPos[0x_]; // 0x_            
            // m_FlexControllerWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_FlexControllerWeights;
            char m_FlexControllerWeights[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_flTime) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_Stamp) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_Transform) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_bTeleport) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_CompositeBones) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_SimStateBones) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_FeModelAnims) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_FeModelPos) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_FlexControllerWeights) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t) == 0x_);
    };
};
