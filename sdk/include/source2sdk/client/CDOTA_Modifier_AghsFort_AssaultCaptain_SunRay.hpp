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
        // Size: 0x1870
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_cost_perc_per_second; // 0x17f8            
            std::int32_t beam_range; // 0x17fc            
            std::int32_t base_damage; // 0x1800            
            std::int32_t base_heal; // 0x1804            
            float tick_interval; // 0x1808            
            float forward_move_speed; // 0x180c            
            float turn_rate_initial; // 0x1810            
            float turn_rate; // 0x1814            
            std::int32_t radius; // 0x1818            
            std::int32_t self_turn_rate_percent; // 0x181c            
            float m_flCurrentTime; // 0x1820            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x1824            
            float m_flAccumulatedSelfDamage; // 0x1828            
            bool m_bMovingForward; // 0x182c            
            bool m_bTurningFast; // 0x182d            
            uint8_t _pad182e[0x2]; // 0x182e
            float m_flFacingTarget; // 0x1830            
            float hp_perc_damage; // 0x1834            
            float hp_perc_heal; // 0x1838            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x183c            
            // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVisionThinkers[8];
            char m_hVisionThinkers[0x20]; // 0x1840            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1860            
            bool m_bCreatedVisionThinkers; // 0x1864            
            uint8_t _pad1865[0x3]; // 0x1865
            // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEndSound;
            char m_hBeamEndSound[0x4]; // 0x1868            
            uint8_t _pad186c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay) == 0x1870);
    };
};
