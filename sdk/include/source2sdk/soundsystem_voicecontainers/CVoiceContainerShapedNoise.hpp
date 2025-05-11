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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x198
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
            bool m_bUseCurveForFrequency; // 0xc0            
            uint8_t _pad00c1[0x3]; // 0xc1
            // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 1"
            float m_flFrequency; // 0xc4            
            // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 0"
            // metadata: MPropertyFriendlyName "Frequency Sweep"
            CPiecewiseCurve m_frequencySweep; // 0xc8            
            bool m_bUseCurveForResonance; // 0x108            
            uint8_t _pad0109[0x3]; // 0x109
            // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 1"
            float m_flResonance; // 0x10c            
            // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 0"
            // metadata: MPropertyFriendlyName "Resonance Sweep"
            CPiecewiseCurve m_resonanceSweep; // 0x110            
            bool m_bUseCurveForAmplitude; // 0x150            
            uint8_t _pad0151[0x3]; // 0x151
            // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 1"
            float m_flGainInDecibels; // 0x154            
            // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 0"
            // metadata: MPropertyFriendlyName "Gain Sweep (in Decibels)"
            CPiecewiseCurve m_gainSweep; // 0x158            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerShapedNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerShapedNoise) == 0x198);
    };
};
