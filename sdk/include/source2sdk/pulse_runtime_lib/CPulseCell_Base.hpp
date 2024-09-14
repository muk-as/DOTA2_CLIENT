#pragma once
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
    // Size: 0x48
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulseCell_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MFgdFromSchemaCompletelySkipField
        pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x3c];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulseCell_Base, m_nEditorNodeID) == 0x8);
    
    static_assert(sizeof(CPulseCell_Base) == 0x48);
};
