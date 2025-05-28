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
        // Size: 0x1908
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Phoenix_SunRay : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_cost_perc_per_second; // 0x1888            
            std::int32_t beam_range; // 0x188c            
            std::int32_t base_damage; // 0x1890            
            std::int32_t base_heal; // 0x1894            
            float tick_interval; // 0x1898            
            float forward_move_speed; // 0x189c            
            float turn_rate_initial; // 0x18a0            
            float turn_rate; // 0x18a4            
            float radius; // 0x18a8            
            float m_flCurrentTime; // 0x18ac            
            float m_flAccumulatedSelfDamage; // 0x18b0            
            bool m_bMovingForward; // 0x18b4            
            bool m_bTurningFast; // 0x18b5            
            uint8_t _pad18b6[0x2]; // 0x18b6
            float m_flFacingTarget; // 0x18b8            
            float hp_perc_damage; // 0x18bc            
            float hp_perc_heal; // 0x18c0            
            float blind_duration; // 0x18c4            
            float blind_per_second; // 0x18c8            
            std::int32_t focal_point_max_multiplier; // 0x18cc            
            std::int32_t focal_point_start_length_pct; // 0x18d0            
            std::int32_t focal_point_blind_stack_multiplier; // 0x18d4            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x18d8            
            // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVisionThinkers[8];
            char m_hVisionThinkers[0x20]; // 0x18dc            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x18fc            
            bool m_bCreatedVisionThinkers; // 0x1900            
            uint8_t _pad1901[0x3]; // 0x1901
            // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEndSound;
            char m_hBeamEndSound[0x4]; // 0x1904            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_SunRay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Phoenix_SunRay) == 0x1908);
    };
};
