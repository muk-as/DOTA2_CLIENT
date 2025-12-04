#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerStaticAdditiveSynth_CTone.hpp"

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
        // static metadata: MPropertyFriendlyName "Additive Synth Container"
        // static metadata: MPropertyDescription "This is a static additive synth that can scale components of the synth based on how many instances are running."
        #pragma pack(push, 1)
        class CVoiceContainerStaticAdditiveSynth : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // m_tones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CTone> m_tones;
            char m_tones[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerStaticAdditiveSynth because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth) == 0x_);
    };
};
