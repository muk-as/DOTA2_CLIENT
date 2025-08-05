#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/RotatorTargetSpace_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RotatorQueueEntry_t
        {
        public:
            Quaternion qTarget; // 0x0            
            source2sdk::server::RotatorTargetSpace_t eSpace; // 0x10            
            uint8_t _pad0014[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::RotatorQueueEntry_t, qTarget) == 0x0);
        static_assert(offsetof(source2sdk::server::RotatorQueueEntry_t, eSpace) == 0x10);
        
        static_assert(sizeof(source2sdk::server::RotatorQueueEntry_t) == 0x20);
    };
};
