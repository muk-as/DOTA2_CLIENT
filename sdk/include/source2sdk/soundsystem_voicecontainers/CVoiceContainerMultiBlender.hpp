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
        // static metadata: MPropertyFriendlyName "Multi Blender"
        // static metadata: MPropertyDescription "Blends any number of containers"
        #pragma pack(push, 1)
        class CVoiceContainerMultiBlender : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Sounds To Blend"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReferenceArray m_soundsToPlay; // 0x_            
            // metadata: MPropertyFriendlyName "Blend Amount (0.0 = 100% first sound, 1.0 = 100% last sound)"
            float m_flBlendFactor; // 0x_            
            // metadata: MPropertyFriendlyName "Crossfade Amount (0.0 = no crossfade, 1.0 = constant crossfading)"
            float m_flCrossover; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerMultiBlender because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerMultiBlender) == 0x_);
    };
};
