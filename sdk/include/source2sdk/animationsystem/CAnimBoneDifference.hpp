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
        class CAnimBoneDifference
        {
        public:
            CBufferString m_name; // 0x_            
            CBufferString m_parent; // 0x_            
            Vector m_posError; // 0x_            
            bool m_bHasRotation; // 0x_            
            bool m_bHasMovement; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimBoneDifference, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBoneDifference, m_parent) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBoneDifference, m_posError) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBoneDifference, m_bHasRotation) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBoneDifference, m_bHasMovement) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimBoneDifference) == 0x_);
    };
};
