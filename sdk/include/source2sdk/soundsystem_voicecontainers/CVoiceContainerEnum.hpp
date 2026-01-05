#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReferenceArray.hpp"
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
        // static metadata: MPropertyFriendlyName "VSND Enum"
        // static metadata: MPropertyDescription "Switches between a selection of vsnds based on a provided index."
        #pragma pack(push, 1)
        class CVoiceContainerEnum : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Sounds To Play"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReferenceArray m_soundsToPlay; // 0x_            
            // metadata: MPropertyFriendlyName "Index"
            std::int32_t m_iSelection; // 0x_            
            // metadata: MPropertyFriendlyName "Crossfade Time"
            float m_flCrossfadeTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerEnum because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerEnum) == 0x_);
    };
};
