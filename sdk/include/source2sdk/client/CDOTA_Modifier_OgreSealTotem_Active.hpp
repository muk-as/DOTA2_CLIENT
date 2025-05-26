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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_OgreSealTotem_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nCurrentBounce; // 0x1878            
            std::int32_t leap_distance; // 0x187c            
            float leap_speed; // 0x1880            
            float leap_acceleration; // 0x1884            
            std::int32_t leap_radius; // 0x1888            
            float leap_bonus_duration; // 0x188c            
            bool m_bLaunched; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            float m_flFacingTarget; // 0x1894            
            float movement_turn_rate; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_OgreSealTotem_Active) == 0x18a0);
    };
};
