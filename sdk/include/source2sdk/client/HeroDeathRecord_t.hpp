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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct HeroDeathRecord_t
        {
        public:
            source2sdk::client::PlayerID_t nKillerPlayerID; // 0x_            
            source2sdk::client::PlayerID_t nVictimPlayerID; // 0x_            
            float fTime; // 0x_            
            float fTimeRespawn; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, nKillerPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, nVictimPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, fTime) == 0x_);
        static_assert(offsetof(source2sdk::client::HeroDeathRecord_t, fTimeRespawn) == 0x_);
        
        static_assert(sizeof(source2sdk::client::HeroDeathRecord_t) == 0x_);
    };
};
