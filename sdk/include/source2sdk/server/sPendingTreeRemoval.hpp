#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class sPendingTreeRemoval
    {
    public:
        int32_t nTeam; // 0x0        
        int32_t nIndex; // 0x4        
        entity2::GameTime_t fTimestamp; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sPendingTreeRemoval, nTeam) == 0x0);
    static_assert(offsetof(sPendingTreeRemoval, nIndex) == 0x4);
    static_assert(offsetof(sPendingTreeRemoval, fTimestamp) == 0x8);
    
    static_assert(sizeof(sPendingTreeRemoval) == 0xc);
};
