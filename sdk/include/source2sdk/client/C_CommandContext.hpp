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
        // Size: 0xa0
        #pragma pack(push, 1)
        class C_CommandContext
        {
        public:
            bool needsprocessing; // 0x0            
            uint8_t _pad0001[0x97]; // 0x1
            std::int32_t command_number; // 0x98            
            uint8_t _pad009c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_CommandContext, needsprocessing) == 0x0);
        static_assert(offsetof(source2sdk::client::C_CommandContext, command_number) == 0x98);
        
        static_assert(sizeof(source2sdk::client::C_CommandContext) == 0xa0);
    };
};
