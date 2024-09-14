#pragma once
#include "source2sdk/pulse_runtime_lib/PulseCursorID_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PulseGraphExecutionHistoryEntry_t
    {
    public:
        pulse_runtime_lib::PulseCursorID_t nCursorID; // 0x0        
        pulse_runtime_lib::PulseDocNodeID_t nEditorID; // 0x4        
        float flExecTime; // 0x8        
        uint32_t unFlags; // 0xc        
        CUtlSymbolLarge tagName; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PulseGraphExecutionHistoryEntry_t, nCursorID) == 0x0);
    static_assert(offsetof(PulseGraphExecutionHistoryEntry_t, nEditorID) == 0x4);
    static_assert(offsetof(PulseGraphExecutionHistoryEntry_t, flExecTime) == 0x8);
    static_assert(offsetof(PulseGraphExecutionHistoryEntry_t, unFlags) == 0xc);
    static_assert(offsetof(PulseGraphExecutionHistoryEntry_t, tagName) == 0x10);
    
    static_assert(sizeof(PulseGraphExecutionHistoryEntry_t) == 0x18);
};
