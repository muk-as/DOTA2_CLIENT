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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_width; // 0x1878            
            float scepter_duration; // 0x187c            
            bool play_particle; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            Vector m_vStart; // 0x1884            
            Vector m_vEnd; // 0x1890            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Shockwave_Erupt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Shockwave_Erupt) == 0x18a0);
    };
};
