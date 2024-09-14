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
    // Size: 0x1798
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Dive : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTimeInAir; // 0x16e8        
        float m_flInitialVelocity; // 0x16ec        
        Vector m_vStartPosition; // 0x16f0        
        Vector m_vTargetHorizontalDirection; // 0x16fc        
        Vector m_vTargetPosition; // 0x1708        
        float m_flCurrentTimeHoriz; // 0x1714        
        float m_flCurrentTimeVert; // 0x1718        
        bool m_bInterrupted; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float m_flHorizDelayTime; // 0x1720        
        float m_flVertDelayTime; // 0x1724        
        float m_flLeapSequenceDuration; // 0x1728        
        float m_flClawDamageTime; // 0x172c        
        float m_flPlaybackRate; // 0x1730        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1734        
        bool m_bPlayedSwipeSound; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x3]; // 0x1739
        int32_t pounce_distance; // 0x173c        
        float pounce_speed; // 0x1740        
        float pounce_acceleration; // 0x1744        
        int32_t pounce_radius; // 0x1748        
        int32_t pounce_damage; // 0x174c        
        int32_t stun_radius; // 0x1750        
        float stun_duration; // 0x1754        
        float leash_duration; // 0x1758        
        float initial_delay; // 0x175c        
        float landing_delay; // 0x1760        
        float vertical_adjust; // 0x1764        
        float vertical_adjust_max_distance; // 0x1768        
        float vertical_adjust_min_distance; // 0x176c        
        int32_t claw_damage; // 0x1770        
        int32_t claw_damage_radius; // 0x1774        
        float claw_damage_delay; // 0x1778        
        float claw_damage_duration; // 0x177c        
        // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitEntities;
        char m_vHitEntities[0x18]; // 0x1780        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Dive) == 0x1798);
};
