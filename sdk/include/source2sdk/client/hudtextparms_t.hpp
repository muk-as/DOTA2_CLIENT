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
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct hudtextparms_t
        {
        public:
            Color color1; // 0x0            
            Color color2; // 0x4            
            std::uint8_t effect; // 0x8            
            std::uint8_t channel; // 0x9            
            uint8_t _pad000a[0x2]; // 0xa
            float x; // 0xc            
            float y; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::hudtextparms_t, color1) == 0x0);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, color2) == 0x4);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, effect) == 0x8);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, channel) == 0x9);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, x) == 0xc);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, y) == 0x10);
        
        static_assert(sizeof(source2sdk::client::hudtextparms_t) == 0x14);
    };
};
