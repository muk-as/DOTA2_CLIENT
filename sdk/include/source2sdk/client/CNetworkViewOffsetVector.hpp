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
    // Size: 0x28
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarsAtomic
    #pragma pack(push, 1)
    class CNetworkViewOffsetVector
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "-64,000000"
        // metadata: MNetworkMaxValue "64,000000"
        // metadata: MNetworkEncodeFlags "4"
        // metadata: MNetworkChangeCallback "CNetworkViewOffsetVector"
        CNetworkedQuantizedFloat m_vecX; // 0x10        
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "-64,000000"
        // metadata: MNetworkMaxValue "64,000000"
        // metadata: MNetworkEncodeFlags "4"
        // metadata: MNetworkChangeCallback "CNetworkViewOffsetVector"
        CNetworkedQuantizedFloat m_vecY; // 0x18        
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "128,000000"
        // metadata: MNetworkEncodeFlags "4"
        // metadata: MNetworkChangeCallback "CNetworkViewOffsetVector"
        CNetworkedQuantizedFloat m_vecZ; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNetworkViewOffsetVector, m_vecX) == 0x10);
    static_assert(offsetof(CNetworkViewOffsetVector, m_vecY) == 0x18);
    static_assert(offsetof(CNetworkViewOffsetVector, m_vecZ) == 0x20);
    
    static_assert(sizeof(CNetworkViewOffsetVector) == 0x28);
};
