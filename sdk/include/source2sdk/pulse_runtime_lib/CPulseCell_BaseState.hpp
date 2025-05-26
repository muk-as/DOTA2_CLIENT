#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x48
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/inflow_statecell.png"
        // static metadata: MPulseCell_WithNoDefaultOutflow
        #pragma pack(push, 1)
        class CPulseCell_BaseState : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_BaseState) == 0x48);
    };
};
