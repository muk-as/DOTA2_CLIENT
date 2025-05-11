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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmAnimationPoseNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nPoseTimeValueNodeIdx; // 0x10            
            std::int16_t m_nDataSlotIdx; // 0x12            
            Range_t m_inputTimeRemapRange; // 0x14            
            float m_flUserSpecifiedTime; // 0x1c            
            bool m_bUseFramesAsInput; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmAnimationPoseNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmAnimationPoseNode_CDefinition) == 0x28);
    };
};
