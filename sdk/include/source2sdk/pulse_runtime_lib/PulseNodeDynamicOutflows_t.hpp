#pragma once
#include "source2sdk/pulse_runtime_lib/PulseNodeDynamicOutflows_t__DynamicOutflow_t.hpp"
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
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PulseNodeDynamicOutflows_t
    {
    public:
        // m_Outflows has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::PulseNodeDynamicOutflows_t__DynamicOutflow_t> m_Outflows;
        char m_Outflows[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PulseNodeDynamicOutflows_t, m_Outflows) == 0x0);
    
    static_assert(sizeof(PulseNodeDynamicOutflows_t) == 0x18);
};
