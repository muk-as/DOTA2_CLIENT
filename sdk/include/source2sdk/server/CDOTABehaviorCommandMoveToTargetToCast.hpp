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
    // Size: 0x168
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCommandMoveToTargetToCast
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x148        
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbility;
        char m_hAbility[0x4]; // 0x14c        
        int32_t m_nMovementState; // 0x150        
        bool m_bFailedCast; // 0x154        
        [[maybe_unused]] std::uint8_t pad_0x155[0x3]; // 0x155
        float m_flTargetRange; // 0x158        
        bool m_bTurningToTarget; // 0x15c        
        [[maybe_unused]] std::uint8_t pad_0x15d[0x3]; // 0x15d
        float m_flTargetAngle; // 0x160        
        [[maybe_unused]] std::uint8_t pad_0x164[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_hTarget) == 0x148);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_hAbility) == 0x14c);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_nMovementState) == 0x150);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_bFailedCast) == 0x154);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_flTargetRange) == 0x158);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_bTurningToTarget) == 0x15c);
    static_assert(offsetof(CDOTABehaviorCommandMoveToTargetToCast, m_flTargetAngle) == 0x160);
    
    static_assert(sizeof(CDOTABehaviorCommandMoveToTargetToCast) == 0x168);
};
