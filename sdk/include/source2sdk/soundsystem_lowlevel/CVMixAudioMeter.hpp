#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixAudioMeter
        {
        public:
            CUtlString m_name; // 0x_            
            CUtlString m_displayName; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAudioMeter, m_name) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAudioMeter, m_displayName) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixAudioMeter) == 0x_);
    };
};
