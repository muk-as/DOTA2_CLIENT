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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_threshold; // 0x1878            
            float effect_radius; // 0x187c            
            float knockback; // 0x1880            
            float knockback_duration; // 0x1884            
            float damage_reset_interval; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive) == 0x1890);
    };
};
