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
        class CDOTA_Modifier_Ringmaster_Impalement_Bleed : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bleed_health_pct; // 0x1888            
            float tick_interval; // 0x188c            
            float wheel_damage_multiplier; // 0x1890            
            float slow_percent; // 0x1894            
            float bleed_creep_dps; // 0x1898            
            float slow_duration; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Impalement_Bleed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_Impalement_Bleed) == 0x18a0);
    };
};
