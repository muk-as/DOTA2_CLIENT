#pragma once
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
#include "source2sdk/animlib/CNmRootMotionData__SamplingMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmTargetWarpNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        int16_t m_nClipReferenceNodeIdx; // 0x10        
        int16_t m_nTargetValueNodeIdx; // 0x12        
        animlib::CNmRootMotionData__SamplingMode_t m_samplingMode; // 0x14        
        bool m_bAllowTargetUpdate; // 0x15        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2]; // 0x16
        float m_flSamplingPositionErrorThresholdSq; // 0x18        
        float m_flMaxTangentLength; // 0x1c        
        float m_flLerpFallbackDistanceThreshold; // 0x20        
        float m_flTargetUpdateDistanceThreshold; // 0x24        
        float m_flTargetUpdateAngleThresholdRadians; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTargetWarpNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmTargetWarpNode__CDefinition) == 0x30);
};
