#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector localSound[8]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t soundscapeIndex; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t localBits; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t soundscapeEntityListIndex; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t soundEventHash; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::audioparams_t, localSound) == 0x_);
        static_assert(offsetof(source2sdk::server::audioparams_t, soundscapeIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::audioparams_t, localBits) == 0x_);
        static_assert(offsetof(source2sdk::server::audioparams_t, soundscapeEntityListIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::audioparams_t, soundEventHash) == 0x_);
        
        static_assert(sizeof(source2sdk::server::audioparams_t) == 0x_);
    };
};
