#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

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
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct HeroDeathRecord_t
        {
        public:
            source2sdk::client::PlayerID_t nKillerPlayerID; // 0x0            
            source2sdk::client::PlayerID_t nVictimPlayerID; // 0x4            
            float fTime; // 0x8            
            float fTimeRespawn; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, nKillerPlayerID) == 0x0);
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, nVictimPlayerID) == 0x4);
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, fTime) == 0x8);
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, fTimeRespawn) == 0xc);
        
        static_assert(sizeof(source2sdk::client::HeroDeathRecord_t) == 0x10);
    };
};
