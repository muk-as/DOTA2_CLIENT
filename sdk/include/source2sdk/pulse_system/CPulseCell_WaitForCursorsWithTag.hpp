#pragma once
#include "source2sdk/pulse_runtime_lib/PulseCursorCancelPriority_t.hpp"
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
    // static metadata: MPropertyFriendlyName "Wait For Cursors With Tag"
    // static metadata: MPropertyDescription "Causes this execution cursor to wait for the completion of other cursors with the given tag. Can optionally kill the tag while waiting."
    // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/cursor_tag.png"
    #pragma pack(push, 1)
    class CPulseCell_WaitForCursorsWithTag : public pulse_system::CPulseCell_WaitForCursorsWithTagBase
    {
    public:
        // metadata: MPropertyDescription "Apply the same tag we're waiting on to the resulting cursor upon wait completion. Can be used to wait on our result cursor with the same tag."
        bool m_bTagSelfWhenComplete; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x3]; // 0x81
        // metadata: MPropertyDescription "When we start waiting, how should we handle existing cursors?"
        pulse_runtime_lib::PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x84        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_WaitForCursorsWithTag because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_WaitForCursorsWithTag) == 0x88);
};
