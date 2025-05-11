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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            float wraith_vision_radius; // 0x17fc            
            std::int32_t wraith_speed; // 0x1800            
            uint8_t _pad1804[0x8]; // 0x1804
            float activation_delay; // 0x180c            
            float think_interval; // 0x1810            
            float m_flSparkDamage; // 0x1814            
            std::int32_t m_nViewerID; // 0x1818            
            std::int32_t m_nViewerTeam; // 0x181c            
            bool m_bActive; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            std::int32_t maximum_targets; // 0x1824            
            float second_wraith_damage_pct; // 0x1828            
            float second_wraith_speed_pct; // 0x182c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x1830);
    };
};
