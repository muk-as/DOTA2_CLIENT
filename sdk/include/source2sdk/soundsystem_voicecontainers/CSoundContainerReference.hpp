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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Sound"
        // static metadata: MPropertyDescription "Reference to a vsnd file or another container."
        #pragma pack(push, 1)
        class CSoundContainerReference
        {
        public:
            // metadata: MPropertyFriendlyName "Use Vsnd File"
            bool m_bUseReference; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertySuppressExpr "m_bUseReference == 0"
            // metadata: MPropertyFriendlyName "Vsnd File"
            // m_sound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sound;
            char m_sound[0x8]; // 0x8            
            // metadata: MPropertySuppressExpr "m_bUseReference == 1"
            // metadata: MPropertyFriendlyName "Vsnd Container"
            source2sdk::soundsystem_voicecontainers::CVoiceContainerBase* m_pSound; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CSoundContainerReference, m_bUseReference) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CSoundContainerReference, m_sound) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CSoundContainerReference, m_pSound) == 0x10);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CSoundContainerReference) == 0x18);
    };
};
