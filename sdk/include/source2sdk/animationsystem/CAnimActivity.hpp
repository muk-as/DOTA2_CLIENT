#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimActivity
        {
        public:
            CBufferString m_name; // 0x_            
            std::int32_t m_nActivity; // 0x_            
            std::int32_t m_nFlags; // 0x_            
            std::int32_t m_nWeight; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_nActivity) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_nWeight) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimActivity) == 0x_);
    };
};
