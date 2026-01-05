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
        class CVMixAutomaticControlInput
        {
        public:
            CUtlString m_name; // 0x_            
            std::int32_t m_nControlInputIndex; // 0x_            
            bool m_bIsTrackSend; // 0x_            
            bool m_bIsStackVar; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_name) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_nControlInputIndex) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_bIsTrackSend) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_bIsStackVar) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput) == 0x_);
    };
};
