#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReferenceArray.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/PlayBackMode_t.hpp"

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
        // static metadata: MPropertyFriendlyName "Selector"
        // static metadata: MPropertyDescription "Plays a selected vsnd on playback."
        #pragma pack(push, 1)
        class CVoiceContainerSelector : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Playback Mode"
            source2sdk::soundsystem_voicecontainers::PlayBackMode_t m_mode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Sounds To play"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReferenceArray m_soundsToPlay; // 0x_            
            // metadata: MPropertyFriendlyName "Relative Weights"
            // m_fProbabilityWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_fProbabilityWeights;
            char m_fProbabilityWeights[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerSelector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerSelector) == 0x_);
    };
};
