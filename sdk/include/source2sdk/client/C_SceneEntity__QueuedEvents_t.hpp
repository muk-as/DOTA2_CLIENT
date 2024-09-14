#pragma once
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
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct C_SceneEntity__QueuedEvents_t
    {
    public:
        float starttime; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x14];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_SceneEntity__QueuedEvents_t, starttime) == 0x0);
    
    static_assert(sizeof(C_SceneEntity__QueuedEvents_t) == 0x18);
};
