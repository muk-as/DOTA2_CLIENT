#pragma once
#include "source2sdk/client/CStopwatchBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CSimpleStopwatch : public client::CStopwatchBase
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CSimpleStopwatch) == 0xc);
};
