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
        // Size: 0x1858
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float speed; // 0x17f8            
            std::int32_t min_distance_before_bounce; // 0x17fc            
            float drag; // 0x1800            
            float max_height; // 0x1804            
            float max_vertical_move_time; // 0x1808            
            float bounce_turn_angle; // 0x180c            
            float bounce_turn_angle_tree; // 0x1810            
            float bounce_delay; // 0x1814            
            std::int32_t max_bounces; // 0x1818            
            float max_model_scale; // 0x181c            
            float power_growth_exponent; // 0x1820            
            Vector m_vLastPos; // 0x1824            
            Vector m_vDir; // 0x1830            
            float m_flSpeed; // 0x183c            
            float m_flDistRemaining; // 0x1840            
            float m_flTreeTimeRemaining; // 0x1844            
            std::int32_t m_nTimesBounced; // 0x1848            
            float m_flModelScale; // 0x184c            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastHit;
            char m_hLastHit[0x4]; // 0x1850            
            uint8_t _pad1854[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker) == 0x1858);
    };
};
