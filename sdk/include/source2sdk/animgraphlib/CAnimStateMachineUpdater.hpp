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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimStateMachineUpdater
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_states has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CStateUpdateData> m_states;
            char m_states[0x_]; // 0x_            
            // m_transitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CTransitionUpdateData> m_transitions;
            char m_transitions[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_startStateIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimStateMachineUpdater, m_states) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimStateMachineUpdater, m_transitions) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimStateMachineUpdater, m_startStateIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimStateMachineUpdater) == 0x_);
    };
};
