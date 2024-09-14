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
    // Size: 0x18
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmOrientationWarpNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        int16_t m_nClipReferenceNodeIdx; // 0x10        
        int16_t m_nTargetValueNodeIdx; // 0x12        
        bool m_bIsOffsetNode; // 0x14        
        bool m_bIsOffsetRelativeToCharacter; // 0x15        
        animlib::CNmRootMotionData__SamplingMode_t m_samplingMode; // 0x16        
        [[maybe_unused]] std::uint8_t pad_0x17[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmOrientationWarpNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmOrientationWarpNode__CDefinition) == 0x18);
};
