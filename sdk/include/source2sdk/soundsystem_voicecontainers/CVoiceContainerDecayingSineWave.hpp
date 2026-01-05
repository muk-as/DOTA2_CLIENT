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
        // static metadata: MPropertyFriendlyName "TESTBED: Decaying Sine Wave Container"
        // static metadata: MPropertyDescription "Only text params, renders in real time"
        #pragma pack(push, 1)
        class CVoiceContainerDecayingSineWave : public source2sdk::soundsystem_voicecontainers::CVoiceContainerGenerator
        {
        public:
            // metadata: MPropertyFriendlyName "Frequency (Hz)"
            // metadata: MPropertyDescription "The frequency of this sine tone."
            float m_flFrequency; // 0x_            
            // metadata: MPropertyFriendlyName "Decay Time (Seconds)"
            // metadata: MPropertyDescription "The frequency of this sine tone."
            float m_flDecayTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerDecayingSineWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerDecayingSineWave) == 0x_);
    };
};
