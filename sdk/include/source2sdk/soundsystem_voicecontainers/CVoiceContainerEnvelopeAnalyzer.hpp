#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerAnalysisBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/EMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
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
    class CVoiceContainerEnvelopeAnalyzer : public soundsystem_voicecontainers::CVoiceContainerAnalysisBase
    {
    public:
        // metadata: MPropertyFriendlyName "Envelope Mode"
        soundsystem_voicecontainers::EMode_t m_mode; // 0x50        
        // metadata: MPropertyFriendlyName "Number of sections"
        int32_t m_nSamples; // 0x54        
        // metadata: MPropertyFriendlyName "Threshold"
        float m_flThreshold; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerEnvelopeAnalyzer because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerEnvelopeAnalyzer) == 0x60);
};
