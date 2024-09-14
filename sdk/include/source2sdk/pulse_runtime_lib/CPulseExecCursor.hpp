#pragma once
#include "source2sdk/pulse_runtime_lib/IGapHost_YieldingCursor.hpp"
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
    // Size: 0xa8
    // Has VTable
    // 
    // static metadata: MPulseInternal_IsCursor
    #pragma pack(push, 1)
    class CPulseExecCursor : public pulse_runtime_lib::IGapHost_YieldingCursor
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0xa0];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseExecCursor) == 0xa8);
};
