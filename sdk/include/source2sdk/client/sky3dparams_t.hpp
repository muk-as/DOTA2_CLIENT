#pragma once
#include "source2sdk/client/fogparams_t.hpp"
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
    // Size: 0x90
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarNames "int16 scale"
    // static metadata: MNetworkVarNames "Vector origin"
    // static metadata: MNetworkVarNames "bool bClip3DSkyBoxNearToWorldFar"
    // static metadata: MNetworkVarNames "float32 flClip3DSkyBoxNearToWorldFarOffset"
    // static metadata: MNetworkVarNames "fogparams_t fog"
    // static metadata: MNetworkVarNames "WorldGroupId_t m_nWorldGroupID"
    #pragma pack(push, 1)
    struct sky3dparams_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        int16_t scale; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2]; // 0xa
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector origin; // 0xc        
        // metadata: MNetworkEnable
        bool bClip3DSkyBoxNearToWorldFar; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x3]; // 0x19
        // metadata: MNetworkEnable
        float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c        
        // metadata: MNetworkEnable
        client::fogparams_t fog; // 0x20        
        // metadata: MNetworkEnable
        WorldGroupId_t m_nWorldGroupID; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x8c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sky3dparams_t, scale) == 0x8);
    static_assert(offsetof(sky3dparams_t, origin) == 0xc);
    static_assert(offsetof(sky3dparams_t, bClip3DSkyBoxNearToWorldFar) == 0x18);
    static_assert(offsetof(sky3dparams_t, flClip3DSkyBoxNearToWorldFarOffset) == 0x1c);
    static_assert(offsetof(sky3dparams_t, fog) == 0x20);
    static_assert(offsetof(sky3dparams_t, m_nWorldGroupID) == 0x88);
    
    static_assert(sizeof(sky3dparams_t) == 0x90);
};
