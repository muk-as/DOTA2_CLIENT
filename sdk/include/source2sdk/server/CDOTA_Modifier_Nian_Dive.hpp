#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x17b8
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Dive : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTimeInAir; // 0x1708        
        float m_flInitialVelocity; // 0x170c        
        Vector m_vStartPosition; // 0x1710        
        Vector m_vTargetHorizontalDirection; // 0x171c        
        Vector m_vTargetPosition; // 0x1728        
        float m_flCurrentTimeHoriz; // 0x1734        
        float m_flCurrentTimeVert; // 0x1738        
        bool m_bInterrupted; // 0x173c        
        [[maybe_unused]] std::uint8_t pad_0x173d[0x3]; // 0x173d
        float m_flHorizDelayTime; // 0x1740        
        float m_flVertDelayTime; // 0x1744        
        float m_flLeapSequenceDuration; // 0x1748        
        float m_flClawDamageTime; // 0x174c        
        float m_flPlaybackRate; // 0x1750        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1754        
        bool m_bPlayedSwipeSound; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x1759[0x3]; // 0x1759
        int32_t pounce_distance; // 0x175c        
        float pounce_speed; // 0x1760        
        float pounce_acceleration; // 0x1764        
        int32_t pounce_radius; // 0x1768        
        int32_t pounce_damage; // 0x176c        
        int32_t stun_radius; // 0x1770        
        float stun_duration; // 0x1774        
        float leash_duration; // 0x1778        
        float initial_delay; // 0x177c        
        float landing_delay; // 0x1780        
        float vertical_adjust; // 0x1784        
        float vertical_adjust_max_distance; // 0x1788        
        float vertical_adjust_min_distance; // 0x178c        
        int32_t claw_damage; // 0x1790        
        int32_t claw_damage_radius; // 0x1794        
        float claw_damage_delay; // 0x1798        
        float claw_damage_duration; // 0x179c        
        // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitEntities;
        char m_vHitEntities[0x18]; // 0x17a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Dive) == 0x17b8);
};
