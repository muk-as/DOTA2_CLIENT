#pragma once
#include "source2sdk/soundsystem_voicecontainers/CAudioEmphasisSample.hpp"
#include "source2sdk/soundsystem_voicecontainers/CAudioMorphData.hpp"
#include "source2sdk/soundsystem_voicecontainers/CAudioPhonemeTag.hpp"
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
    // Size: 0xa0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAudioSentence
    {
    public:
        bool m_bShouldVoiceDuck; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x7]; // 0x1
        // m_RunTimePhonemes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem_voicecontainers::CAudioPhonemeTag> m_RunTimePhonemes;
        char m_RunTimePhonemes[0x18]; // 0x8        
        // m_EmphasisSamples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem_voicecontainers::CAudioEmphasisSample> m_EmphasisSamples;
        char m_EmphasisSamples[0x18]; // 0x20        
        soundsystem_voicecontainers::CAudioMorphData m_morphData; // 0x38        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAudioSentence, m_bShouldVoiceDuck) == 0x0);
    static_assert(offsetof(CAudioSentence, m_RunTimePhonemes) == 0x8);
    static_assert(offsetof(CAudioSentence, m_EmphasisSamples) == 0x20);
    static_assert(offsetof(CAudioSentence, m_morphData) == 0x38);
    
    static_assert(sizeof(CAudioSentence) == 0xa0);
};
