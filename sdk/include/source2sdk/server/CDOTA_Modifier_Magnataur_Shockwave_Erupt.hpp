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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_width; // 0x_            
            float scepter_duration; // 0x_            
            bool play_particle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vStart; // 0x_            
            Vector m_vEnd; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Shockwave_Erupt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Shockwave_Erupt) == 0x_);
    };
};
