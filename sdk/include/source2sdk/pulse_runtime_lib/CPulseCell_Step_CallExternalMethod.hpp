#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulseRuntimeMethodArg.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/pulse_runtime_lib/PulseMethodCallMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo
        // static metadata: MPulseCellWithCustomDocNode
        #pragma pack(push, 1)
        class CPulseCell_Step_CallExternalMethod : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            PulseSymbol_t m_MethodName; // 0x_            
            PulseSymbol_t m_GameBlackboard; // 0x_            
            // m_ExpectedArgs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::pulse_runtime_lib::CPulseRuntimeMethodArg> m_ExpectedArgs;
            char m_ExpectedArgs[0x_]; // 0x_            
            source2sdk::pulse_runtime_lib::PulseMethodCallMode_t m_nAsyncCallMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Step_CallExternalMethod because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Step_CallExternalMethod) == 0x_);
    };
};
