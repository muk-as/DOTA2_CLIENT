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
        // Size: 0x18a8
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
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_KineticField) == 0x18a8);
    };
};
