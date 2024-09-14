#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct HeroDeathRecord_t
    {
    public:
        client::PlayerID_t nKillerPlayerID; // 0x0        
        client::PlayerID_t nVictimPlayerID; // 0x4        
        float fTime; // 0x8        
        float fTimeRespawn; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HeroDeathRecord_t, nKillerPlayerID) == 0x0);
    static_assert(offsetof(HeroDeathRecord_t, nVictimPlayerID) == 0x4);
    static_assert(offsetof(HeroDeathRecord_t, fTime) == 0x8);
    static_assert(offsetof(HeroDeathRecord_t, fTimeRespawn) == 0xc);
    
    static_assert(sizeof(HeroDeathRecord_t) == 0x10);
};
