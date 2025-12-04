#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CAudioEmphasisSample.hpp"
#include "source2sdk/soundsystem_voicecontainers/CAudioMorphData.hpp"
#include "source2sdk/soundsystem_voicecontainers/CAudioPhonemeTag.hpp"

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
        #pragma pack(push, 1)
        class CAudioSentence
        {
        public:
            bool m_bShouldVoiceDuck; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_RunTimePhonemes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_voicecontainers::CAudioPhonemeTag> m_RunTimePhonemes;
            char m_RunTimePhonemes[0x_]; // 0x_            
            // m_EmphasisSamples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_voicecontainers::CAudioEmphasisSample> m_EmphasisSamples;
            char m_EmphasisSamples[0x_]; // 0x_            
            source2sdk::soundsystem_voicecontainers::CAudioMorphData m_morphData; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioSentence, m_bShouldVoiceDuck) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioSentence, m_RunTimePhonemes) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioSentence, m_EmphasisSamples) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioSentence, m_morphData) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CAudioSentence) == 0x_);
    };
};
