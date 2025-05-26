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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            float wraith_vision_radius; // 0x187c            
            std::int32_t wraith_speed; // 0x1880            
            uint8_t _pad1884[0x14]; // 0x1884
            float activation_delay; // 0x1898            
            float think_interval; // 0x189c            
            float m_flSparkDamage; // 0x18a0            
            std::int32_t m_nViewerID; // 0x18a4            
            std::int32_t m_nViewerTeam; // 0x18a8            
            bool m_bActive; // 0x18ac            
            uint8_t _pad18ad[0x3]; // 0x18ad
            std::int32_t maximum_targets; // 0x18b0            
            float second_wraith_damage_pct; // 0x18b4            
            float second_wraith_speed_pct; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x18c0);
    };
};
