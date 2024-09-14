#pragma once
#include "source2sdk/client/CAnimEventListenerBase.hpp"
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
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x50
    // Has VTable
    #pragma pack(push, 1)
    class CAnimEventQueueListener : public client::CAnimEventListenerBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x20[0x30];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAnimEventQueueListener) == 0x50);
};
