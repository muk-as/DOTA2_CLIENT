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
    // Size: 0x160
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCommandMoveToPositionToCast
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        Vector m_vPosition; // 0x148        
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbility;
        char m_hAbility[0x4]; // 0x154        
        bool m_bTurningToTarget; // 0x158        
        [[maybe_unused]] std::uint8_t pad_0x159[0x3]; // 0x159
        float m_flTargetAngle; // 0x15c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToCast, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToCast, m_vPosition) == 0x148);
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToCast, m_hAbility) == 0x154);
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToCast, m_bTurningToTarget) == 0x158);
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToCast, m_flTargetAngle) == 0x15c);
    
    static_assert(sizeof(CDOTABehaviorCommandMoveToPositionToCast) == 0x160);
};
