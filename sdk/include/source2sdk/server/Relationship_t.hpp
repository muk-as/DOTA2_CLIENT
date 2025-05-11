#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Disposition_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct Relationship_t
        {
        public:
            source2sdk::client::Disposition_t disposition; // 0x0            
            std::int32_t priority; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::Relationship_t, disposition) == 0x0);
        static_assert(offsetof(source2sdk::server::Relationship_t, priority) == 0x4);
        
        static_assert(sizeof(source2sdk::server::Relationship_t) == 0x8);
    };
};
