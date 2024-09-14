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
    class CDOTABehaviorCommandMoveToPositionToDropItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        Vector m_vPosition; // 0x148        
        // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hItem;
        char m_hItem[0x4]; // 0x154        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToDropItem, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToDropItem, m_vPosition) == 0x148);
    static_assert(offsetof(CDOTABehaviorCommandMoveToPositionToDropItem, m_hItem) == 0x154);
    
    static_assert(sizeof(CDOTABehaviorCommandMoveToPositionToDropItem) == 0x158);
};
