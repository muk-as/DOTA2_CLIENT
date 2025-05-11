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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmRootMotionOverrideNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            std::int16_t m_desiredMovingVelocityNodeIdx; // 0x18            
            std::int16_t m_desiredFacingDirectionNodeIdx; // 0x1a            
            std::int16_t m_linearVelocityLimitNodeIdx; // 0x1c            
            std::int16_t m_angularVelocityLimitNodeIdx; // 0x1e            
            float m_maxLinearVelocity; // 0x20            
            float m_maxAngularVelocityRadians; // 0x24            
            source2sdk::animlib::CNmBitFlags m_overrideFlags; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmRootMotionOverrideNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmRootMotionOverrideNode_CDefinition) == 0x30);
    };
};
