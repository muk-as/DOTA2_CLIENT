#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Windrunner_FocusFire : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1708        
        int32_t focusfire_damage_reduction; // 0x170c        
        bool bActive; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        int32_t bonus_attack_speed; // 0x1714        
        int32_t focusfire_fire_on_the_move; // 0x1718        
        bool m_bPause; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        int32_t m_nNumArrowsLanded; // 0x1720        
        int32_t m_nDamageDealt; // 0x1724        
        int32_t m_nDamageDealtMax; // 0x1728        
        int32_t m_nTargetInitialHP; // 0x172c        
        bool m_bHeroKilled; // 0x1730        
        bool m_bRecentFocusFireAttack; // 0x1731        
        bool m_bFocusFireProcessProcs; // 0x1732        
        [[maybe_unused]] std::uint8_t pad_0x1733[0x9]; // 0x1733
        client::ParticleIndex_t m_nFXFocusFire; // 0x173c        
        entity2::GameTime_t m_flLastFocusFireAttackTime; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_FocusFire because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Windrunner_FocusFire) == 0x1748);
};
