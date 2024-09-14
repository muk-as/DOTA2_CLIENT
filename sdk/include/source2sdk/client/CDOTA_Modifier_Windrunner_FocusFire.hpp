#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Windrunner_FocusFire : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        int32_t focusfire_damage_reduction; // 0x16ec        
        bool bActive; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        int32_t bonus_attack_speed; // 0x16f4        
        int32_t focusfire_fire_on_the_move; // 0x16f8        
        bool m_bPause; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        int32_t m_nNumArrowsLanded; // 0x1700        
        int32_t m_nDamageDealt; // 0x1704        
        int32_t m_nDamageDealtMax; // 0x1708        
        int32_t m_nTargetInitialHP; // 0x170c        
        bool m_bHeroKilled; // 0x1710        
        bool m_bRecentFocusFireAttack; // 0x1711        
        bool m_bFocusFireProcessProcs; // 0x1712        
        [[maybe_unused]] std::uint8_t pad_0x1713[0x9]; // 0x1713
        client::ParticleIndex_t m_nFXFocusFire; // 0x171c        
        entity2::GameTime_t m_flLastFocusFireAttackTime; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_FocusFire because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Windrunner_FocusFire) == 0x1728);
};
