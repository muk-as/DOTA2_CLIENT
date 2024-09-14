#pragma once
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
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
    // Size: 0x28
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmAnimationPoseNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        int16_t m_nPoseTimeValueNodeIdx; // 0x10        
        int16_t m_nDataSlotIdx; // 0x12        
        Range_t m_inputTimeRemapRange; // 0x14        
        float m_flUserSpecifiedTime; // 0x1c        
        bool m_bUseFramesAsInput; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmAnimationPoseNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmAnimationPoseNode__CDefinition) == 0x28);
};
