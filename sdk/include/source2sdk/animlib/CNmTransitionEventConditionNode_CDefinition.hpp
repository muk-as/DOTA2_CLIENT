#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmBoolValueNode_CDefinition.hpp"
#include "source2sdk/animlib/NmTransitionRuleCondition_t.hpp"

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
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTransitionEventConditionNode_CDefinition : public source2sdk::animlib::CNmBoolValueNode_CDefinition
        {
        public:
            CGlobalSymbol m_requireRuleID; // 0x10            
            source2sdk::animlib::CNmBitFlags m_eventConditionRules; // 0x18            
            std::int16_t m_nSourceStateNodeIdx; // 0x1c            
            source2sdk::animlib::NmTransitionRuleCondition_t m_ruleCondition; // 0x1e            
            uint8_t _pad001f[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTransitionEventConditionNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTransitionEventConditionNode_CDefinition) == 0x20);
    };
};
