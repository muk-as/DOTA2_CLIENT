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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_LandMine : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            float radius; // 0x1808            
            float proximity_threshold; // 0x180c            
            float damage; // 0x1810            
            float activation_delay; // 0x1814            
            float outer_damage; // 0x1818            
            std::int32_t min_distance; // 0x181c            
            bool bActivated; // 0x1820            
            uint8_t _pad1821[0x7]; // 0x1821
            source2sdk::server::CountdownTimer m_Timer; // 0x1828            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_LandMine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_LandMine) == 0x1840);
    };
};
