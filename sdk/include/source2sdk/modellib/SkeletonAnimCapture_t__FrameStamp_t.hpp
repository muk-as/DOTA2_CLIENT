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
    // Size: 0x1c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct SkeletonAnimCapture_t__FrameStamp_t
    {
    public:
        float m_flTime; // 0x0        
        float m_flEntitySimTime; // 0x4        
        bool m_bTeleportTick; // 0x8        
        bool m_bPredicted; // 0x9        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2]; // 0xa
        float m_flCurTime; // 0xc        
        float m_flRealTime; // 0x10        
        int32_t m_nFrameCount; // 0x14        
        int32_t m_nTickCount; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_flTime) == 0x0);
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_flEntitySimTime) == 0x4);
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_bTeleportTick) == 0x8);
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_bPredicted) == 0x9);
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_flCurTime) == 0xc);
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_flRealTime) == 0x10);
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_nFrameCount) == 0x14);
    static_assert(offsetof(SkeletonAnimCapture_t__FrameStamp_t, m_nTickCount) == 0x18);
    
    static_assert(sizeof(SkeletonAnimCapture_t__FrameStamp_t) == 0x1c);
};
