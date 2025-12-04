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
        class CAnimFrameSegment
        {
        public:
            std::int32_t m_nUniqueFrameIndex; // 0x_            
            std::uint32_t m_nLocalElementMasks; // 0x_            
            std::int32_t m_nLocalChannel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlBinaryBlock m_container; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_nUniqueFrameIndex) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_nLocalElementMasks) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_nLocalChannel) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_container) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimFrameSegment) == 0x_);
    };
};
