#pragma once
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
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
    class CNmStateCompletedConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        int16_t m_nSourceStateNodeIdx; // 0x10        
        int16_t m_nTransitionDurationOverrideNodeIdx; // 0x12        
        float m_flTransitionDurationSeconds; // 0x14        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmStateCompletedConditionNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmStateCompletedConditionNode__CDefinition) == 0x18);
};
