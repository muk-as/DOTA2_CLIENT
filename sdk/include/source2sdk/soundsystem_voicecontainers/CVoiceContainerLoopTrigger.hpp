#pragma once
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"
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
    // Size: 0xe8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "LoopTrigger"
    // static metadata: MPropertyDescription "Continuously retriggers a sound and optionally fades to the new instance."
    #pragma pack(push, 1)
    class CVoiceContainerLoopTrigger : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // metadata: MPropertyFriendlyName "Vsnd Reference"
        soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0xc0        
        float m_flRetriggerTimeMin; // 0xd8        
        float m_flRetriggerTimeMax; // 0xdc        
        float m_flFadeTime; // 0xe0        
        bool m_bCrossFade; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerLoopTrigger because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerLoopTrigger) == 0xe8);
};
