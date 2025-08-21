#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseRequirement.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
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
        // static metadata: MPulseCellOutflowHookInfo "`'^'û"
        // static metadata: MPropertyFriendlyName "End Cap Settings"
        // static metadata: MPropertyDescription "Specifies that this is a special part that should be used at the start or end of the line."
        #pragma pack(push, 1)
        class CSmartPropPulse_SelectionEndCap : public source2sdk::pulse_runtime_lib::CPulseCell_BaseRequirement
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_SelectionEndCap) == 0x48);
    };
};
