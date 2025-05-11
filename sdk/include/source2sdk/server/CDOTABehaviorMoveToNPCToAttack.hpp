#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            uint8_t _pad0148[0x8]; // 0x148
            bool m_bMovingToLastKnownTargetPosition; // 0x150            
            uint8_t _pad0151[0x7]; // 0x151
            source2sdk::server::CountdownTimer m_AttackDelay; // 0x158            
            source2sdk::server::CountdownTimer m_ChaseLimit; // 0x170            
            bool m_bInAttackPosition; // 0x188            
            bool m_bTurningToTarget; // 0x189            
            uint8_t _pad018a[0x2]; // 0x18a
            float m_flTargetAngle; // 0x18c            
            bool m_bAttackMove; // 0x190            
            uint8_t _pad0191[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bMovingToLastKnownTargetPosition) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_AttackDelay) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_ChaseLimit) == 0x170);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bInAttackPosition) == 0x188);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bTurningToTarget) == 0x189);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_flTargetAngle) == 0x18c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bAttackMove) == 0x190);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack) == 0x198);
    };
};
