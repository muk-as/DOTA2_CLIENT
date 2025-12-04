#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        class CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float speed; // 0x_            
            std::int32_t min_distance_before_bounce; // 0x_            
            float drag; // 0x_            
            float max_height; // 0x_            
            float max_vertical_move_time; // 0x_            
            float bounce_turn_angle; // 0x_            
            float bounce_turn_angle_tree; // 0x_            
            float bounce_delay; // 0x_            
            Vector m_vLastPos; // 0x_            
            Vector m_vDir; // 0x_            
            float m_flSpeed; // 0x_            
            float m_flDistRemaining; // 0x_            
            float m_flTreeTimeRemaining; // 0x_            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastHit;
            char m_hLastHit[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker) == 0x_);
    };
};
