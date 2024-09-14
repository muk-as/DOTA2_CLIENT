#pragma once
#include "source2sdk/pulse_system/CPulseCell_WaitForCursorsWithTagBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_system
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPropertyFriendlyName "Cursor Queue"
    // static metadata: MPropertyDescription "Causes each execution cursor to wait for the completion of all prior cursors that have visited this node. Use this to safely support multiple triggers to areas of the graph that take time to complete."
    // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/cursor_wait_zone.png"
    #pragma pack(push, 1)
    class CPulseCell_CursorQueue : public pulse_system::CPulseCell_WaitForCursorsWithTagBase
    {
    public:
        // metadata: MPropertyDescription "Any cursors above this count will wait, up to the limit."
        int32_t m_nCursorsAllowedToRunParallel; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x84[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_CursorQueue because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_CursorQueue) == 0x88);
};
