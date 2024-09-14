#pragma once
#include "source2sdk/modellib/SkeletonBoneBounds_t.hpp"
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
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RenderSkeletonBone_t
    {
    public:
        CUtlString m_boneName; // 0x0        
        CUtlString m_parentName; // 0x8        
        matrix3x4_t m_invBindPose; // 0x10        
        modellib::SkeletonBoneBounds_t m_bbox; // 0x40        
        float m_flSphereRadius; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RenderSkeletonBone_t, m_boneName) == 0x0);
    static_assert(offsetof(RenderSkeletonBone_t, m_parentName) == 0x8);
    static_assert(offsetof(RenderSkeletonBone_t, m_invBindPose) == 0x10);
    static_assert(offsetof(RenderSkeletonBone_t, m_bbox) == 0x40);
    static_assert(offsetof(RenderSkeletonBone_t, m_flSphereRadius) == 0x58);
    
    static_assert(sizeof(RenderSkeletonBone_t) == 0x60);
};
