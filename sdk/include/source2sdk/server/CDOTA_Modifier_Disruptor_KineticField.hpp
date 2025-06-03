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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Disruptor_KineticField : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            Vector m_vOriginLoc; // 0x187c            
            bool m_bTruesight; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            float damage_per_second; // 0x188c            
            Vector m_vOrigin; // 0x1890            
            Vector m_vWallRight; // 0x189c            
            uint8_t _pad18a8[0x4]; // 0x18a8
            bool is_wall; // 0x18ac            
            uint8_t _pad18ad[0x3]; // 0x18ad
            float m_flWallThickness; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Disruptor_KineticField) == 0x18b8);
    };
};
