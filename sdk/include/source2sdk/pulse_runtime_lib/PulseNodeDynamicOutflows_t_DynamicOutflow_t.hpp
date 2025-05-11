#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PulseNodeDynamicOutflows_t_DynamicOutflow_t
        {
        public:
            CGlobalSymbol m_OutflowID; // 0x0            
            // metadata: MFgdFromSchemaCompletelySkipField
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_Connection; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t, m_OutflowID) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t, m_Connection) == 0x8);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t) == 0x50);
    };
};
