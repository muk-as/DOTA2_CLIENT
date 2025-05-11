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
        // Size: 0x78
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "Vector localSound"
        // static metadata: MNetworkVarNames "int32 soundscapeIndex"
        // static metadata: MNetworkVarNames "uint8 localBits"
        // static metadata: MNetworkVarNames "int soundscapeEntityListIndex"
        // static metadata: MNetworkVarNames "uint32 soundEventHash"
        #pragma pack(push, 1)
        struct audioparams_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector localSound[8]; // 0x8            
            // metadata: MNetworkEnable
            std::int32_t soundscapeIndex; // 0x68            
            // metadata: MNetworkEnable
            std::uint8_t localBits; // 0x6c            
            uint8_t _pad006d[0x3]; // 0x6d
            // metadata: MNetworkEnable
            std::int32_t soundscapeEntityListIndex; // 0x70            
            // metadata: MNetworkEnable
            std::uint32_t soundEventHash; // 0x74            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::audioparams_t, localSound) == 0x8);
        static_assert(offsetof(source2sdk::client::audioparams_t, soundscapeIndex) == 0x68);
        static_assert(offsetof(source2sdk::client::audioparams_t, localBits) == 0x6c);
        static_assert(offsetof(source2sdk::client::audioparams_t, soundscapeEntityListIndex) == 0x70);
        static_assert(offsetof(source2sdk::client::audioparams_t, soundEventHash) == 0x74);
        
        static_assert(sizeof(source2sdk::client::audioparams_t) == 0x78);
    };
};
