#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_UnicycleMovement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_speed; // 0x17f8            
            float acceleration; // 0x17fc            
            float turn_rate_min; // 0x1800            
            float turn_rate_max; // 0x1804            
            float impact_radius; // 0x1808            
            float tree_impact_speed_divisor; // 0x180c            
            float knockback_distance; // 0x1810            
            float damage_threshold; // 0x1814            
            float damage_grace_period; // 0x1818            
            float m_flCurrentSpeed; // 0x181c            
            float m_bCrashScheduled; // 0x1820            
            float m_flDesiredYaw; // 0x1824            
            source2sdk::client::ParticleIndex_t m_nMaxSpeedFXIndex; // 0x1828            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_UnicycleMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_UnicycleMovement) == 0x1830);
    };
};
