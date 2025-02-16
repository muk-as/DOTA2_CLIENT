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
    // Size: 0x1780
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay : public client::CDOTA_Buff
    {
    public:
        int32_t hp_cost_perc_per_second; // 0x1708        
        int32_t beam_range; // 0x170c        
        int32_t base_damage; // 0x1710        
        int32_t base_heal; // 0x1714        
        float tick_interval; // 0x1718        
        float forward_move_speed; // 0x171c        
        float turn_rate_initial; // 0x1720        
        float turn_rate; // 0x1724        
        int32_t radius; // 0x1728        
        int32_t self_turn_rate_percent; // 0x172c        
        float m_flCurrentTime; // 0x1730        
        entity2::GameTime_t m_flLastDamageTime; // 0x1734        
        float m_flAccumulatedSelfDamage; // 0x1738        
        bool m_bMovingForward; // 0x173c        
        bool m_bTurningFast; // 0x173d        
        [[maybe_unused]] std::uint8_t pad_0x173e[0x2]; // 0x173e
        float m_flFacingTarget; // 0x1740        
        float hp_perc_damage; // 0x1744        
        float hp_perc_heal; // 0x1748        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x174c        
        // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hVisionThinkers[8];
        char m_hVisionThinkers[0x20]; // 0x1750        
        // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBeamEnd;
        char m_hBeamEnd[0x4]; // 0x1770        
        bool m_bCreatedVisionThinkers; // 0x1774        
        [[maybe_unused]] std::uint8_t pad_0x1775[0x3]; // 0x1775
        // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBeamEndSound;
        char m_hBeamEndSound[0x4]; // 0x1778        
        [[maybe_unused]] std::uint8_t pad_0x177c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay) == 0x1780);
};
