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
        // Size: 0x4
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventProfileStorageAvailable_t
        {
        public:
            CSplitScreenSlot m_nSplitScreenSlot; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EventProfileStorageAvailable_t, m_nSplitScreenSlot) == 0x0);
        
        static_assert(sizeof(source2sdk::client::EventProfileStorageAvailable_t) == 0x4);
    };
};
