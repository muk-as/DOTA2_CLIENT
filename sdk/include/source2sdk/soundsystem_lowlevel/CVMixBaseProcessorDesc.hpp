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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixBaseProcessorDesc
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_name; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nChannels; // 0x_            
            float m_flxfade; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc, m_name) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc, m_nChannels) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc, m_flxfade) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc) == 0x_);
    };
};
