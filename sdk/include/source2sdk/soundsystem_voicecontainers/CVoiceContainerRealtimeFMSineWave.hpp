#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerGenerator.hpp"

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
        // static metadata: MPropertyFriendlyName "TESTBED: FM Synth Container"
        // static metadata: MPropertyDescription "Real time FM Synthesis"
        #pragma pack(push, 1)
        class CVoiceContainerRealtimeFMSineWave : public source2sdk::soundsystem_voicecontainers::CVoiceContainerGenerator
        {
        public:
            // metadata: MPropertyFriendlyName "Frequency (Hz)"
            // metadata: MPropertyDescription "The frequency of this sine tone."
            float m_flCarrierFrequency; // 0x_            
            // metadata: MPropertyFriendlyName "Mod Frequency (Hz)"
            // metadata: MPropertyDescription "The frequency of the sine tone modulating this sine tone."
            float m_flModulatorFrequency; // 0x_            
            // metadata: MPropertyFriendlyName "Mod Amount (Hz)"
            // metadata: MPropertyDescription "The amount the modulating sine tone modulates this sine tone."
            float m_flModulatorAmount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerRealtimeFMSineWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerRealtimeFMSineWave) == 0x_);
    };
};
