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
        class CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_threshold; // 0x_            
            float effect_radius; // 0x_            
            float knockback; // 0x_            
            float knockback_duration; // 0x_            
            float damage_reset_interval; // 0x_            
            float m_flAccumulatedDamage; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive) == 0x_);
    };
};
