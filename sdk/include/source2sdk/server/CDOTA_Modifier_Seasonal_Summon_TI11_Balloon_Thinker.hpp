#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float speed; // 0x1878            
            std::int32_t min_distance_before_bounce; // 0x187c            
            float drag; // 0x1880            
            float max_height; // 0x1884            
            float max_vertical_move_time; // 0x1888            
            float bounce_turn_angle; // 0x188c            
            float bounce_turn_angle_tree; // 0x1890            
            float bounce_delay; // 0x1894            
            std::int32_t max_bounces; // 0x1898            
            float max_model_scale; // 0x189c            
            float power_growth_exponent; // 0x18a0            
            Vector m_vLastPos; // 0x18a4            
            Vector m_vDir; // 0x18b0            
            float m_flSpeed; // 0x18bc            
            float m_flDistRemaining; // 0x18c0            
            float m_flTreeTimeRemaining; // 0x18c4            
            std::int32_t m_nTimesBounced; // 0x18c8            
            float m_flModelScale; // 0x18cc            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHit;
            char m_hLastHit[0x4]; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker) == 0x18d8);
    };
};
