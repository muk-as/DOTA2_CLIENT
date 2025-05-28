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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_width; // 0x1888            
            float scepter_duration; // 0x188c            
            bool play_particle; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            Vector m_vStart; // 0x1894            
            Vector m_vEnd; // 0x18a0            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Shockwave_Erupt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Magnataur_Shockwave_Erupt) == 0x18b0);
    };
};
