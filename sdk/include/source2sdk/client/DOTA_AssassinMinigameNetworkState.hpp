#pragma once
#include "source2sdk/client/HeroID_t.hpp"
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        uint16_t nAssassinState; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2]; // 0xa
        // metadata: MNetworkEnable
        client::HeroID_t nVictimHeroID; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTA_AssassinMinigameNetworkState, nAssassinState) == 0x8);
    static_assert(offsetof(DOTA_AssassinMinigameNetworkState, nVictimHeroID) == 0xc);
    
    static_assert(sizeof(DOTA_AssassinMinigameNetworkState) == 0x10);
};
