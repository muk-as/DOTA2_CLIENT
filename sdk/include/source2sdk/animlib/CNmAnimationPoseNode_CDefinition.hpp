#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"

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
        class CNmAnimationPoseNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nPoseTimeValueNodeIdx; // 0x_            
            std::int16_t m_nDataSlotIdx; // 0x_            
            Range_t m_inputTimeRemapRange; // 0x_            
            float m_flUserSpecifiedTime; // 0x_            
            bool m_bUseFramesAsInput; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmAnimationPoseNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmAnimationPoseNode_CDefinition) == 0x_);
    };
};
