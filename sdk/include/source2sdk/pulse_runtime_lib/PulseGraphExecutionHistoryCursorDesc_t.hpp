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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PulseGraphExecutionHistoryCursorDesc_t
        {
        public:
            // vecAncestorCursorIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::PulseCursorID_t> vecAncestorCursorIDs;
            char vecAncestorCursorIDs[0x_]; // 0x_            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t nSpawnNodeID; // 0x_            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t nRetiredAtNodeID; // 0x_            
            float flLastReferenced; // 0x_            
            std::int32_t nLastValidEntryIdx; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, vecAncestorCursorIDs) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, nSpawnNodeID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, nRetiredAtNodeID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, flLastReferenced) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, nLastValidEntryIdx) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t) == 0x_);
    };
};
