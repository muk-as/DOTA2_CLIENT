#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerStaticAdditiveSynth__CHarmonic.hpp"
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
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CVoiceContainerStaticAdditiveSynth__CTone
    {
    public:
        // metadata: MPropertyFriendlyName "Harmonics"
        // m_harmonics has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth__CHarmonic> m_harmonics;
        char m_harmonics[0x18]; // 0x0        
        // metadata: MPropertyFriendlyName "Envelope"
        CPiecewiseCurve m_curve; // 0x18        
        // metadata: MPropertyFriendlyName "Play All Instances In Sync"
        bool m_bSyncInstances; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CTone, m_harmonics) == 0x0);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CTone, m_curve) == 0x18);
    static_assert(offsetof(CVoiceContainerStaticAdditiveSynth__CTone, m_bSyncInstances) == 0x58);
    
    static_assert(sizeof(CVoiceContainerStaticAdditiveSynth__CTone) == 0x60);
};
