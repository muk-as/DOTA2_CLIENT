#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Scurry_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_speed_pct; // 0x17f8            
            std::int32_t attack_range; // 0x17fc            
            std::int32_t cast_range; // 0x1800            
            float radius_increase; // 0x1804            
            float m_flTreeDuration; // 0x1808            
            float evasion_multiplier; // 0x180c            
            bool m_bIgnoreInCalc; // 0x1810            
            uint8_t _pad1811[0x3]; // 0x1811
            source2sdk::entity2::GameTime_t m_flLastCalculationTime; // 0x1814            
            float m_flTotalEvasion; // 0x1818            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Scurry_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Scurry_Active) == 0x1820);
    };
};
