#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmStateMachineNode_TransitionDefinition_t
        {
        public:
            std::int16_t m_nTargetStateIdx; // 0x_            
            std::int16_t m_nConditionNodeIdx; // 0x_            
            std::int16_t m_nTransitionNodeIdx; // 0x_            
            bool m_bCanBeForced; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_nTargetStateIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_nConditionNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_nTransitionNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_bCanBeForced) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t) == 0x_);
    };
};
