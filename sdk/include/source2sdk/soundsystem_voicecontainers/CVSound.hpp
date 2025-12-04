#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CAudioSentence.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVSoundFormat_t.hpp"

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
        class CVSound
        {
        public:
            std::int32_t m_nRate; // 0x_            
            source2sdk::soundsystem_voicecontainers::CVSoundFormat_t m_nFormat; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_nChannels; // 0x_            
            std::int32_t m_nLoopStart; // 0x_            
            std::uint32_t m_nSampleCount; // 0x_            
            float m_flDuration; // 0x_            
            // m_Sentences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_voicecontainers::CAudioSentence> m_Sentences;
            char m_Sentences[0x_]; // 0x_            
            std::uint32_t m_nStreamingSize; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_nSeekTable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nSeekTable;
            char m_nSeekTable[0x_]; // 0x_            
            std::int32_t m_nLoopEnd; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MFgdFromSchemaCompletelySkipField
            CUtlBinaryBlock m_encodedHeader; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nRate) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nFormat) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nChannels) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nLoopStart) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nSampleCount) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_Sentences) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nStreamingSize) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nSeekTable) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nLoopEnd) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_encodedHeader) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVSound) == 0x_);
    };
};
