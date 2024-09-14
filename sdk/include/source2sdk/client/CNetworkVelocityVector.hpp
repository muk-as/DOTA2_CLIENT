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
    class CNetworkVelocityVector
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-4096,000000"
        // metadata: MNetworkMaxValue "4096,000000"
        // metadata: MNetworkEncodeFlags "4"
        // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
        CNetworkedQuantizedFloat m_vecX; // 0x10        
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-4096,000000"
        // metadata: MNetworkMaxValue "4096,000000"
        // metadata: MNetworkEncodeFlags "4"
        // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
        CNetworkedQuantizedFloat m_vecY; // 0x18        
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-4096,000000"
        // metadata: MNetworkMaxValue "4096,000000"
        // metadata: MNetworkEncodeFlags "4"
        // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
        CNetworkedQuantizedFloat m_vecZ; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNetworkVelocityVector, m_vecX) == 0x10);
    static_assert(offsetof(CNetworkVelocityVector, m_vecY) == 0x18);
    static_assert(offsetof(CNetworkVelocityVector, m_vecZ) == 0x20);
    
    static_assert(sizeof(CNetworkVelocityVector) == 0x28);
};
