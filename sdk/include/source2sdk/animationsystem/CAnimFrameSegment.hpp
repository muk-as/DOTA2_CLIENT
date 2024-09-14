#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
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
        int32_t m_nUniqueFrameIndex; // 0x0        
        uint32_t m_nLocalElementMasks; // 0x4        
        int32_t m_nLocalChannel; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        CUtlBinaryBlock m_container; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimFrameSegment, m_nUniqueFrameIndex) == 0x0);
    static_assert(offsetof(CAnimFrameSegment, m_nLocalElementMasks) == 0x4);
    static_assert(offsetof(CAnimFrameSegment, m_nLocalChannel) == 0x8);
    static_assert(offsetof(CAnimFrameSegment, m_container) == 0x10);
    
    static_assert(sizeof(CAnimFrameSegment) == 0x28);
};
