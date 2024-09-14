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
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCommandMoveToNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x148        
        int32_t m_nMovementState; // 0x14c        
        bool m_bInRange; // 0x150        
        bool m_bWasAttacking; // 0x151        
        [[maybe_unused]] std::uint8_t pad_0x152[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandMoveToNPC, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandMoveToNPC, m_hTarget) == 0x148);
    static_assert(offsetof(CDOTABehaviorCommandMoveToNPC, m_nMovementState) == 0x14c);
    static_assert(offsetof(CDOTABehaviorCommandMoveToNPC, m_bInRange) == 0x150);
    static_assert(offsetof(CDOTABehaviorCommandMoveToNPC, m_bWasAttacking) == 0x151);
    
    static_assert(sizeof(CDOTABehaviorCommandMoveToNPC) == 0x158);
};
