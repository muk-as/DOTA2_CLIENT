#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo
    {
    public:
        client::PlayerID_t nSourcePlayerID; // 0x0        
        bool bBuff; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        int32_t nAbilityIndex; // 0x8        
        entity2::GameTime_t fTime; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo, nSourcePlayerID) == 0x0);
    static_assert(offsetof(CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo, bBuff) == 0x4);
    static_assert(offsetof(CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo, nAbilityIndex) == 0x8);
    static_assert(offsetof(CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo, fTime) == 0xc);
    
    static_assert(sizeof(CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo) == 0x10);
};
