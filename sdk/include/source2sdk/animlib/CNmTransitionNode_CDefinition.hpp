#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"
#include "source2sdk/animlib/NmEasingOperation_t.hpp"
#include "source2sdk/animlib/NmPercent_t.hpp"
#include "source2sdk/animlib/NmRootMotionBlendMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTransitionNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nTargetStateNodeIdx; // 0x_            
            std::int16_t m_nDurationOverrideNodeIdx; // 0x_            
            std::int16_t m_timeOffsetOverrideNodeIdx; // 0x_            
            std::int16_t m_startBoneMaskNodeIdx; // 0x_            
            float m_flDuration; // 0x_            
            source2sdk::animlib::NmPercent_t m_boneMaskBlendInTimePercentage; // 0x_            
            float m_flTimeOffset; // 0x_            
            source2sdk::animlib::CNmBitFlags m_transitionOptions; // 0x_            
            std::int16_t m_targetSyncIDNodeIdx; // 0x_            
            source2sdk::animlib::NmEasingOperation_t m_blendWeightEasing; // 0x_            
            source2sdk::animlib::NmRootMotionBlendMode_t m_rootMotionBlend; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTransitionNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTransitionNode_CDefinition) == 0x_);
    };
};
