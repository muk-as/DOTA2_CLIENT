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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Gyrocopter_Call_Down : public client::CDOTA_Buff
    {
    public:
        int32_t slow_duration; // 0x1708        
        int32_t damage; // 0x170c        
        int32_t radius; // 0x1710        
        int32_t slow; // 0x1714        
        bool m_bDelayed; // 0x1718        
        bool m_bAttachToRocket1; // 0x1719        
        [[maybe_unused]] std::uint8_t pad_0x171a[0x6]; // 0x171a
        // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitHeroes;
        char m_vecHitHeroes[0x18]; // 0x1720        
        bool m_bHitInvisibleHeroes; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x3]; // 0x1739
        client::ParticleIndex_t m_nMarkerIndex; // 0x173c        
        bool m_bIsTrackingMissile; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1741[0x3]; // 0x1741
        // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTrackingTarget;
        char m_hTrackingTarget[0x4]; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Call_Down because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Gyrocopter_Call_Down) == 0x1748);
};
