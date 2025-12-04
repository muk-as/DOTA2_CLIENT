#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"

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
        class CNmRootMotionOverrideNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            std::int16_t m_desiredMovingVelocityNodeIdx; // 0x_            
            std::int16_t m_desiredFacingDirectionNodeIdx; // 0x_            
            std::int16_t m_linearVelocityLimitNodeIdx; // 0x_            
            std::int16_t m_angularVelocityLimitNodeIdx; // 0x_            
            float m_maxLinearVelocity; // 0x_            
            float m_maxAngularVelocityRadians; // 0x_            
            source2sdk::animlib::CNmBitFlags m_overrideFlags; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmRootMotionOverrideNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmRootMotionOverrideNode_CDefinition) == 0x_);
    };
};
