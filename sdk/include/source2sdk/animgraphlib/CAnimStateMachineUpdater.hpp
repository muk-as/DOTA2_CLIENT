#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CStateUpdateData.hpp"
#include "source2sdk/animgraphlib/CTransitionUpdateData.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimStateMachineUpdater
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_states has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CStateUpdateData> m_states;
            char m_states[0x18]; // 0x8            
            // m_transitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CTransitionUpdateData> m_transitions;
            char m_transitions[0x18]; // 0x20            
            uint8_t _pad0038[0x18]; // 0x38
            std::int32_t m_startStateIndex; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimStateMachineUpdater, m_states) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimStateMachineUpdater, m_transitions) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimStateMachineUpdater, m_startStateIndex) == 0x50);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimStateMachineUpdater) == 0x58);
    };
};
