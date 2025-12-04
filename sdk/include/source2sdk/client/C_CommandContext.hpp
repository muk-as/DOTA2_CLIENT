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
        #pragma pack(push, 1)
        class C_CommandContext
        {
        public:
            bool needsprocessing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t command_number; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_CommandContext, needsprocessing) == 0x_);
        static_assert(offsetof(source2sdk::client::C_CommandContext, command_number) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_CommandContext) == 0x_);
    };
};
