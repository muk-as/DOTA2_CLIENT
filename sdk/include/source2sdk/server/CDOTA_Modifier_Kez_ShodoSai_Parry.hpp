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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_ShodoSai_Parry : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed_penalty; // 0x1878            
            std::int32_t forward_angle; // 0x187c            
            float vuln_duration; // 0x1880            
            float parry_window_duration; // 0x1884            
            float parry_stun_duration; // 0x1888            
            uint8_t _pad188c[0x4]; // 0x188c
            // m_vecParriedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecParriedEnemies;
            char m_vecParriedEnemies[0x18]; // 0x1890            
            Vector m_vFacing; // 0x18a8            
            float m_flFacingTarget; // 0x18b4            
            float m_flLastOverheadTime; // 0x18b8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18bc            
            // m_hVulnAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVulnAttackTarget;
            char m_hVulnAttackTarget[0x4]; // 0x18c0            
            bool m_bAttackingVuln; // 0x18c4            
            uint8_t _pad18c5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_ShodoSai_Parry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_ShodoSai_Parry) == 0x18c8);
    };
};
