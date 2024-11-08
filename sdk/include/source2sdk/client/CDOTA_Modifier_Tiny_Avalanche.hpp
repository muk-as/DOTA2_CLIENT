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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tiny_Avalanche : public client::CDOTA_Buff
    {
    public:
        // m_pHeroesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_DOTA_BaseNPC*> m_pHeroesHit;
        char m_pHeroesHit[0x18]; // 0x1708        
        float radius; // 0x1720        
        float total_duration; // 0x1724        
        float stun_duration; // 0x1728        
        int32_t tick_count; // 0x172c        
        int32_t toss_damage_bonus_pct; // 0x1730        
        int32_t m_damage; // 0x1734        
        int32_t m_nTicks; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Avalanche because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tiny_Avalanche) == 0x1740);
};
