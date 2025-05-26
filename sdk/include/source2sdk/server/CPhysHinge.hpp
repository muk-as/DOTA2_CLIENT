#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"
#include "source2sdk/vphysics2/constraint_hingeparams_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x700
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysHinge : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0550[0x8]; // 0x550
            source2sdk::server::ConstraintSoundInfo m_soundInfo; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x618            
            bool m_bAtMinLimit; // 0x640            
            bool m_bAtMaxLimit; // 0x641            
            uint8_t _pad0642[0x2]; // 0x642
            source2sdk::vphysics2::constraint_hingeparams_t m_hinge; // 0x644            
            float m_hingeFriction; // 0x684            
            float m_systemLoadScale; // 0x688            
            bool m_bIsAxisLocal; // 0x68c            
            uint8_t _pad068d[0x3]; // 0x68d
            float m_flMinRotation; // 0x690            
            float m_flMaxRotation; // 0x694            
            float m_flInitialRotation; // 0x698            
            float m_flMotorFrequency; // 0x69c            
            float m_flMotorDampingRatio; // 0x6a0            
            float m_flAngleSpeed; // 0x6a4            
            float m_flAngleSpeedThreshold; // 0x6a8            
            uint8_t _pad06ac[0x4]; // 0x6ac
            source2sdk::entity2::CEntityIOOutput m_OnStartMoving; // 0x6b0            
            source2sdk::entity2::CEntityIOOutput m_OnStopMoving; // 0x6d8            
            
            // Datamap fields:
            // Vector m_hinge.worldPosition; // 0x644
            // Vector m_hinge.worldAxisDirection; // 0x650
            // float InputSetMotorTargetAngle; // 0x0
            // float InputSetVelocity; // 0x0
            // float InputSetHingeFriction; // 0x0
            // float InputSetMinLimit; // 0x0
            // float InputSetMaxLimit; // 0x0
            // void CPhysHingeSoundThink; // 0x0
            // void CPhysHingeLimitThink; // 0x0
            // void CPhysHingeMoveThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysHinge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysHinge) == 0x700);
    };
};
