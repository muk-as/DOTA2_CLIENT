#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x14
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct NianDamageTaken_t
    {
    public:
        int32_t nDamage; // 0x0        
        client::PlayerID_t nPlayerID; // 0x4        
        Vector vPos; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NianDamageTaken_t, nDamage) == 0x0);
    static_assert(offsetof(NianDamageTaken_t, nPlayerID) == 0x4);
    static_assert(offsetof(NianDamageTaken_t, vPos) == 0x8);
    
    static_assert(sizeof(NianDamageTaken_t) == 0x14);
};
