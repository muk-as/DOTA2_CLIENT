#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerAnalysisBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/EMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Envelope Analyzer"
        // static metadata: MPropertyDescription "Generates an Envelope Curve on compile"
        #pragma pack(push, 1)
        class CVoiceContainerEnvelopeAnalyzer : public source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase
        {
        public:
            // metadata: MPropertyFriendlyName "Envelope Mode"
            source2sdk::soundsystem_voicecontainers::EMode_t m_mode; // 0x_            
            // metadata: MPropertyFriendlyName "Analysis Window"
            float m_fAnalysisWindowMs; // 0x_            
            // metadata: MPropertyFriendlyName "Threshold"
            float m_flThreshold; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerEnvelopeAnalyzer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerEnvelopeAnalyzer) == 0x_);
    };
};
