#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseCursorID_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
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
        struct PulseGraphExecutionHistoryEntry_t
        {
        public:
            source2sdk::pulse_runtime_lib::PulseCursorID_t nCursorID; // 0x_            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t nEditorID; // 0x_            
            float flExecTime; // 0x_            
            std::uint32_t unFlags; // 0x_            
            PulseSymbol_t tagName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, nCursorID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, nEditorID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, flExecTime) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, unFlags) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, tagName) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t) == 0x_);
    };
};
