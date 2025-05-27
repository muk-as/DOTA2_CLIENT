#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/pulse_runtime_lib/PulseNodeDynamicOutflows_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "†çê˚"
        // static metadata: MPulseProvideFeatureTag "1"
        // static metadata: MPropertyFriendlyName "Play Sequence"
        // static metadata: MPropertyDescription "Play the specified animation sequence on a NON-ANIMGRAPH entity, and wait for it to complete."
        #pragma pack(push, 1)
        class CPulseCell_PlaySequence : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // metadata: MPropertyAttributeSuggestionName "pulse_model_sequence_name"
            CUtlString m_SequenceName; // 0x48            
            // metadata: MPulseDocCustomAttr
            source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50            
            // metadata: MPulseCellOutflow_IsDefault
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x68            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0xb0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_PlaySequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPulseCell_PlaySequence) == 0xf8);
    };
};
