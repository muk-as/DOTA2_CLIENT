#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoolValueNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmTimeConditionNode_ComparisonType_t.hpp"
#include "source2sdk/animlib/CNmTimeConditionNode_Operator_t.hpp"

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
        class CNmTimeConditionNode_CDefinition : public source2sdk::animlib::CNmBoolValueNode_CDefinition
        {
        public:
            std::int16_t m_sourceStateNodeIdx; // 0x10            
            std::int16_t m_nInputValueNodeIdx; // 0x12            
            float m_flComparand; // 0x14            
            source2sdk::animlib::CNmTimeConditionNode_ComparisonType_t m_type; // 0x18            
            source2sdk::animlib::CNmTimeConditionNode_Operator_t m_operator; // 0x19            
            uint8_t _pad001a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTimeConditionNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTimeConditionNode_CDefinition) == 0x20);
    };
};
