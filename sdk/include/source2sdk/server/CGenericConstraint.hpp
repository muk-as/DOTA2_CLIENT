#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/JointMotion_t.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"
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
    // Size: 0x660
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CGenericConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x530[0x8]; // 0x530
        physicslib::JointMotion_t m_nLinearMotionX; // 0x538        
        physicslib::JointMotion_t m_nLinearMotionY; // 0x53c        
        physicslib::JointMotion_t m_nLinearMotionZ; // 0x540        
        float m_flLinearFrequencyX; // 0x544        
        float m_flLinearFrequencyY; // 0x548        
        float m_flLinearFrequencyZ; // 0x54c        
        float m_flLinearDampingRatioX; // 0x550        
        float m_flLinearDampingRatioY; // 0x554        
        float m_flLinearDampingRatioZ; // 0x558        
        float m_flMaxLinearImpulseX; // 0x55c        
        float m_flMaxLinearImpulseY; // 0x560        
        float m_flMaxLinearImpulseZ; // 0x564        
        float m_flBreakAfterTimeX; // 0x568        
        float m_flBreakAfterTimeY; // 0x56c        
        float m_flBreakAfterTimeZ; // 0x570        
        entity2::GameTime_t m_flBreakAfterTimeStartTimeX; // 0x574        
        entity2::GameTime_t m_flBreakAfterTimeStartTimeY; // 0x578        
        entity2::GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x57c        
        float m_flBreakAfterTimeThresholdX; // 0x580        
        float m_flBreakAfterTimeThresholdY; // 0x584        
        float m_flBreakAfterTimeThresholdZ; // 0x588        
        float m_flNotifyForceX; // 0x58c        
        float m_flNotifyForceY; // 0x590        
        float m_flNotifyForceZ; // 0x594        
        float m_flNotifyForceMinTimeX; // 0x598        
        float m_flNotifyForceMinTimeY; // 0x59c        
        float m_flNotifyForceMinTimeZ; // 0x5a0        
        entity2::GameTime_t m_flNotifyForceLastTimeX; // 0x5a4        
        entity2::GameTime_t m_flNotifyForceLastTimeY; // 0x5a8        
        entity2::GameTime_t m_flNotifyForceLastTimeZ; // 0x5ac        
        bool m_bAxisNotifiedX; // 0x5b0        
        bool m_bAxisNotifiedY; // 0x5b1        
        bool m_bAxisNotifiedZ; // 0x5b2        
        [[maybe_unused]] std::uint8_t pad_0x5b3[0x1]; // 0x5b3
        physicslib::JointMotion_t m_nAngularMotionX; // 0x5b4        
        physicslib::JointMotion_t m_nAngularMotionY; // 0x5b8        
        physicslib::JointMotion_t m_nAngularMotionZ; // 0x5bc        
        float m_flAngularFrequencyX; // 0x5c0        
        float m_flAngularFrequencyY; // 0x5c4        
        float m_flAngularFrequencyZ; // 0x5c8        
        float m_flAngularDampingRatioX; // 0x5cc        
        float m_flAngularDampingRatioY; // 0x5d0        
        float m_flAngularDampingRatioZ; // 0x5d4        
        float m_flMaxAngularImpulseX; // 0x5d8        
        float m_flMaxAngularImpulseY; // 0x5dc        
        float m_flMaxAngularImpulseZ; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4]; // 0x5e4
        entity2::CEntityIOOutput m_NotifyForceReachedX; // 0x5e8        
        entity2::CEntityIOOutput m_NotifyForceReachedY; // 0x610        
        entity2::CEntityIOOutput m_NotifyForceReachedZ; // 0x638        
        
        // Datamap fields:
        // void CGenericConstraintUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGenericConstraint because it is not a standard-layout class
    static_assert(sizeof(CGenericConstraint) == 0x660);
};
