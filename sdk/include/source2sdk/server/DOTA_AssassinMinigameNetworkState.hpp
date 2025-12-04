#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "uint16 nAssassinState"
        // static metadata: MNetworkVarNames "HeroID_t nVictimHeroID"
        #pragma pack(push, 1)
        class DOTA_AssassinMinigameNetworkState
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint16_t nAssassinState; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t nVictimHeroID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::DOTA_AssassinMinigameNetworkState, nAssassinState) == 0x_);
        static_assert(offsetof(source2sdk::server::DOTA_AssassinMinigameNetworkState, nVictimHeroID) == 0x_);
        
        static_assert(sizeof(source2sdk::server::DOTA_AssassinMinigameNetworkState) == 0x_);
    };
};
