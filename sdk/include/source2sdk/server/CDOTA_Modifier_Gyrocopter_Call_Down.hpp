#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Gyrocopter_Call_Down : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_duration; // 0x1878            
            std::int32_t damage; // 0x187c            
            float radius; // 0x1880            
            std::int32_t slow; // 0x1884            
            bool m_bDelayed; // 0x1888            
            bool m_bAttachToRocket1; // 0x1889            
            uint8_t _pad188a[0x6]; // 0x188a
            // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitHeroes;
            char m_vecHitHeroes[0x18]; // 0x1890            
            bool m_bHitInvisibleHeroes; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            source2sdk::client::ParticleIndex_t m_nMarkerIndex; // 0x18ac            
            bool m_bIsTrackingMissile; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrackingTarget;
            char m_hTrackingTarget[0x4]; // 0x18b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Call_Down because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Gyrocopter_Call_Down) == 0x18b8);
    };
};
