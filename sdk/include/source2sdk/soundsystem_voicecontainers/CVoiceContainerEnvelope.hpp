#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        struct CVoiceContainerAnalysisBase;
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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Envelope VSND"
        // static metadata: MPropertyDescription "Plays sound with envelope."
        #pragma pack(push, 1)
        class CVoiceContainerEnvelope : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Vsnd File"
            // m_sound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sound;
            char m_sound[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "Container Analyzers"
            source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_analysisContainer; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerEnvelope because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerEnvelope) == 0x_);
    };
};
