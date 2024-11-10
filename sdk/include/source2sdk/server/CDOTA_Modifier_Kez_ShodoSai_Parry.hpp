#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_ShodoSai_Parry : public client::CDOTA_Buff
    {
    public:
        int32_t speed_penalty; // 0x1708        
        int32_t forward_angle; // 0x170c        
        float vuln_duration; // 0x1710        
        float parry_window_duration; // 0x1714        
        float parry_stun_duration; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_vecParriedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecParriedEnemies;
        char m_vecParriedEnemies[0x18]; // 0x1720        
        Vector m_vFacing; // 0x1738        
        float m_flFacingTarget; // 0x1744        
        float m_flLastOverheadTime; // 0x1748        
        client::ParticleIndex_t m_nFXIndex; // 0x174c        
        // m_hVulnAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hVulnAttackTarget;
        char m_hVulnAttackTarget[0x4]; // 0x1750        
        bool m_bAttackingVuln; // 0x1754        
        [[maybe_unused]] std::uint8_t pad_0x1755[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_ShodoSai_Parry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_ShodoSai_Parry) == 0x1758);
};
