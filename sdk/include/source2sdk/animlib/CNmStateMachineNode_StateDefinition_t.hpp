#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmStateMachineNode_TransitionDefinition_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmStateMachineNode_StateDefinition_t
        {
        public:
            std::int16_t m_nStateNodeIdx; // 0x_            
            std::int16_t m_nEntryConditionNodeIdx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_transitionDefinitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t,5> m_transitionDefinitions;
            char m_transitionDefinitions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_StateDefinition_t, m_nStateNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_StateDefinition_t, m_nEntryConditionNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_StateDefinition_t, m_transitionDefinitions) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmStateMachineNode_StateDefinition_t) == 0x_);
    };
};
