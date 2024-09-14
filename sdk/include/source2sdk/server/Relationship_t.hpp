#pragma once
#include "source2sdk/client/Disposition_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
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
        client::Disposition_t disposition; // 0x0        
        int32_t priority; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(Relationship_t, disposition) == 0x0);
    static_assert(offsetof(Relationship_t, priority) == 0x4);
    
    static_assert(sizeof(Relationship_t) == 0x8);
};
