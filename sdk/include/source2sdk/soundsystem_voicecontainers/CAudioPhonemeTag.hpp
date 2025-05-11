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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAudioPhonemeTag
        {
        public:
            float m_flStartTime; // 0x0            
            float m_flEndTime; // 0x4            
            std::int32_t m_nPhonemeCode; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioPhonemeTag, m_flStartTime) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioPhonemeTag, m_flEndTime) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CAudioPhonemeTag, m_nPhonemeCode) == 0x8);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CAudioPhonemeTag) == 0xc);
    };
};
