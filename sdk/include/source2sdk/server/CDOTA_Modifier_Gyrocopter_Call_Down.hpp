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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Gyrocopter_Call_Down : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_duration; // 0x17f8            
            std::int32_t damage; // 0x17fc            
            std::int32_t radius; // 0x1800            
            std::int32_t slow; // 0x1804            
            bool m_bDelayed; // 0x1808            
            bool m_bAttachToRocket1; // 0x1809            
            uint8_t _pad180a[0x6]; // 0x180a
            // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitHeroes;
            char m_vecHitHeroes[0x18]; // 0x1810            
            bool m_bHitInvisibleHeroes; // 0x1828            
            uint8_t _pad1829[0x3]; // 0x1829
            source2sdk::client::ParticleIndex_t m_nMarkerIndex; // 0x182c            
            bool m_bIsTrackingMissile; // 0x1830            
            uint8_t _pad1831[0x3]; // 0x1831
            // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrackingTarget;
            char m_hTrackingTarget[0x4]; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Call_Down because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Gyrocopter_Call_Down) == 0x1838);
    };
};
