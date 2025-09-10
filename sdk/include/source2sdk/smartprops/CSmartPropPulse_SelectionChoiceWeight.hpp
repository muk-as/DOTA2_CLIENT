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
        // static metadata: MPulseCellOutflowHookInfo "@?€ø"
        // static metadata: MPropertyFriendlyName "Choice Weight"
        // static metadata: MPropertyDescription "Specifies a weighting value which affects that likelyhood of selecting this element which picking a choice."
        #pragma pack(push, 1)
        class CSmartPropPulse_SelectionChoiceWeight : public source2sdk::pulse_runtime_lib::CPulseCell_BaseRequirement
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_SelectionChoiceWeight) == 0x48);
    };
};
