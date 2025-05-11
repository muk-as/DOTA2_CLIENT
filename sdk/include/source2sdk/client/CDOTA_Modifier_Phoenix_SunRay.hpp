#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1878
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Phoenix_SunRay : public source2sdk::client::CDOTA_Buff
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
            float radius; // 0x1818            
            float m_flCurrentTime; // 0x181c            
            float m_flAccumulatedSelfDamage; // 0x1820            
            bool m_bMovingForward; // 0x1824            
            bool m_bTurningFast; // 0x1825            
            uint8_t _pad1826[0x2]; // 0x1826
            float m_flFacingTarget; // 0x1828            
            float hp_perc_damage; // 0x182c            
            float hp_perc_heal; // 0x1830            
            float blind_duration; // 0x1834            
            float blind_per_second; // 0x1838            
            std::int32_t focal_point_max_multiplier; // 0x183c            
            std::int32_t focal_point_start_length_pct; // 0x1840            
            std::int32_t focal_point_blind_stack_multiplier; // 0x1844            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1848            
            // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVisionThinkers[8];
            char m_hVisionThinkers[0x20]; // 0x184c            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x186c            
            bool m_bCreatedVisionThinkers; // 0x1870            
            uint8_t _pad1871[0x3]; // 0x1871
            // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEndSound;
            char m_hBeamEndSound[0x4]; // 0x1874            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_SunRay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Phoenix_SunRay) == 0x1878);
    };
};
