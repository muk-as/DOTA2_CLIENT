#pragma once
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroPickType.hpp"
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
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct HeroPickRecord_t
    {
    public:
        client::HeroPickType eType; // 0x0        
        client::HeroID_t nHeroID; // 0x4        
        int32_t nTeam; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HeroPickRecord_t, eType) == 0x0);
    static_assert(offsetof(HeroPickRecord_t, nHeroID) == 0x4);
    static_assert(offsetof(HeroPickRecord_t, nTeam) == 0x8);
    
    static_assert(sizeof(HeroPickRecord_t) == 0xc);
};
