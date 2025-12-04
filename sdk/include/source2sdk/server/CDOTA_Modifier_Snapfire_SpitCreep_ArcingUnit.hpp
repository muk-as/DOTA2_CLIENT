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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x_            
            Vector m_vStartPosition; // 0x_            
            float m_flCurrentTimeHoriz; // 0x_            
            float m_flCurrentTimeVert; // 0x_            
            bool m_bHorizontalMotionInterrupted; // 0x_            
            bool m_bDamageApplied; // 0x_            
            bool m_bTargetTeleported; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vHorizontalVelocity; // 0x_            
            Vector m_vLastKnownTargetPosition; // 0x_            
            float m_flInitialVelocityZ; // 0x_            
            float m_fClampedProjectileSpeed; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            float m_fAcceleration; // 0x_            
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
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x_);
    };
};
