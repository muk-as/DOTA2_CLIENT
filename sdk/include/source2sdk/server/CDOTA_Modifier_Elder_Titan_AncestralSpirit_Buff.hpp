#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public client::CDOTA_Buff
    {
    public:
        float move_pct_creeps; // 0x16e8        
        int32_t move_pct_heroes; // 0x16ec        
        int32_t damage_creeps; // 0x16f0        
        int32_t damage_heroes; // 0x16f4        
        float armor_creeps; // 0x16f8        
        float armor_heroes; // 0x16fc        
        float move_pct_cap; // 0x1700        
        int32_t m_nCreepsHit; // 0x1704        
        int32_t m_nHeroesHit; // 0x1708        
        float m_fSpeedPercentage; // 0x170c        
        int32_t m_nDamage; // 0x1710        
        int32_t m_nArmor; // 0x1714        
        bool m_bSpellImmunity; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff) == 0x1720);
};
