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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float min_range; // 0x1878            
            float min_lob_travel_time; // 0x187c            
            float max_lob_travel_time; // 0x1880            
            float impact_radius; // 0x1884            
            float projectile_vision; // 0x1888            
            float stun_duration; // 0x188c            
            float min_height_above_lowest; // 0x1890            
            float min_height_above_highest; // 0x1894            
            float min_acceleration; // 0x1898            
            float max_acceleration; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x18a0);
    };
};
