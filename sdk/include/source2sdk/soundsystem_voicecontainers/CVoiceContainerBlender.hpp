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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf8
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
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_firstSound; // 0xc0            
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_secondSound; // 0xd8            
            float m_flBlendFactor; // 0xf0            
            uint8_t _pad00f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerBlender because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBlender) == 0xf8);
    };
};
