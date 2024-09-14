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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_LootDrop_Thinker : public client::CDOTA_Buff
    {
    public:
        bool m_bAutoPickup; // 0x16e8        
        bool m_bOnlyPlayerHeroPickup; // 0x16e9        
        bool m_bCreepHeroPickup; // 0x16ea        
        bool m_bAutoUse; // 0x16eb        
        bool m_bFlying; // 0x16ec        
        bool m_bUseSpawnAnim; // 0x16ed        
        bool m_bAutoTeleport; // 0x16ee        
        [[maybe_unused]] std::uint8_t pad_0x16ef[0x1]; // 0x16ef
        entity2::GameTime_t m_flKnockbackStartTime; // 0x16f0        
        entity2::GameTime_t m_flKnockbackEndTime; // 0x16f4        
        float m_flKnockbackHeight; // 0x16f8        
        float m_flInitialHeight; // 0x16fc        
        float m_flKnockbackDuration; // 0x1700        
        float m_flEndHeight; // 0x1704        
        Vector m_vStartPos; // 0x1708        
        Vector m_vEndPos; // 0x1714        
        float m_fPickupRadius; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        CUtlString m_strTransitionEffect; // 0x1728        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_LootDrop_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_LootDrop_Thinker) == 0x1730);
};
