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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Gyrocopter_Call_Down : public client::CDOTA_Buff
    {
    public:
        int32_t slow_duration; // 0x16e8        
        int32_t damage; // 0x16ec        
        int32_t radius; // 0x16f0        
        int32_t slow; // 0x16f4        
        bool m_bDelayed; // 0x16f8        
        bool m_bAttachToRocket1; // 0x16f9        
        [[maybe_unused]] std::uint8_t pad_0x16fa[0x6]; // 0x16fa
        // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitHeroes;
        char m_vecHitHeroes[0x18]; // 0x1700        
        bool m_bHitInvisibleHeroes; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        client::ParticleIndex_t m_nMarkerIndex; // 0x171c        
        bool m_bIsTrackingMissile; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTrackingTarget;
        char m_hTrackingTarget[0x4]; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Call_Down because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Gyrocopter_Call_Down) == 0x1728);
};
