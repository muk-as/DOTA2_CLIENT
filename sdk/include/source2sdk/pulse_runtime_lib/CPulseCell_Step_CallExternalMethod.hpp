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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "°ö$û"
        // static metadata: MPulseCellWithCustomDocNode
        #pragma pack(push, 1)
        class CPulseCell_Step_CallExternalMethod : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            PulseSymbol_t m_MethodName; // 0x48            
            PulseSymbol_t m_GameBlackboard; // 0x58            
            // m_ExpectedArgs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::pulse_runtime_lib::CPulseRuntimeMethodArg> m_ExpectedArgs;
            char m_ExpectedArgs[0x10]; // 0x68            
            source2sdk::pulse_runtime_lib::PulseMethodCallMode_t m_nAsyncCallMode; // 0x78            
            uint8_t _pad007c[0x4]; // 0x7c
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Step_CallExternalMethod because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Step_CallExternalMethod) == 0xc8);
    };
};
