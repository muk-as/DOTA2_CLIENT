#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            uint8_t _pad0000[0x10]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
            CNetworkedQuantizedFloat m_vecX; // 0x10            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
            CNetworkedQuantizedFloat m_vecY; // 0x18            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
            CNetworkedQuantizedFloat m_vecZ; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkVelocityVector, m_vecX) == 0x10);
        static_assert(offsetof(source2sdk::client::CNetworkVelocityVector, m_vecY) == 0x18);
        static_assert(offsetof(source2sdk::client::CNetworkVelocityVector, m_vecZ) == 0x20);
        
        static_assert(sizeof(source2sdk::client::CNetworkVelocityVector) == 0x28);
    };
};
