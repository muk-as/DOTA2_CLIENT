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
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmEventConsumer
        {
        public:
            uint8_t _pad0000[0x10];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CNmEventConsumer) == 0x10);
    };
};
