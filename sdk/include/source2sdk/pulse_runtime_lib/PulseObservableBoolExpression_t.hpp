#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeBlackboardReferenceIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeVarIndex_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x78
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PulseObservableBoolExpression_t
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_EvaluateConnection; // 0x0            
            // m_DependentObservableVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::PulseRuntimeVarIndex_t> m_DependentObservableVars;
            char m_DependentObservableVars[0x18]; // 0x48            
            // m_DependentObservableBlackboardReferences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::PulseRuntimeBlackboardReferenceIndex_t> m_DependentObservableBlackboardReferences;
            char m_DependentObservableBlackboardReferences[0x18]; // 0x60            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseObservableBoolExpression_t, m_EvaluateConnection) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseObservableBoolExpression_t, m_DependentObservableVars) == 0x48);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseObservableBoolExpression_t, m_DependentObservableBlackboardReferences) == 0x60);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PulseObservableBoolExpression_t) == 0x78);
    };
};
