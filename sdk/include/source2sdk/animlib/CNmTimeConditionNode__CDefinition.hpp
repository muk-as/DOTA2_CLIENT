#pragma once
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
#include "source2sdk/animlib/CNmTimeConditionNode__ComparisonType_t.hpp"
#include "source2sdk/animlib/CNmTimeConditionNode__Operator_t.hpp"
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
    class CNmTimeConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        int16_t m_sourceStateNodeIdx; // 0x10        
        int16_t m_nInputValueNodeIdx; // 0x12        
        float m_flComparand; // 0x14        
        animlib::CNmTimeConditionNode__ComparisonType_t m_type; // 0x18        
        animlib::CNmTimeConditionNode__Operator_t m_operator; // 0x19        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTimeConditionNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmTimeConditionNode__CDefinition) == 0x20);
};
