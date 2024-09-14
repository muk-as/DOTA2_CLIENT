#pragma once
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmPassthroughNode__CDefinition.hpp"
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
    class CNmRootMotionOverrideNode__CDefinition : public animlib::CNmPassthroughNode__CDefinition
    {
    public:
        int16_t m_desiredMovingVelocityNodeIdx; // 0x18        
        int16_t m_desiredFacingDirectionNodeIdx; // 0x1a        
        int16_t m_linearVelocityLimitNodeIdx; // 0x1c        
        int16_t m_angularVelocityLimitNodeIdx; // 0x1e        
        float m_maxLinearVelocity; // 0x20        
        float m_maxAngularVelocityRadians; // 0x24        
        animlib::CNmBitFlags m_overrideFlags; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmRootMotionOverrideNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmRootMotionOverrideNode__CDefinition) == 0x30);
};
