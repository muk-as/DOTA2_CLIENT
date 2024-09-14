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
    // Size: 0x180
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCommandVampireThrall
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x14c[0x4]; // 0x14c
        float m_flTargetRange; // 0x150        
        bool m_bDeny; // 0x154        
        bool m_bInvisBreak; // 0x155        
        bool m_bNightmareAttack; // 0x156        
        bool m_bTurningToTarget; // 0x157        
        bool m_bHasPositionOrder; // 0x158        
        bool m_bIsAggressive; // 0x159        
        [[maybe_unused]] std::uint8_t pad_0x15a[0x2]; // 0x15a
        float m_flTargetAngle; // 0x15c        
        Vector m_vFollowOffset; // 0x160        
        Vector m_vMoveToPosition; // 0x16c        
        // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMaster;
        char m_hMaster[0x4]; // 0x178        
        [[maybe_unused]] std::uint8_t pad_0x17c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_hTarget) == 0x148);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_flTargetRange) == 0x150);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_bDeny) == 0x154);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_bInvisBreak) == 0x155);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_bNightmareAttack) == 0x156);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_bTurningToTarget) == 0x157);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_bHasPositionOrder) == 0x158);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_bIsAggressive) == 0x159);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_flTargetAngle) == 0x15c);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_vFollowOffset) == 0x160);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_vMoveToPosition) == 0x16c);
    static_assert(offsetof(CDOTABehaviorCommandVampireThrall, m_hMaster) == 0x178);
    
    static_assert(sizeof(CDOTABehaviorCommandVampireThrall) == 0x180);
};
