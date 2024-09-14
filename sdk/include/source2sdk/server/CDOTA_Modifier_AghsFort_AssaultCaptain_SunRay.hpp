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
    // Size: 0x1760
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay : public client::CDOTA_Buff
    {
    public:
        int32_t hp_cost_perc_per_second; // 0x16e8        
        int32_t beam_range; // 0x16ec        
        int32_t base_damage; // 0x16f0        
        int32_t base_heal; // 0x16f4        
        float tick_interval; // 0x16f8        
        float forward_move_speed; // 0x16fc        
        float turn_rate_initial; // 0x1700        
        float turn_rate; // 0x1704        
        int32_t radius; // 0x1708        
        int32_t self_turn_rate_percent; // 0x170c        
        float m_flCurrentTime; // 0x1710        
        entity2::GameTime_t m_flLastDamageTime; // 0x1714        
        float m_flAccumulatedSelfDamage; // 0x1718        
        bool m_bMovingForward; // 0x171c        
        bool m_bTurningFast; // 0x171d        
        [[maybe_unused]] std::uint8_t pad_0x171e[0x2]; // 0x171e
        float m_flFacingTarget; // 0x1720        
        float hp_perc_damage; // 0x1724        
        float hp_perc_heal; // 0x1728        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x172c        
        // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hVisionThinkers[8];
        char m_hVisionThinkers[0x20]; // 0x1730        
        // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBeamEnd;
        char m_hBeamEnd[0x4]; // 0x1750        
        bool m_bCreatedVisionThinkers; // 0x1754        
        [[maybe_unused]] std::uint8_t pad_0x1755[0x3]; // 0x1755
        // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBeamEndSound;
        char m_hBeamEndSound[0x4]; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x175c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay) == 0x1760);
};
