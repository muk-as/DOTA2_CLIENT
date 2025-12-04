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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarsAtomic
        #pragma pack(push, 1)
        class CNetworkVelocityVector
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
            CNetworkedQuantizedFloat m_vecX; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
            CNetworkedQuantizedFloat m_vecY; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkVelocityVector"
            CNetworkedQuantizedFloat m_vecZ; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkVelocityVector, m_vecX) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkVelocityVector, m_vecY) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkVelocityVector, m_vecZ) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CNetworkVelocityVector) == 0x_);
    };
};
