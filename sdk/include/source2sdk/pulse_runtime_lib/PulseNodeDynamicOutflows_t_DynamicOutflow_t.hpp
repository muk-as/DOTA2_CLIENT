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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PulseNodeDynamicOutflows_t_DynamicOutflow_t
        {
        public:
            CGlobalSymbol m_OutflowID; // 0x_            
            // metadata: MFgdFromSchemaCompletelySkipField
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_Connection; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t, m_OutflowID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t, m_Connection) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t) == 0x_);
    };
};
