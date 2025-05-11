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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimFrameSegment
        {
        public:
            std::int32_t m_nUniqueFrameIndex; // 0x0            
            std::uint32_t m_nLocalElementMasks; // 0x4            
            std::int32_t m_nLocalChannel; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlBinaryBlock m_container; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_nUniqueFrameIndex) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_nLocalElementMasks) == 0x4);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_nLocalChannel) == 0x8);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameSegment, m_container) == 0x10);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimFrameSegment) == 0x28);
    };
};
