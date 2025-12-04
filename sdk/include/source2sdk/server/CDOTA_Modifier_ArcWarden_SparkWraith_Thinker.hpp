#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float wraith_vision_radius; // 0x_            
            std::int32_t wraith_speed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float activation_delay; // 0x_            
            float think_interval; // 0x_            
            float m_flSparkDamage; // 0x_            
            std::int32_t m_nViewerID; // 0x_            
            std::int32_t m_nViewerTeam; // 0x_            
            bool m_bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t maximum_targets; // 0x_            
            float second_wraith_damage_pct; // 0x_            
            float second_wraith_speed_pct; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x_);
    };
};
