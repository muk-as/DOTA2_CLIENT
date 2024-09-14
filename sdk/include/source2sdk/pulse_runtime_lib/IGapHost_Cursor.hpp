#pragma once
#include "source2sdk/pulse_runtime_lib/IGapHost_ExecLog.hpp"
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
    // Size: 0x8
    // Has VTable
    // Is Abstract
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class IGapHost_Cursor : public pulse_runtime_lib::IGapHost_ExecLog
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(IGapHost_Cursor) == 0x8);
};
