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
    // Size: 0x1778
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_ShodoSai_Parry : public client::CDOTA_Buff
    {
    public:
        int32_t m_nPoseParameterWE; // 0x1708        
        int32_t m_nPoseParameterNS; // 0x170c        
        float m_flLastPoseX; // 0x1710        
        float m_flLastPoseY; // 0x1714        
        int32_t m_nLastMaxDirection; // 0x1718        
        Vector m_vLastOrigin; // 0x171c        
        entity2::GameTime_t m_flLastGameTime; // 0x1728        
        int32_t speed_penalty; // 0x172c        
        int32_t forward_angle; // 0x1730        
        float vuln_duration; // 0x1734        
        float parry_window_duration; // 0x1738        
        float parry_stun_duration; // 0x173c        
        // m_vecParriedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecParriedEnemies;
        char m_vecParriedEnemies[0x18]; // 0x1740        
        Vector m_vFacing; // 0x1758        
        float m_flFacingTarget; // 0x1764        
        float m_flLastOverheadTime; // 0x1768        
        client::ParticleIndex_t m_nFXIndex; // 0x176c        
        // m_hVulnAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hVulnAttackTarget;
        char m_hVulnAttackTarget[0x4]; // 0x1770        
        bool m_bAttackingVuln; // 0x1774        
        [[maybe_unused]] std::uint8_t pad_0x1775[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_ShodoSai_Parry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_ShodoSai_Parry) == 0x1778);
};
