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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker : public source2sdk::client::CDOTA_Buff
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
            Vector m_vLastPos; // 0x1898            
            Vector m_vDir; // 0x18a4            
            float m_flSpeed; // 0x18b0            
            float m_flDistRemaining; // 0x18b4            
            float m_flTreeTimeRemaining; // 0x18b8            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHit;
            char m_hLastHit[0x4]; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker) == 0x18c0);
    };
};
