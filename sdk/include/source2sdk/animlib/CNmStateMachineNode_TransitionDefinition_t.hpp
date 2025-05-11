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
        // Registered alignment: 0x2
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmStateMachineNode_TransitionDefinition_t
        {
        public:
            std::int16_t m_nTargetStateIdx; // 0x0            
            std::int16_t m_nConditionNodeIdx; // 0x2            
            std::int16_t m_nTransitionNodeIdx; // 0x4            
            bool m_bCanBeForced; // 0x6            
            uint8_t _pad0007[0x1];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_nTargetStateIdx) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_nConditionNodeIdx) == 0x2);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_nTransitionNodeIdx) == 0x4);
        static_assert(offsetof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t, m_bCanBeForced) == 0x6);
        
        static_assert(sizeof(source2sdk::animlib::CNmStateMachineNode_TransitionDefinition_t) == 0x8);
    };
};
