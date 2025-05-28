#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            float wraith_vision_radius; // 0x188c            
            std::int32_t wraith_speed; // 0x1890            
            uint8_t _pad1894[0x14]; // 0x1894
            float activation_delay; // 0x18a8            
            float think_interval; // 0x18ac            
            float m_flSparkDamage; // 0x18b0            
            std::int32_t m_nViewerID; // 0x18b4            
            std::int32_t m_nViewerTeam; // 0x18b8            
            bool m_bActive; // 0x18bc            
            uint8_t _pad18bd[0x3]; // 0x18bd
            std::int32_t maximum_targets; // 0x18c0            
            float second_wraith_damage_pct; // 0x18c4            
            float second_wraith_speed_pct; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x18d0);
    };
};
