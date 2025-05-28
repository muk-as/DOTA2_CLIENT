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
        class CDOTA_Modifier_Disruptor_KineticField : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            Vector m_vOriginLoc; // 0x188c            
            bool m_bTruesight; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            float damage_per_second; // 0x189c            
            Vector m_vOrigin; // 0x18a0            
            Vector m_vWallRight; // 0x18ac            
            uint8_t _pad18b8[0x4]; // 0x18b8
            bool is_wall; // 0x18bc            
            uint8_t _pad18bd[0x3]; // 0x18bd
            float m_flWallThickness; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Disruptor_KineticField) == 0x18c8);
    };
};
