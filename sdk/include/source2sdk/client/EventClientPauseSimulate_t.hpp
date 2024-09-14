#pragma once
#include "source2sdk/client/EventSimulate_t.hpp"
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
    // Size: 0x30
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventClientPauseSimulate_t : public client::EventSimulate_t
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(EventClientPauseSimulate_t) == 0x30);
};
