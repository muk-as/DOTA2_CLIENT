#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18e8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_ShodoSai_Parry : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nPoseParameterWE; // 0x1878            
            std::int32_t m_nPoseParameterNS; // 0x187c            
            float m_flLastPoseX; // 0x1880            
            float m_flLastPoseY; // 0x1884            
            std::int32_t m_nLastMaxDirection; // 0x1888            
            Vector m_vLastOrigin; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x1898            
            std::int32_t speed_penalty; // 0x189c            
            std::int32_t forward_angle; // 0x18a0            
            float vuln_duration; // 0x18a4            
            float parry_window_duration; // 0x18a8            
            float parry_stun_duration; // 0x18ac            
            // m_vecParriedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecParriedEnemies;
            char m_vecParriedEnemies[0x18]; // 0x18b0            
            Vector m_vFacing; // 0x18c8            
            float m_flFacingTarget; // 0x18d4            
            float m_flLastOverheadTime; // 0x18d8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18dc            
            // m_hVulnAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVulnAttackTarget;
            char m_hVulnAttackTarget[0x4]; // 0x18e0            
            bool m_bAttackingVuln; // 0x18e4            
            uint8_t _pad18e5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_ShodoSai_Parry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_ShodoSai_Parry) == 0x18e8);
    };
};
