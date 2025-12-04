#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"

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
        // static metadata: MPropertyFriendlyName "Wind Generator Container"
        // static metadata: MPropertyDescription "This is a synth meant to generate whoosh noises."
        #pragma pack(push, 1)
        class CVoiceContainerShapedNoise : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            bool m_bUseCurveForFrequency; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 1"
            float m_flFrequency; // 0x_            
            // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 0"
            // metadata: MPropertyFriendlyName "Frequency Sweep"
            CPiecewiseCurve m_frequencySweep; // 0x_            
            bool m_bUseCurveForResonance; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 1"
            float m_flResonance; // 0x_            
            // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 0"
            // metadata: MPropertyFriendlyName "Resonance Sweep"
            CPiecewiseCurve m_resonanceSweep; // 0x_            
            bool m_bUseCurveForAmplitude; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 1"
            float m_flGainInDecibels; // 0x_            
            // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 0"
            // metadata: MPropertyFriendlyName "Gain Sweep (in Decibels)"
            CPiecewiseCurve m_gainSweep; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerShapedNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerShapedNoise) == 0x_);
    };
};
