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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTransitionNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nTargetStateNodeIdx; // 0x10            
            std::int16_t m_nDurationOverrideNodeIdx; // 0x12            
            std::int16_t m_syncEventOffsetOverrideNodeIdx; // 0x14            
            std::int16_t m_startBoneMaskNodeIdx; // 0x16            
            float m_flDuration; // 0x18            
            source2sdk::animlib::NmPercent_t m_boneMaskBlendInTimePercentage; // 0x1c            
            float m_syncEventOffset; // 0x20            
            source2sdk::animlib::CNmBitFlags m_transitionOptions; // 0x24            
            std::int16_t m_targetSyncIDNodeIdx; // 0x28            
            source2sdk::animlib::NmEasingOperation_t m_blendWeightEasing; // 0x2a            
            source2sdk::animlib::NmRootMotionBlendMode_t m_rootMotionBlend; // 0x2b            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTransitionNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTransitionNode_CDefinition) == 0x30);
    };
};
