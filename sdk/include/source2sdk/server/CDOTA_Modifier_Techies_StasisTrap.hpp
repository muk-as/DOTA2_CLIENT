#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_StasisTrap : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            float activation_radius; // 0x1808            
            float stun_radius; // 0x180c            
            float stun_duration; // 0x1810            
            float explode_delay; // 0x1814            
            float activation_time; // 0x1818            
            bool m_bActivated; // 0x181c            
            bool m_bTriggered; // 0x181d            
            uint8_t _pad181e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StasisTrap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_StasisTrap) == 0x1820);
    };
};
