#pragma once
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x198
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorMoveToNPCToAttack
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x148[0x8]; // 0x148
        bool m_bMovingToLastKnownTargetPosition; // 0x150        
        [[maybe_unused]] std::uint8_t pad_0x151[0x7]; // 0x151
        server::CountdownTimer m_AttackDelay; // 0x158        
        server::CountdownTimer m_ChaseLimit; // 0x170        
        bool m_bInAttackPosition; // 0x188        
        bool m_bTurningToTarget; // 0x189        
        [[maybe_unused]] std::uint8_t pad_0x18a[0x2]; // 0x18a
        float m_flTargetAngle; // 0x18c        
        bool m_bAttackMove; // 0x190        
        [[maybe_unused]] std::uint8_t pad_0x191[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_bMovingToLastKnownTargetPosition) == 0x150);
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_AttackDelay) == 0x158);
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_ChaseLimit) == 0x170);
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_bInAttackPosition) == 0x188);
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_bTurningToTarget) == 0x189);
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_flTargetAngle) == 0x18c);
    static_assert(offsetof(CDOTABehaviorMoveToNPCToAttack, m_bAttackMove) == 0x190);
    
    static_assert(sizeof(CDOTABehaviorMoveToNPCToAttack) == 0x198);
};
