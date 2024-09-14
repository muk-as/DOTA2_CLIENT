#pragma once
#include "source2sdk/animlib/NmStateEventTypeCondition_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmStateEventConditionNode__Condition_t
    {
    public:
        CGlobalSymbol m_eventID; // 0x0        
        animlib::NmStateEventTypeCondition_t m_eventTypeCondition; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmStateEventConditionNode__Condition_t, m_eventID) == 0x0);
    static_assert(offsetof(CNmStateEventConditionNode__Condition_t, m_eventTypeCondition) == 0x8);
    
    static_assert(sizeof(CNmStateEventConditionNode__Condition_t) == 0x10);
};
