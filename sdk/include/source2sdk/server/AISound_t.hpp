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
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct AISound_t
        {
        public:
            std::uint16_t nType; // 0x0            
            std::uint16_t nFlags; // 0x2            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AISound_t, nType) == 0x0);
        static_assert(offsetof(source2sdk::server::AISound_t, nFlags) == 0x2);
        
        static_assert(sizeof(source2sdk::server::AISound_t) == 0x4);
    };
};
