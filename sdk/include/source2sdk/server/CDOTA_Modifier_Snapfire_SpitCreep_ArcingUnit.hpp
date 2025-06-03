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
        // Size: 0x18e8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1878            
            Vector m_vStartPosition; // 0x187c            
            float m_flCurrentTimeHoriz; // 0x1888            
            float m_flCurrentTimeVert; // 0x188c            
            bool m_bHorizontalMotionInterrupted; // 0x1890            
            bool m_bDamageApplied; // 0x1891            
            bool m_bTargetTeleported; // 0x1892            
            uint8_t _pad1893[0x1]; // 0x1893
            Vector m_vHorizontalVelocity; // 0x1894            
            Vector m_vLastKnownTargetPosition; // 0x18a0            
            float m_flInitialVelocityZ; // 0x18ac            
            float m_fClampedProjectileSpeed; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b4            
            float m_fAcceleration; // 0x18b8            
            float min_range; // 0x18bc            
            float min_lob_travel_time; // 0x18c0            
            float max_lob_travel_time; // 0x18c4            
            float impact_radius; // 0x18c8            
            float projectile_vision; // 0x18cc            
            float stun_duration; // 0x18d0            
            float min_height_above_lowest; // 0x18d4            
            float min_height_above_highest; // 0x18d8            
            float min_acceleration; // 0x18dc            
            float max_acceleration; // 0x18e0            
            uint8_t _pad18e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x18e8);
    };
};
