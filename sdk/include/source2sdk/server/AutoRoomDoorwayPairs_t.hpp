#pragma once
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
    // Size: 0x18
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct AutoRoomDoorwayPairs_t
    {
    public:
        Vector vP1; // 0x0        
        Vector vP2; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AutoRoomDoorwayPairs_t, vP1) == 0x0);
    static_assert(offsetof(AutoRoomDoorwayPairs_t, vP2) == 0xc);
    
    static_assert(sizeof(AutoRoomDoorwayPairs_t) == 0x18);
};
