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
        // Size: 0x1868
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x17f8            
            Vector m_vStartPosition; // 0x17fc            
            float m_flCurrentTimeHoriz; // 0x1808            
            float m_flCurrentTimeVert; // 0x180c            
            bool m_bHorizontalMotionInterrupted; // 0x1810            
            bool m_bDamageApplied; // 0x1811            
            bool m_bTargetTeleported; // 0x1812            
            uint8_t _pad1813[0x1]; // 0x1813
            Vector m_vHorizontalVelocity; // 0x1814            
            Vector m_vLastKnownTargetPosition; // 0x1820            
            float m_flInitialVelocityZ; // 0x182c            
            float m_fClampedProjectileSpeed; // 0x1830            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1834            
            float m_fAcceleration; // 0x1838            
            float min_range; // 0x183c            
            float min_lob_travel_time; // 0x1840            
            float max_lob_travel_time; // 0x1844            
            float impact_radius; // 0x1848            
            float projectile_vision; // 0x184c            
            float stun_duration; // 0x1850            
            float min_height_above_lowest; // 0x1854            
            float min_height_above_highest; // 0x1858            
            float min_acceleration; // 0x185c            
            float max_acceleration; // 0x1860            
            uint8_t _pad1864[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x1868);
    };
};
