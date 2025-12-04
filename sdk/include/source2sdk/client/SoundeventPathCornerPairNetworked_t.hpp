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
        #pragma pack(push, 1)
        struct SoundeventPathCornerPairNetworked_t
        {
        public:
            // metadata: MNetworkEnable
            Vector vP1; // 0x_            
            // metadata: MNetworkEnable
            Vector vP2; // 0x_            
            // metadata: MNetworkEnable
            float flPathLengthSqr; // 0x_            
            // metadata: MNetworkEnable
            float flP1Pct; // 0x_            
            // metadata: MNetworkEnable
            float flP2Pct; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SoundeventPathCornerPairNetworked_t, vP1) == 0x_);
        static_assert(offsetof(source2sdk::client::SoundeventPathCornerPairNetworked_t, vP2) == 0x_);
        static_assert(offsetof(source2sdk::client::SoundeventPathCornerPairNetworked_t, flPathLengthSqr) == 0x_);
        static_assert(offsetof(source2sdk::client::SoundeventPathCornerPairNetworked_t, flP1Pct) == 0x_);
        static_assert(offsetof(source2sdk::client::SoundeventPathCornerPairNetworked_t, flP2Pct) == 0x_);
        
        static_assert(sizeof(source2sdk::client::SoundeventPathCornerPairNetworked_t) == 0x_);
    };
};
