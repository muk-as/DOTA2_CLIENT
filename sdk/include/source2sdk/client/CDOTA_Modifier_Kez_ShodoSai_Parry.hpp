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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_ShodoSai_Parry : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nPoseParameterWE; // 0x_            
            std::int32_t m_nPoseParameterNS; // 0x_            
            float m_flLastPoseX; // 0x_            
            float m_flLastPoseY; // 0x_            
            std::int32_t m_nLastMaxDirection; // 0x_            
            Vector m_vLastOrigin; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x_            
            std::int32_t speed_penalty; // 0x_            
            std::int32_t forward_angle; // 0x_            
            float vuln_duration; // 0x_            
            float parry_window_duration; // 0x_            
            float parry_stun_duration; // 0x_            
            // m_vecParriedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecParriedEnemies;
            char m_vecParriedEnemies[0x_]; // 0x_            
            Vector m_vFacing; // 0x_            
            float m_flFacingTarget; // 0x_            
            float m_flLastOverheadTime; // 0x_            
            float m_flOldPitch; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            // m_hVulnAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVulnAttackTarget;
            char m_hVulnAttackTarget[0x_]; // 0x_            
            bool m_bAttackingVuln; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_ShodoSai_Parry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_ShodoSai_Parry) == 0x_);
    };
};
