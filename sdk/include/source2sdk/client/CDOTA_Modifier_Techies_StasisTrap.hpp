#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_StasisTrap : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            float activation_radius; // 0x_            
            float stun_radius; // 0x_            
            float stun_duration; // 0x_            
            float explode_delay; // 0x_            
            float activation_time; // 0x_            
            bool m_bActivated; // 0x_            
            bool m_bTriggered; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StasisTrap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Techies_StasisTrap) == 0x_);
    };
};
