#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_WaitForCursorsWithTagBase.hpp"
#include "source2sdk/pulse_runtime_lib/PulseCursorCancelPriority_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo ""
        // static metadata: MPropertyFriendlyName "Wait For Cursors With Tag"
        // static metadata: MPropertyDescription "Causes this execution cursor to wait for the completion of other cursors with the given tag. Can optionally kill the tag while waiting."
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/cursor_tag.png"
        #pragma pack(push, 1)
        class CPulseCell_WaitForCursorsWithTag : public source2sdk::pulse_runtime_lib::CPulseCell_WaitForCursorsWithTagBase
        {
        public:
            // metadata: MPropertyDescription "Apply the same tag we're waiting on to the resulting cursor upon wait completion. Can be used to wait on our result cursor with the same tag."
            bool m_bTagSelfWhenComplete; // 0x98            
            uint8_t _pad0099[0x3]; // 0x99
            // metadata: MPropertyDescription "When we start waiting, how should we handle existing cursors?"
            source2sdk::pulse_runtime_lib::PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_WaitForCursorsWithTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_WaitForCursorsWithTag) == 0xa0);
    };
};
