#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"

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
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "P&�"
        // static metadata: MPulseCellWithCustomDocNode
        #pragma pack(push, 1)
        class CPulseCell_Outflow_IntSwitch : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48            
            // m_CaseOutflows has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_OutflowConnection> m_CaseOutflows;
            char m_CaseOutflows[0x18]; // 0x90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_IntSwitch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Outflow_IntSwitch) == 0xa8);
    };
};
