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
        // Size: 0x28
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct ragdollelement_t
        {
        public:
            Vector originParentSpace; // 0x0            
            uint8_t _pad000c[0x14]; // 0xc
            std::int32_t parentIndex; // 0x20            
            float m_flRadius; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ragdollelement_t, originParentSpace) == 0x0);
        static_assert(offsetof(source2sdk::client::ragdollelement_t, parentIndex) == 0x20);
        static_assert(offsetof(source2sdk::client::ragdollelement_t, m_flRadius) == 0x24);
        
        static_assert(sizeof(source2sdk::client::ragdollelement_t) == 0x28);
    };
};
