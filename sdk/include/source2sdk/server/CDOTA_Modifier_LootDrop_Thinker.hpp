#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_LootDrop_Thinker : public client::CDOTA_Buff
    {
    public:
        bool m_bAutoPickup; // 0x1708        
        bool m_bOnlyPlayerHeroPickup; // 0x1709        
        bool m_bCreepHeroPickup; // 0x170a        
        bool m_bAutoUse; // 0x170b        
        bool m_bFlying; // 0x170c        
        bool m_bUseSpawnAnim; // 0x170d        
        bool m_bAutoTeleport; // 0x170e        
        [[maybe_unused]] std::uint8_t pad_0x170f[0x1]; // 0x170f
        entity2::GameTime_t m_flKnockbackStartTime; // 0x1710        
        entity2::GameTime_t m_flKnockbackEndTime; // 0x1714        
        float m_flKnockbackHeight; // 0x1718        
        float m_flInitialHeight; // 0x171c        
        float m_flKnockbackDuration; // 0x1720        
        float m_flEndHeight; // 0x1724        
        Vector m_vStartPos; // 0x1728        
        Vector m_vEndPos; // 0x1734        
        float m_fPickupRadius; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4]; // 0x1744
        CUtlString m_strTransitionEffect; // 0x1748        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_LootDrop_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_LootDrop_Thinker) == 0x1750);
};
