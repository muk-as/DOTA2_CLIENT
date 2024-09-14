#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/pulse_runtime_lib/PulseNodeDynamicOutflows_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPulseDomainOptInFeatureTag
    // static metadata: MPropertyFriendlyName "Play Sequence"
    // static metadata: MPropertyDescription "Play the specified animation sequence on a NON-ANIMGRAPH entity, and wait for it to complete."
    #pragma pack(push, 1)
    class CPulseCell_PlaySequence : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        // metadata: MPropertyAttributeSuggestionName "pulse_model_sequence_name"
        CUtlString m_SequenceName; // 0x48        
        // metadata: MPulseDocCustomAttr
        pulse_runtime_lib::PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50        
        // metadata: MPulseCellOutflow_IsDefault
        pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x68        
        pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0x98        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_PlaySequence because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_PlaySequence) == 0xc8);
};
