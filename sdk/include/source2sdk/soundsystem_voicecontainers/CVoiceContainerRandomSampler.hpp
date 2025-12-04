#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
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
        // static metadata: MPropertyFriendlyName "Random Smapler Container"
        // static metadata: MPropertyDescription "Trash Synth"
        #pragma pack(push, 1)
        class CVoiceContainerRandomSampler : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            float m_flAmplitude; // 0x_            
            float m_flAmplitudeJitter; // 0x_            
            float m_flTimeJitter; // 0x_            
            float m_flMaxLength; // 0x_            
            std::int32_t m_nNumDelayVariations; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_grainResources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase>> m_grainResources;
            char m_grainResources[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerRandomSampler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerRandomSampler) == 0x_);
    };
};
