#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseCursorID_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseGraphInstanceID_t.hpp"
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct PulseGraphExecutionHistoryCursorDesc_t;
    };
};
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct PulseGraphExecutionHistoryEntry_t;
    };
};
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct PulseGraphExecutionHistoryNodeDesc_t;
    };
};

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
        class CPulseGraphExecutionHistory
        {
        public:
            source2sdk::pulse_runtime_lib::PulseGraphInstanceID_t m_nInstanceID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strFileName; // 0x_            
            // m_vecHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t*> m_vecHistory;
            char m_vecHistory[0x_]; // 0x_            
            // m_mapCellDesc has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::pulse_runtime_lib::PulseDocNodeID_t,source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t*> m_mapCellDesc;
            char m_mapCellDesc[0x_]; // 0x_            
            // m_mapCursorDesc has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::pulse_runtime_lib::PulseCursorID_t,source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t*> m_mapCursorDesc;
            char m_mapCursorDesc[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphExecutionHistory, m_nInstanceID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphExecutionHistory, m_strFileName) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphExecutionHistory, m_vecHistory) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphExecutionHistory, m_mapCellDesc) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphExecutionHistory, m_mapCursorDesc) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseGraphExecutionHistory) == 0x_);
    };
};
