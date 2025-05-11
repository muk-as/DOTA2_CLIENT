#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/TrackedStatID_t.hpp"
#include "source2sdk/client/TrackedStatValue_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "TrackedStatID_t unStatID"
        // static metadata: MNetworkVarNames "TrackedStatValue_t unStatValue"
        #pragma pack(push, 1)
        struct TrackedStatNetworkData_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::TrackedStatID_t unStatID; // 0x30            
            // metadata: MNetworkEnable
            source2sdk::client::TrackedStatValue_t unStatValue; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::TrackedStatNetworkData_t, unStatID) == 0x30);
        static_assert(offsetof(source2sdk::server::TrackedStatNetworkData_t, unStatValue) == 0x34);
        
        static_assert(sizeof(source2sdk::server::TrackedStatNetworkData_t) == 0x38);
    };
};
