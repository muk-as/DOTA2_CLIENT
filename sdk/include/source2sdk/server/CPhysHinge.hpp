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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysHinge : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::server::ConstraintSoundInfo m_soundInfo; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x_            
            bool m_bAtMinLimit; // 0x_            
            bool m_bAtMaxLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::vphysics2::constraint_hingeparams_t m_hinge; // 0x_            
            float m_hingeFriction; // 0x_            
            float m_systemLoadScale; // 0x_            
            // metadata: MNotSaved
            bool m_bIsAxisLocal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinRotation; // 0x_            
            float m_flMaxRotation; // 0x_            
            float m_flInitialRotation; // 0x_            
            float m_flMotorFrequency; // 0x_            
            float m_flMotorDampingRatio; // 0x_            
            float m_flAngleSpeed; // 0x_            
            float m_flAngleSpeedThreshold; // 0x_            
            float m_flLimitsDebugVisRotation; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStartMoving; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStopMoving; // 0x_            
            
            // Datamap fields:
            // Vector m_hinge.worldPosition; // 0x_
            // Vector m_hinge.worldAxisDirection; // 0x_
            // float InputSetMotorTargetAngle; // 0x_
            // float InputSetVelocity; // 0x_
            // float InputSetHingeFriction; // 0x_
            // float InputSetMinLimit; // 0x_
            // float InputSetMaxLimit; // 0x_
            // void CPhysHingeSoundThink; // 0x_
            // void CPhysHingeLimitThink; // 0x_
            // void CPhysHingeMoveThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysHinge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysHinge) == 0x_);
    };
};
