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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Play Sequence"
        // static metadata: MPropertyDescription "Play the specified animation sequence on a NON-ANIMGRAPH entity, and wait for it to complete."
        #pragma pack(push, 1)
        class CPulseCell_PlaySequence : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // metadata: MPropertyAttributeSuggestionName "pulse_model_sequence_name"
            CUtlString m_SequenceName; // 0x_            
            source2sdk::pulse_runtime_lib::PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x_            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x_            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_PlaySequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPulseCell_PlaySequence) == 0x_);
    };
};
