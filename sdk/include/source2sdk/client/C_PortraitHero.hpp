#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1848
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_PortraitHero : public client::C_DOTA_BaseNPC
    {
    public:
        client::HeroID_t m_nHeroID; // 0x1800        
        int32_t m_actQueuedActivity; // 0x1804        
        char m_szQueuedActivityModifier[64]; // 0x1808        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitHero because it is not a standard-layout class
    static_assert(sizeof(C_PortraitHero) == 0x1848);
};
