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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x178
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCommandPatrol
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        Vector m_vOrderPosition; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x154[0x4]; // 0x154
        // m_vPatrolPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vPatrolPoints;
        char m_vPatrolPoints[0x18]; // 0x158        
        int32_t m_nCurrentTargetIndex; // 0x170        
        int32_t m_nDirection; // 0x174        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandPatrol, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandPatrol, m_vOrderPosition) == 0x148);
    static_assert(offsetof(CDOTABehaviorCommandPatrol, m_vPatrolPoints) == 0x158);
    static_assert(offsetof(CDOTABehaviorCommandPatrol, m_nCurrentTargetIndex) == 0x170);
    static_assert(offsetof(CDOTABehaviorCommandPatrol, m_nDirection) == 0x174);
    
    static_assert(sizeof(CDOTABehaviorCommandPatrol) == 0x178);
};
