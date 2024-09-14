#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x188
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Granulator Container"
    #pragma pack(push, 1)
    class CVoiceContainerGranulator : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        float m_flGrainLength; // 0xb8        
        float m_flGrainCrossfadeAmount; // 0xbc        
        float m_flStartJitter; // 0xc0        
        float m_flPlaybackJitter; // 0xc4        
        // m_sourceAudio has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sourceAudio;
        char m_sourceAudio[0x8]; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xd0[0xb8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerGranulator because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerGranulator) == 0x188);
};
