#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmBoolValueNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmGraphEventConditionNode_Condition_t.hpp"

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
        class CNmGraphEventConditionNode_CDefinition : public source2sdk::animlib::CNmBoolValueNode_CDefinition
        {
        public:
            std::int16_t m_nSourceStateNodeIdx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animlib::CNmBitFlags m_eventConditionRules; // 0x_            
            // m_conditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<source2sdk::animlib::CNmGraphEventConditionNode_Condition_t,5> m_conditions;
            char m_conditions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmGraphEventConditionNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmGraphEventConditionNode_CDefinition) == 0x_);
    };
};
