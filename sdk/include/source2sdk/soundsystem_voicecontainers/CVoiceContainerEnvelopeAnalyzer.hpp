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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x60
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
            source2sdk::soundsystem_voicecontainers::EMode_t m_mode; // 0x50            
            // metadata: MPropertyFriendlyName "Analysis Window"
            float m_fAnalysisWindowMs; // 0x54            
            // metadata: MPropertyFriendlyName "Threshold"
            float m_flThreshold; // 0x58            
            uint8_t _pad005c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerEnvelopeAnalyzer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerEnvelopeAnalyzer) == 0x60);
    };
};
