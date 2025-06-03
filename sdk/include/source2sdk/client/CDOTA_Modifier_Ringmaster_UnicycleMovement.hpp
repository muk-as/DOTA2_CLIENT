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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_UnicycleMovement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_speed; // 0x1878            
            float acceleration; // 0x187c            
            float turn_rate_min; // 0x1880            
            float turn_rate_max; // 0x1884            
            float impact_radius; // 0x1888            
            float tree_impact_speed_divisor; // 0x188c            
            float knockback_distance; // 0x1890            
            float damage_threshold; // 0x1894            
            float damage_grace_period; // 0x1898            
            float m_flCurrentSpeed; // 0x189c            
            float m_bCrashScheduled; // 0x18a0            
            float m_flDesiredYaw; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nMaxSpeedFXIndex; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_UnicycleMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_UnicycleMovement) == 0x18b0);
    };
};
