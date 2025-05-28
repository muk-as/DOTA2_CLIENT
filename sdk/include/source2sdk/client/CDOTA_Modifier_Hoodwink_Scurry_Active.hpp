#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Scurry_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_speed_pct; // 0x1888            
            std::int32_t attack_range; // 0x188c            
            std::int32_t cast_range; // 0x1890            
            float radius_increase; // 0x1894            
            float evasion_multiplier; // 0x1898            
            bool m_bIgnoreInCalc; // 0x189c            
            uint8_t _pad189d[0x3]; // 0x189d
            source2sdk::entity2::GameTime_t m_flLastCalculationTime; // 0x18a0            
            float m_flTotalEvasion; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Scurry_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Hoodwink_Scurry_Active) == 0x18a8);
    };
};
