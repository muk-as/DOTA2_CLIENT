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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_MortimerKisses : public client::CDOTA_Buff
    {
    public:
        float m_fIntervalPerRocket; // 0x16e8        
        float m_flFacingTarget; // 0x16ec        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x16f0        
        // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBeamEnd;
        char m_hBeamEnd[0x4]; // 0x16f4        
        float m_flCurDistance; // 0x16f8        
        Vector m_vAimTarget; // 0x16fc        
        float m_fLastTurnAmount; // 0x1708        
        int32_t m_nProjectilesLaunched; // 0x170c        
        bool m_bDestroyOnNextThink; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        int32_t m_nProjectilesToLaunch; // 0x1714        
        bool m_bHasProjectileTalent; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0xb]; // 0x1719
        int32_t projectile_count; // 0x1724        
        int32_t projectile_speed; // 0x1728        
        int32_t projectile_width; // 0x172c        
        int32_t projectile_vision; // 0x1730        
        float turn_rate; // 0x1734        
        int32_t min_range; // 0x1738        
        int32_t impact_radius; // 0x173c        
        float min_lob_travel_time; // 0x1740        
        float max_lob_travel_time; // 0x1744        
        float delay_after_last_projectile; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_MortimerKisses) == 0x1750);
};
