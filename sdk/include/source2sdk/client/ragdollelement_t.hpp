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
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct ragdollelement_t
        {
        public:
            Vector originParentSpace; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t parentIndex; // 0x_            
            float m_flRadius; // 0x_            
            std::int32_t m_nHeight; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ragdollelement_t, originParentSpace) == 0x_);
        static_assert(offsetof(source2sdk::client::ragdollelement_t, parentIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::ragdollelement_t, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::ragdollelement_t, m_nHeight) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ragdollelement_t) == 0x_);
    };
};
