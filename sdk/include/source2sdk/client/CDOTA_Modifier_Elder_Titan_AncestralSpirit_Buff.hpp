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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public client::CDOTA_Buff
    {
    public:
        float move_pct_creeps; // 0x1708        
        int32_t move_pct_heroes; // 0x170c        
        int32_t damage_creeps; // 0x1710        
        int32_t damage_heroes; // 0x1714        
        float armor_creeps; // 0x1718        
        float armor_heroes; // 0x171c        
        float move_pct_cap; // 0x1720        
        int32_t m_nCreepsHit; // 0x1724        
        int32_t m_nHeroesHit; // 0x1728        
        float m_fSpeedPercentage; // 0x172c        
        int32_t m_nDamage; // 0x1730        
        int32_t m_nArmor; // 0x1734        
        bool m_bSpellImmunity; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff) == 0x1740);
};
