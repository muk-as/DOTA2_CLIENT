#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_Inflow_BaseEntrypoint.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeBlackboardReferenceIndex_t.hpp"

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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "HzÅ&û"
        // static metadata: MPulseCellWithCustomDocNode
        #pragma pack(push, 1)
        class CPulseCell_Inflow_ObservableVariableListener : public source2sdk::pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint
        {
        public:
            source2sdk::pulse_runtime_lib::PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference; // 0x80            
            bool m_bSelfReference; // 0x82            
            uint8_t _pad0083[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Inflow_ObservableVariableListener because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Inflow_ObservableVariableListener) == 0x88);
    };
};
