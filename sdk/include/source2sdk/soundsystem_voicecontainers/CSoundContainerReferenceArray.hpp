#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        struct CVoiceContainerBase;
    };
};

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
        // static metadata: MPropertyFriendlyName "Sound Array "
        // static metadata: MPropertyDescription "Reference to list of vsnd files or other containers."
        #pragma pack(push, 1)
        class CSoundContainerReferenceArray
        {
        public:
            // metadata: MPropertyFriendlyName "Use Vsnd File"
            bool m_bUseReference; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressExpr "m_bUseReference == 0"
            // metadata: MPropertyFriendlyName "Vsnd File"
            // m_sounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase>> m_sounds;
            char m_sounds[0x_]; // 0x_            
            // metadata: MPropertySuppressExpr "m_bUseReference == 1"
            // metadata: MPropertyFriendlyName "Vsnd Container"
            // m_pSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_voicecontainers::CVoiceContainerBase*> m_pSounds;
            char m_pSounds[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CSoundContainerReferenceArray, m_bUseReference) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CSoundContainerReferenceArray, m_sounds) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CSoundContainerReferenceArray, m_pSounds) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CSoundContainerReferenceArray) == 0x_);
    };
};
