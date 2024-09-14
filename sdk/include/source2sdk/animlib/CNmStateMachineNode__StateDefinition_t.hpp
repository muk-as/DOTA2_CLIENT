#pragma once
#include "source2sdk/animlib/CNmStateMachineNode__TransitionDefinition_t.hpp"
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
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmStateMachineNode__StateDefinition_t
    {
    public:
        int16_t m_nStateNodeIdx; // 0x0        
        int16_t m_nEntryConditionNodeIdx; // 0x2        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_transitionDefinitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<animlib::CNmStateMachineNode__TransitionDefinition_t,5> m_transitionDefinitions;
        char m_transitionDefinitions[0x30]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmStateMachineNode__StateDefinition_t, m_nStateNodeIdx) == 0x0);
    static_assert(offsetof(CNmStateMachineNode__StateDefinition_t, m_nEntryConditionNodeIdx) == 0x2);
    static_assert(offsetof(CNmStateMachineNode__StateDefinition_t, m_transitionDefinitions) == 0x8);
    
    static_assert(sizeof(CNmStateMachineNode__StateDefinition_t) == 0x38);
};
