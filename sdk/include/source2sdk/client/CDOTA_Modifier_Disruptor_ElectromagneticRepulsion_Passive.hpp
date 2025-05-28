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
        class CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_threshold; // 0x1888            
            float effect_radius; // 0x188c            
            float knockback; // 0x1890            
            float knockback_duration; // 0x1894            
            float damage_reset_interval; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive) == 0x18a0);
    };
};
