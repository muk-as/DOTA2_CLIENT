#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseRequirement.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
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
        // static metadata: MPulseCellOutflowHookInfo "çK)û"
        // static metadata: MPropertyFriendlyName "Example Criteria"
        // static metadata: MPropertyDescription "An example of requirement data with ports"
        #pragma pack(push, 1)
        class CPulseCell_ExampleCriteria : public source2sdk::pulse_runtime_lib::CPulseCell_BaseRequirement
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_ExampleCriteria) == 0x48);
    };
};
