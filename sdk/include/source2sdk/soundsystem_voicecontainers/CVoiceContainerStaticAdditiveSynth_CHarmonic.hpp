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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x68
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVoiceContainerStaticAdditiveSynth_CHarmonic
        {
        public:
            // metadata: MPropertyFriendlyName "Waveform"
            source2sdk::soundsystem_voicecontainers::EWaveform m_nWaveform; // 0x0            
            // metadata: MPropertyFriendlyName "Note"
            source2sdk::soundsystem_voicecontainers::EMidiNote m_nFundamental; // 0x1            
            uint8_t _pad0002[0x2]; // 0x2
            // metadata: MPropertyFriendlyName "Octave"
            std::int32_t m_nOctave; // 0x4            
            // metadata: MPropertyFriendlyName "Cents To Detune ( -100:100 )"
            float m_flCents; // 0x8            
            // metadata: MPropertyFriendlyName "Phase ( 0 - 1 )"
            float m_flPhase; // 0xc            
            // metadata: MPropertyFriendlyName "Envelope (Relative to Tone Envelope)"
            CPiecewiseCurve m_curve; // 0x10            
            source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance m_volumeScaling; // 0x50            
            uint8_t _pad0060[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_nWaveform) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_nFundamental) == 0x1);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_nOctave) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_flCents) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_flPhase) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_curve) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, m_volumeScaling) == 0x50);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic) == 0x68);
    };
};
