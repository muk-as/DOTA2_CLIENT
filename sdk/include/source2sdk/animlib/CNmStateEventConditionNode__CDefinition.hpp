#pragma once
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
#include "source2sdk/animlib/CNmStateEventConditionNode__Condition_t.hpp"
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
    // Size: 0x80
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmStateEventConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        int16_t m_nSourceStateNodeIdx; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x12[0x2]; // 0x12
        animlib::CNmBitFlags m_eventConditionRules; // 0x14        
        // m_conditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<animlib::CNmStateEventConditionNode__Condition_t,5> m_conditions;
        char m_conditions[0x68]; // 0x18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmStateEventConditionNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmStateEventConditionNode__CDefinition) == 0x80);
};
