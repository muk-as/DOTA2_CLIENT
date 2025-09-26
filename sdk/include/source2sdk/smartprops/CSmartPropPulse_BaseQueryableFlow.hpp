#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"

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
        // static metadata: MCellForDomain "SmartPropEval"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo " v•*ý"
        // static metadata: MPulseFunctionHiddenInTool
        #pragma pack(push, 1)
        class CSmartPropPulse_BaseQueryableFlow : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_BaseQueryableFlow) == 0x48);
    };
};
