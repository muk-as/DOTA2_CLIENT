#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"
#include "source2sdk/vphysics2/constraint_hingeparams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6f8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPhysHinge : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x558[0x8]; // 0x558
        server::ConstraintSoundInfo m_soundInfo; // 0x560        
        entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x5e8        
        entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x610        
        bool m_bAtMinLimit; // 0x638        
        bool m_bAtMaxLimit; // 0x639        
        [[maybe_unused]] std::uint8_t pad_0x63a[0x2]; // 0x63a
        vphysics2::constraint_hingeparams_t m_hinge; // 0x63c        
        float m_hingeFriction; // 0x67c        
        float m_systemLoadScale; // 0x680        
        bool m_bIsAxisLocal; // 0x684        
        [[maybe_unused]] std::uint8_t pad_0x685[0x3]; // 0x685
        float m_flMinRotation; // 0x688        
        float m_flMaxRotation; // 0x68c        
        float m_flInitialRotation; // 0x690        
        float m_flMotorFrequency; // 0x694        
        float m_flMotorDampingRatio; // 0x698        
        float m_flAngleSpeed; // 0x69c        
        float m_flAngleSpeedThreshold; // 0x6a0        
        [[maybe_unused]] std::uint8_t pad_0x6a4[0x4]; // 0x6a4
        entity2::CEntityIOOutput m_OnStartMoving; // 0x6a8        
        entity2::CEntityIOOutput m_OnStopMoving; // 0x6d0        
        
        // Datamap fields:
        // Vector m_hinge.worldPosition; // 0x63c
        // Vector m_hinge.worldAxisDirection; // 0x648
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
    static_assert(sizeof(CPhysHinge) == 0x6f8);
};
