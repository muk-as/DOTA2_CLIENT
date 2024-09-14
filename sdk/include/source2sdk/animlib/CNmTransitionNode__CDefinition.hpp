#pragma once
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
#include "source2sdk/animlib/NmEasingOperation_t.hpp"
#include "source2sdk/animlib/NmPercent_t.hpp"
#include "source2sdk/animlib/NmRootMotionBlendMode_t.hpp"
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
    class CNmTransitionNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        int16_t m_nTargetStateNodeIdx; // 0x10        
        int16_t m_nDurationOverrideNodeIdx; // 0x12        
        int16_t m_syncEventOffsetOverrideNodeIdx; // 0x14        
        int16_t m_startBoneMaskNodeIdx; // 0x16        
        float m_flDuration; // 0x18        
        animlib::NmPercent_t m_boneMaskBlendInTimePercentage; // 0x1c        
        float m_syncEventOffset; // 0x20        
        animlib::CNmBitFlags m_transitionOptions; // 0x24        
        int16_t m_targetSyncIDNodeIdx; // 0x28        
        animlib::NmEasingOperation_t m_blendWeightEasing; // 0x2a        
        animlib::NmRootMotionBlendMode_t m_rootMotionBlend; // 0x2b        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTransitionNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmTransitionNode__CDefinition) == 0x30);
};
