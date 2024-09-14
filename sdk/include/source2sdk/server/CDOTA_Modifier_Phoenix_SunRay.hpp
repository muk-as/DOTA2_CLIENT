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
    // Size: 0x1768
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Phoenix_SunRay : public client::CDOTA_Buff
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
        float m_flCurrentTime; // 0x170c        
        float m_flAccumulatedSelfDamage; // 0x1710        
        bool m_bMovingForward; // 0x1714        
        bool m_bTurningFast; // 0x1715        
        [[maybe_unused]] std::uint8_t pad_0x1716[0x2]; // 0x1716
        float m_flFacingTarget; // 0x1718        
        float hp_perc_damage; // 0x171c        
        float hp_perc_heal; // 0x1720        
        float blind_duration; // 0x1724        
        int32_t blind_per_second; // 0x1728        
        int32_t focal_point_max_multiplier; // 0x172c        
        int32_t focal_point_start_length_pct; // 0x1730        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x1734        
        // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hVisionThinkers[8];
        char m_hVisionThinkers[0x20]; // 0x1738        
        // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBeamEnd;
        char m_hBeamEnd[0x4]; // 0x1758        
        bool m_bCreatedVisionThinkers; // 0x175c        
        [[maybe_unused]] std::uint8_t pad_0x175d[0x3]; // 0x175d
        // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBeamEndSound;
        char m_hBeamEndSound[0x4]; // 0x1760        
        [[maybe_unused]] std::uint8_t pad_0x1764[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_SunRay because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Phoenix_SunRay) == 0x1768);
};
