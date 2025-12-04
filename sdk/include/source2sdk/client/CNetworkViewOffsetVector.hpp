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
        class CNetworkViewOffsetVector
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "-64,000000"
            // metadata: MNetworkMaxValue "64,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkViewOffsetVector"
            CNetworkedQuantizedFloat m_vecX; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "-64,000000"
            // metadata: MNetworkMaxValue "64,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkViewOffsetVector"
            CNetworkedQuantizedFloat m_vecY; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "128,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkChangeCallback "CNetworkViewOffsetVector"
            CNetworkedQuantizedFloat m_vecZ; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkViewOffsetVector, m_vecX) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkViewOffsetVector, m_vecY) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkViewOffsetVector, m_vecZ) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CNetworkViewOffsetVector) == 0x_);
    };
};
