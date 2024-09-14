#pragma once
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"
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
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CVoiceContainerSetElement
    {
    public:
        soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0x0        
        // metadata: MPropertyFriendlyName "Volume (in Decibels)"
        float m_flVolumeDB; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CVoiceContainerSetElement, m_sound) == 0x0);
    static_assert(offsetof(CVoiceContainerSetElement, m_flVolumeDB) == 0x18);
    
    static_assert(sizeof(CVoiceContainerSetElement) == 0x20);
};
