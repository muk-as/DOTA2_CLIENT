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
        struct hudtextparms_t
        {
        public:
            Color color1; // 0x_            
            Color color2; // 0x_            
            std::uint8_t effect; // 0x_            
            std::uint8_t channel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float x; // 0x_            
            float y; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::hudtextparms_t, color1) == 0x_);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, color2) == 0x_);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, effect) == 0x_);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, channel) == 0x_);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, x) == 0x_);
        static_assert(offsetof(source2sdk::client::hudtextparms_t, y) == 0x_);
        
        static_assert(sizeof(source2sdk::client::hudtextparms_t) == 0x_);
    };
};
