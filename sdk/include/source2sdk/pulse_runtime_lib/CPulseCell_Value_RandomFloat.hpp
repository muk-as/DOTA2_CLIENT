#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseValue.hpp"

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
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "�&�"
        // static metadata: MPropertyFriendlyName "Random Float"
        // static metadata: MPropertyDescription "Generate a random float between min and max (inclusive)"
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/exit_cycle_random.png"
        #pragma pack(push, 1)
        class CPulseCell_Value_RandomFloat : public source2sdk::pulse_runtime_lib::CPulseCell_BaseValue
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Value_RandomFloat) == 0x48);
    };
};
