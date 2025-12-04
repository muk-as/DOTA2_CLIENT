#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_cost_perc_per_second; // 0x_            
            std::int32_t beam_range; // 0x_            
            std::int32_t base_damage; // 0x_            
            std::int32_t base_heal; // 0x_            
            float tick_interval; // 0x_            
            float forward_move_speed; // 0x_            
            float turn_rate_initial; // 0x_            
            float turn_rate; // 0x_            
            std::int32_t radius; // 0x_            
            std::int32_t self_turn_rate_percent; // 0x_            
            float m_flCurrentTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x_            
            float m_flAccumulatedSelfDamage; // 0x_            
            bool m_bMovingForward; // 0x_            
            bool m_bTurningFast; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFacingTarget; // 0x_            
            float hp_perc_damage; // 0x_            
            float hp_perc_heal; // 0x_            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x_            
            // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVisionThinkers[8];
            char m_hVisionThinkers[0x_]; // 0x_            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x_]; // 0x_            
            bool m_bCreatedVisionThinkers; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEndSound;
            char m_hBeamEndSound[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay) == 0x_);
    };
};
