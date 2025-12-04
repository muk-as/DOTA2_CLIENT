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
        struct SkeletonAnimCapture_t_FrameStamp_t
        {
        public:
            float m_flTime; // 0x_            
            float m_flEntitySimTime; // 0x_            
            bool m_bTeleportTick; // 0x_            
            bool m_bPredicted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flCurTime; // 0x_            
            float m_flRealTime; // 0x_            
            std::int32_t m_nFrameCount; // 0x_            
            std::int32_t m_nTickCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_flTime) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_flEntitySimTime) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_bTeleportTick) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_bPredicted) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_flCurTime) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_flRealTime) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_nFrameCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t, m_nTickCount) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t) == 0x_);
    };
};
