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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float min_range; // 0x_            
            float min_lob_travel_time; // 0x_            
            float max_lob_travel_time; // 0x_            
            float impact_radius; // 0x_            
            float projectile_vision; // 0x_            
            float stun_duration; // 0x_            
            float min_height_above_lowest; // 0x_            
            float min_height_above_highest; // 0x_            
            float min_acceleration; // 0x_            
            float max_acceleration; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x_);
    };
};
