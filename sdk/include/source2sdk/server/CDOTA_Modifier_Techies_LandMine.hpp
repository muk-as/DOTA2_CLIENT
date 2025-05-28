#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_LandMine : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            float radius; // 0x1898            
            float proximity_threshold; // 0x189c            
            float damage; // 0x18a0            
            float activation_delay; // 0x18a4            
            float outer_damage; // 0x18a8            
            std::int32_t min_distance; // 0x18ac            
            bool bActivated; // 0x18b0            
            uint8_t _pad18b1[0x7]; // 0x18b1
            source2sdk::server::CountdownTimer m_Timer; // 0x18b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_LandMine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_LandMine) == 0x18d0);
    };
};
