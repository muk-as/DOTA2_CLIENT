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
        // Size: 0x18f0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_cost_perc_per_second; // 0x1878            
            std::int32_t beam_range; // 0x187c            
            std::int32_t base_damage; // 0x1880            
            std::int32_t base_heal; // 0x1884            
            float tick_interval; // 0x1888            
            float forward_move_speed; // 0x188c            
            float turn_rate_initial; // 0x1890            
            float turn_rate; // 0x1894            
            std::int32_t radius; // 0x1898            
            std::int32_t self_turn_rate_percent; // 0x189c            
            float m_flCurrentTime; // 0x18a0            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x18a4            
            float m_flAccumulatedSelfDamage; // 0x18a8            
            bool m_bMovingForward; // 0x18ac            
            bool m_bTurningFast; // 0x18ad            
            uint8_t _pad18ae[0x2]; // 0x18ae
            float m_flFacingTarget; // 0x18b0            
            float hp_perc_damage; // 0x18b4            
            float hp_perc_heal; // 0x18b8            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x18bc            
            // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVisionThinkers[8];
            char m_hVisionThinkers[0x20]; // 0x18c0            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x18e0            
            bool m_bCreatedVisionThinkers; // 0x18e4            
            uint8_t _pad18e5[0x3]; // 0x18e5
            // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEndSound;
            char m_hBeamEndSound[0x4]; // 0x18e8            
            uint8_t _pad18ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay) == 0x18f0);
    };
};
