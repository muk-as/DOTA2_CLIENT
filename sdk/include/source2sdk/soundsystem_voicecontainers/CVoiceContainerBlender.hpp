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
        // static metadata: MPropertyFriendlyName "Blender"
        // static metadata: MPropertyDescription "Blends two containers."
        #pragma pack(push, 1)
        class CVoiceContainerBlender : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_firstSound; // 0x_            
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_secondSound; // 0x_            
            float m_flBlendFactor; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerBlender because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBlender) == 0x_);
    };
};
