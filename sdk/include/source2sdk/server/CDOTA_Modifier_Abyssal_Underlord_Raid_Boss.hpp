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
        class CDOTA_Modifier_Abyssal_Underlord_Raid_Boss : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_reduction; // 0x_            
            float bonus_ms; // 0x_            
            float buff_duration; // 0x_            
            float dark_portal_multiplier; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Abyssal_Underlord_Raid_Boss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Abyssal_Underlord_Raid_Boss) == 0x_);
    };
};
