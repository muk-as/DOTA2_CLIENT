#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x8
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class INextBotReply
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(INextBotReply) == 0x8);
};
