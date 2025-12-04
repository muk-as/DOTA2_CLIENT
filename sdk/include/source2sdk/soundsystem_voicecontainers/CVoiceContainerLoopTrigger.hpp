#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"
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
        // static metadata: MPropertyFriendlyName "LoopTrigger"
        // static metadata: MPropertyDescription "Continuously retriggers a sound and optionally fades to the new instance."
        #pragma pack(push, 1)
        class CVoiceContainerLoopTrigger : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Vsnd Reference"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0x_            
            float m_flRetriggerTimeMin; // 0x_            
            float m_flRetriggerTimeMax; // 0x_            
            float m_flFadeTime; // 0x_            
            bool m_bCrossFade; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerLoopTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerLoopTrigger) == 0x_);
    };
};
