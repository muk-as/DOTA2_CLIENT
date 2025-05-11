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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_width; // 0x17f8            
            float scepter_duration; // 0x17fc            
            bool play_particle; // 0x1800            
            uint8_t _pad1801[0x3]; // 0x1801
            Vector m_vStart; // 0x1804            
            Vector m_vEnd; // 0x1810            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Shockwave_Erupt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Magnataur_Shockwave_Erupt) == 0x1820);
    };
};
