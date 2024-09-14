#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
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
    // Size: 0x190
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Wind Generator Container"
    // static metadata: MPropertyDescription "This is a synth meant to generate whoosh noises."
    #pragma pack(push, 1)
    class CVoiceContainerShapedNoise : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        bool m_bUseCurveForFrequency; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xb9[0x3]; // 0xb9
        // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 1"
        float m_flFrequency; // 0xbc        
        // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 0"
        // metadata: MPropertyFriendlyName "Frequency Sweep"
        CPiecewiseCurve m_frequencySweep; // 0xc0        
        bool m_bUseCurveForResonance; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x101[0x3]; // 0x101
        // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 1"
        float m_flResonance; // 0x104        
        // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 0"
        // metadata: MPropertyFriendlyName "Resonance Sweep"
        CPiecewiseCurve m_resonanceSweep; // 0x108        
        bool m_bUseCurveForAmplitude; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x149[0x3]; // 0x149
        // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 1"
        float m_flGainInDecibels; // 0x14c        
        // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 0"
        // metadata: MPropertyFriendlyName "Gain Sweep (in Decibels)"
        CPiecewiseCurve m_gainSweep; // 0x150        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerShapedNoise because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerShapedNoise) == 0x190);
};
