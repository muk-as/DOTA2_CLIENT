#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance.hpp"
#include "source2sdk/soundsystem_voicecontainers/EMidiNote.hpp"
#include "source2sdk/soundsystem_voicecontainers/EWaveform.hpp"
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
    // Standard-layout class: true
    // Size: 0x68
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CVoiceContainerStaticAdditiveSynth__CHarmonic
    {
    public:
        // metadata: MPropertyFriendlyName "Waveform"
        soundsystem_voicecontainers::EWaveform m_nWaveform; // 0x0        
        // metadata: MPropertyFriendlyName "Note"
        soundsystem_voicecontainers::EMidiNote m_nFundamental; // 0x1        
        [[maybe_unused]] std::uint8_t pad_0x02[0x2]; // 0x2
        // metadata: MPropertyFriendlyName "Octave"
        int32_t m_nOctave; // 0x4        
        // metadata: MPropertyFriendlyName "Cents To Detune ( -100:100 )"
        float m_flCents; // 0x8        
        // metadata: MPropertyFriendlyName "Phase ( 0 - 1 )"
        float m_flPhase; // 0xc        
        // metadata: MPropertyFriendlyName "Envelope (Relative to Tone Envelope)"
        CPiecewiseCurve m_curve; // 0x10        
        soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance m_volumeScaling; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x60[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CHarmonic, m_nWaveform) == 0x0);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CHarmonic, m_nFundamental) == 0x1);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CHarmonic, m_nOctave) == 0x4);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CHarmonic, m_flCents) == 0x8);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CHarmonic, m_flPhase) == 0xc);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CHarmonic, m_curve) == 0x10);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CHarmonic, m_volumeScaling) == 0x50);
    
    static_assert(sizeof(CVoiceContainerStaticAdditiveSynth__CHarmonic) == 0x68);
};
