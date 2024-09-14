#pragma once
#include "source2sdk/modellib/SkeletonAnimCapture_t__Bone_t.hpp"
#include "source2sdk/modellib/SkeletonAnimCapture_t__Frame_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct SkeletonAnimCapture_t
    {
    public:
        CEntityIndex m_nEntIndex; // 0x0        
        CEntityIndex m_nEntParent; // 0x4        
        // m_ImportedCollision has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_ImportedCollision;
        char m_ImportedCollision[0x18]; // 0x8        
        CUtlString m_ModelName; // 0x20        
        CUtlString m_CaptureName; // 0x28        
        // m_ModelBindPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::SkeletonAnimCapture_t__Bone_t> m_ModelBindPose;
        char m_ModelBindPose[0x18]; // 0x30        
        // m_FeModelInitPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::SkeletonAnimCapture_t__Bone_t> m_FeModelInitPose;
        char m_FeModelInitPose[0x18]; // 0x48        
        int32_t m_nFlexControllers; // 0x60        
        bool m_bPredicted; // 0x64        
        [[maybe_unused]] std::uint8_t pad_0x65[0x43]; // 0x65
        // m_Frames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::SkeletonAnimCapture_t__Frame_t> m_Frames;
        char m_Frames[0x18]; // 0xa8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SkeletonAnimCapture_t, m_nEntIndex) == 0x0);
    static_assert(offsetof(SkeletonAnimCapture_t, m_nEntParent) == 0x4);
    static_assert(offsetof(SkeletonAnimCapture_t, m_ImportedCollision) == 0x8);
    static_assert(offsetof(SkeletonAnimCapture_t, m_ModelName) == 0x20);
    static_assert(offsetof(SkeletonAnimCapture_t, m_CaptureName) == 0x28);
    static_assert(offsetof(SkeletonAnimCapture_t, m_ModelBindPose) == 0x30);
    static_assert(offsetof(SkeletonAnimCapture_t, m_FeModelInitPose) == 0x48);
    static_assert(offsetof(SkeletonAnimCapture_t, m_nFlexControllers) == 0x60);
    static_assert(offsetof(SkeletonAnimCapture_t, m_bPredicted) == 0x64);
    static_assert(offsetof(SkeletonAnimCapture_t, m_Frames) == 0xa8);
    
    static_assert(sizeof(SkeletonAnimCapture_t) == 0xc0);
};
