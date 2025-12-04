#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance.hpp"
#include "source2sdk/soundsystem_voicecontainers/EMidiNote.hpp"
#include "source2sdk/soundsystem_voicecontainers/EWaveform.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVoiceContainerStaticAdditiveSynth_CHarmonic
        {
        public:
            // metadata: MPropertyFriendlyName "Waveform"
            source2sdk::soundsystem_voicecontainers::EWaveform m_nWaveform; // 0x_            
            // metadata: MPropertyFriendlyName "Note"
            source2sdk::soundsystem_voicecontainers::EMidiNote m_nFundamental; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Octave"
            std::int32_t m_nOctave; // 0x_            
            // metadata: MPropertyFriendlyName "Cents To Detune ( -100:100 )"
            float m_flCents; // 0x_            
            // metadata: MPropertyFriendlyName "Phase ( 0 - 1 )"
            float m_flPhase; // 0x_            
            // metadata: MPropertyFriendlyName "Envelope (Relative to Tone Envelope)"
            CPiecewiseCurve m_curve; // 0x_            
            source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance m_volumeScaling; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_nWaveform) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_nFundamental) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_nOctave) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_flCents) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_flPhase) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_curve) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_volumeScaling) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic) == 0x_);
    };
};
