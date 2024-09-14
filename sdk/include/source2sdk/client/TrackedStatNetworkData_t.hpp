#pragma once
#include "source2sdk/client/TrackedStatID_t.hpp"
#include "source2sdk/client/TrackedStatValue_t.hpp"
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
    // Size: 0x30
    // 
    // static metadata: MNetworkVarNames "TrackedStatID_t unStatID"
    // static metadata: MNetworkVarNames "TrackedStatValue_t unStatValue"
    #pragma pack(push, 1)
    struct TrackedStatNetworkData_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        // metadata: MNetworkEnable
        client::TrackedStatID_t unStatID; // 0x28        
        // metadata: MNetworkEnable
        client::TrackedStatValue_t unStatValue; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TrackedStatNetworkData_t, unStatID) == 0x28);
    static_assert(offsetof(TrackedStatNetworkData_t, unStatValue) == 0x2c);
    
    static_assert(sizeof(TrackedStatNetworkData_t) == 0x30);
};
