#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Ringmaster_UnicycleMovement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_speed; // 0x_            
            float acceleration; // 0x_            
            float turn_rate_min; // 0x_            
            float turn_rate_max; // 0x_            
            float impact_radius; // 0x_            
            float tree_impact_speed_divisor; // 0x_            
            float knockback_distance; // 0x_            
            float damage_threshold; // 0x_            
            float damage_grace_period; // 0x_            
            float m_flCurrentSpeed; // 0x_            
            float m_bCrashScheduled; // 0x_            
            float m_flDesiredYaw; // 0x_            
            source2sdk::client::ParticleIndex_t m_nMaxSpeedFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_UnicycleMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_UnicycleMovement) == 0x_);
    };
};
