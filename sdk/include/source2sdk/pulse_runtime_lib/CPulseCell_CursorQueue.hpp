#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_WaitForCursorsWithTagBase.hpp"

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
        // static metadata: MPulseCellOutflowHookInfo "�����"
        // static metadata: MPropertyFriendlyName "Cursor Queue"
        // static metadata: MPropertyDescription "Causes each execution cursor to wait for the completion of all prior cursors that have visited this node. Use this to safely support multiple triggers to areas of the graph that take time to complete."
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/cursor_wait_zone.png"
        #pragma pack(push, 1)
        class CPulseCell_CursorQueue : public source2sdk::pulse_runtime_lib::CPulseCell_WaitForCursorsWithTagBase
        {
        public:
            // metadata: MPropertyDescription "Any cursors above this count will wait, up to the limit."
            std::int32_t m_nCursorsAllowedToRunParallel; // 0x98            
            uint8_t _pad009c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_CursorQueue because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_CursorQueue) == 0xa0);
    };
};
