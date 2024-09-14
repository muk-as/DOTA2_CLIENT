#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tiny_Avalanche : public client::CDOTA_Buff
    {
    public:
        // m_pHeroesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_DOTA_BaseNPC*> m_pHeroesHit;
        char m_pHeroesHit[0x18]; // 0x16e8        
        float radius; // 0x1700        
        float total_duration; // 0x1704        
        float stun_duration; // 0x1708        
        int32_t tick_count; // 0x170c        
        int32_t toss_damage_bonus_pct; // 0x1710        
        int32_t m_damage; // 0x1714        
        int32_t m_nTicks; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Avalanche because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tiny_Avalanche) == 0x1720);
};
