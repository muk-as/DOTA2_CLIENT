#pragma once
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PulseRegisterMap_t
    {
    public:
        KeyValues3 m_Inparams; // 0x0        
        KeyValues3 m_Outparams; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PulseRegisterMap_t, m_Inparams) == 0x0);
    static_assert(offsetof(PulseRegisterMap_t, m_Outparams) == 0x10);
    
    static_assert(sizeof(PulseRegisterMap_t) == 0x20);
};
