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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimDecoder
    {
    public:
        CBufferString m_szName; // 0x0        
        int32_t m_nVersion; // 0x10        
        int32_t m_nType; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimDecoder, m_szName) == 0x0);
    static_assert(offsetof(CAnimDecoder, m_nVersion) == 0x10);
    static_assert(offsetof(CAnimDecoder, m_nType) == 0x14);
    
    static_assert(sizeof(CAnimDecoder) == 0x18);
};
