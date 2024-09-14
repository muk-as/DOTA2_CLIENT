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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x48
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "HeroID_t m_vecHeroIDs"
    #pragma pack(push, 1)
    class CHeroesPerPlayer
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        // m_vecHeroIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::HeroID_t> m_vecHeroIDs;
        char m_vecHeroIDs[0x18]; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CHeroesPerPlayer, m_vecHeroIDs) == 0x30);
    
    static_assert(sizeof(CHeroesPerPlayer) == 0x48);
};
