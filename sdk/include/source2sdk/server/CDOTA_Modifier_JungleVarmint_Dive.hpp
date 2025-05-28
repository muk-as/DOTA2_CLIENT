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
        class CDOTA_Modifier_JungleVarmint_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1888            
            float m_flInitialVelocity; // 0x188c            
            Vector m_vStartPosition; // 0x1890            
            Vector m_vTargetHorizontalDirection; // 0x189c            
            float m_flCurrentTimeHoriz; // 0x18a8            
            float m_flCurrentTimeVert; // 0x18ac            
            bool m_bInterrupted; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            std::int32_t distance; // 0x18b4            
            float speed; // 0x18b8            
            float acceleration; // 0x18bc            
            std::int32_t radius; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_JungleVarmint_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_JungleVarmint_Dive) == 0x18c8);
    };
};
