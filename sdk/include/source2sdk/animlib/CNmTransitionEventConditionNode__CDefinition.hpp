#pragma once
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
#include "source2sdk/animlib/NmTransitionRuleCondition_t.hpp"
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
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmTransitionEventConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        CGlobalSymbol m_requireRuleID; // 0x10        
        animlib::CNmBitFlags m_eventConditionRules; // 0x18        
        int16_t m_nSourceStateNodeIdx; // 0x1c        
        animlib::NmTransitionRuleCondition_t m_ruleCondition; // 0x1e        
        [[maybe_unused]] std::uint8_t pad_0x1f[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTransitionEventConditionNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmTransitionEventConditionNode__CDefinition) == 0x20);
};
