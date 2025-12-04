#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"

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
        class CVoiceContainerSetElement
        {
        public:
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0x_            
            // metadata: MPropertyFriendlyName "Volume (in Decibels)"
            float m_flVolumeDB; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerSetElement, m_sound) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerSetElement, m_flVolumeDB) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerSetElement) == 0x_);
    };
};
