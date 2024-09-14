#pragma once
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x170
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCommandMoveToTargetToAttack
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x148        
        int32_t m_nMovementState; // 0x14c        
        bool m_bFailedCast; // 0x150        
        [[maybe_unused]] std::uint8_t pad_0x151[0x3]; // 0x151
        float m_flTargetRange; // 0x154        
        bool m_bDeny; // 0x158        
        bool m_bInvisBreak; // 0x159        
        bool m_bNightmareAttack; // 0x15a        
        bool m_bTurningToTarget; // 0x15b        
        float m_flTargetAngle; // 0x15c        
        Vector m_vMoveToOrderPosition; // 0x160        
        [[maybe_unused]] std::uint8_t pad_0x16c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_hTarget) == 0x148);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_nMovementState) == 0x14c);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_bFailedCast) == 0x150);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_flTargetRange) == 0x154);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_bDeny) == 0x158);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_bInvisBreak) == 0x159);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_bNightmareAttack) == 0x15a);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_bTurningToTarget) == 0x15b);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_flTargetAngle) == 0x15c);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToAttack, m_vMoveToOrderPosition) == 0x160);
    
    static_assert(sizeof(CDOTABehaviorCommandMoveToTargetToAttack) == 0x170);
};
