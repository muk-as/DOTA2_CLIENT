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
    // Size: 0x24
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct SoundeventPathCornerPairNetworked_t
    {
    public:
        // metadata: MNetworkEnable
        Vector vP1; // 0x0        
        // metadata: MNetworkEnable
        Vector vP2; // 0xc        
        // metadata: MNetworkEnable
        float flPathLengthSqr; // 0x18        
        // metadata: MNetworkEnable
        float flP1Pct; // 0x1c        
        // metadata: MNetworkEnable
        float flP2Pct; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SoundeventPathCornerPairNetworked_t, vP1) == 0x0);
    static_assert(offsetof(SoundeventPathCornerPairNetworked_t, vP2) == 0xc);
    static_assert(offsetof(SoundeventPathCornerPairNetworked_t, flPathLengthSqr) == 0x18);
    static_assert(offsetof(SoundeventPathCornerPairNetworked_t, flP1Pct) == 0x1c);
    static_assert(offsetof(SoundeventPathCornerPairNetworked_t, flP2Pct) == 0x20);
    
    static_assert(sizeof(SoundeventPathCornerPairNetworked_t) == 0x24);
};
