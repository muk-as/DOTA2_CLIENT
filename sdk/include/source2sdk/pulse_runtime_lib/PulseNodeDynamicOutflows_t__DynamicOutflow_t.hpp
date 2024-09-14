#pragma once
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
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
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PulseNodeDynamicOutflows_t__DynamicOutflow_t
    {
    public:
        CGlobalSymbol m_OutflowID; // 0x0        
        // metadata: MFgdFromSchemaCompletelySkipField
        pulse_runtime_lib::CPulse_OutflowConnection m_Connection; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PulseNodeDynamicOutflows_t__DynamicOutflow_t, m_OutflowID) == 0x0);
    static_assert(offsetof(PulseNodeDynamicOutflows_t__DynamicOutflow_t, m_Connection) == 0x8);
    
    static_assert(sizeof(PulseNodeDynamicOutflows_t__DynamicOutflow_t) == 0x38);
};
