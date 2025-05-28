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
        // Size: 0x18f8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1888            
            Vector m_vStartPosition; // 0x188c            
            float m_flCurrentTimeHoriz; // 0x1898            
            float m_flCurrentTimeVert; // 0x189c            
            bool m_bHorizontalMotionInterrupted; // 0x18a0            
            bool m_bDamageApplied; // 0x18a1            
            bool m_bTargetTeleported; // 0x18a2            
            uint8_t _pad18a3[0x1]; // 0x18a3
            Vector m_vHorizontalVelocity; // 0x18a4            
            Vector m_vLastKnownTargetPosition; // 0x18b0            
            float m_flInitialVelocityZ; // 0x18bc            
            float m_fClampedProjectileSpeed; // 0x18c0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18c4            
            float m_fAcceleration; // 0x18c8            
            float min_range; // 0x18cc            
            float min_lob_travel_time; // 0x18d0            
            float max_lob_travel_time; // 0x18d4            
            float impact_radius; // 0x18d8            
            float projectile_vision; // 0x18dc            
            float stun_duration; // 0x18e0            
            float min_height_above_lowest; // 0x18e4            
            float min_height_above_highest; // 0x18e8            
            float min_acceleration; // 0x18ec            
            float max_acceleration; // 0x18f0            
            uint8_t _pad18f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x18f8);
    };
};
