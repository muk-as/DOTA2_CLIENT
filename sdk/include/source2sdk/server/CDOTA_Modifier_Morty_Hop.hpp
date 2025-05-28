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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morty_Hop : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vStartPosition; // 0x1888            
            Vector m_vTargetPosition; // 0x1894            
            float m_flCurrentTimeHoriz; // 0x18a0            
            float m_flCurrentTimeVert; // 0x18a4            
            float m_flZCoefficientA; // 0x18a8            
            float m_flZCoefficientB; // 0x18ac            
            bool m_bInterrupted; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            float duration; // 0x18b4            
            std::int32_t height; // 0x18b8            
            std::int32_t damage; // 0x18bc            
            std::int32_t damage_radius; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morty_Hop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Morty_Hop) == 0x18c8);
    };
};
