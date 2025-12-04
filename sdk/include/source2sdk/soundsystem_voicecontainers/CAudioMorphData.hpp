#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        class CAudioMorphData
        {
        public:
            // m_times has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_times;
            char m_times[0x_]; // 0x_            
            // m_nameHashCodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_nameHashCodes;
            char m_nameHashCodes[0x_]; // 0x_            
            // m_nameStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_nameStrings;
            char m_nameStrings[0x_]; // 0x_            
            // m_samples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<float>> m_samples;
            char m_samples[0x_]; // 0x_            
            float m_flEaseIn; // 0x_            
            float m_flEaseOut; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioMorphData, m_times) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioMorphData, m_nameHashCodes) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioMorphData, m_nameStrings) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioMorphData, m_samples) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioMorphData, m_flEaseIn) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioMorphData, m_flEaseOut) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CAudioMorphData) == 0x_);
    };
};
