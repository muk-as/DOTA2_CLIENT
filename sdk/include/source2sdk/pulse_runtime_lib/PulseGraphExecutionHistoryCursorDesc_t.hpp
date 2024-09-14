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
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PulseGraphExecutionHistoryCursorDesc_t
    {
    public:
        // vecAncestorCursorIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::PulseCursorID_t> vecAncestorCursorIDs;
        char vecAncestorCursorIDs[0x18]; // 0x0        
        pulse_runtime_lib::PulseDocNodeID_t nSpawnNodeID; // 0x18        
        pulse_runtime_lib::PulseDocNodeID_t nRetiredAtNodeID; // 0x1c        
        float flLastReferenced; // 0x20        
        int32_t nLastValidEntryIdx; // 0x24        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PulseGraphExecutionHistoryCursorDesc_t, vecAncestorCursorIDs) == 0x0);
    static_assert(offsetof(PulseGraphExecutionHistoryCursorDesc_t, nSpawnNodeID) == 0x18);
    static_assert(offsetof(PulseGraphExecutionHistoryCursorDesc_t, nRetiredAtNodeID) == 0x1c);
    static_assert(offsetof(PulseGraphExecutionHistoryCursorDesc_t, flLastReferenced) == 0x20);
    static_assert(offsetof(PulseGraphExecutionHistoryCursorDesc_t, nLastValidEntryIdx) == 0x24);
    
    static_assert(sizeof(PulseGraphExecutionHistoryCursorDesc_t) == 0x28);
};
