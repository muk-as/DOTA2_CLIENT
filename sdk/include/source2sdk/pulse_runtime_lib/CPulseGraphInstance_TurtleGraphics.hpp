#pragma once
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x118
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    #pragma pack(push, 1)
    class CPulseGraphInstance_TurtleGraphics : public pulse_runtime_lib::CBasePulseGraphInstance
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf8[0x20];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseGraphInstance_TurtleGraphics) == 0x118);
};
