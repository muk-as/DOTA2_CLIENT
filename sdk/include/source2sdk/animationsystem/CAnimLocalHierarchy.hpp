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
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimLocalHierarchy
    {
    public:
        CBufferString m_sBone; // 0x0        
        CBufferString m_sNewParent; // 0x10        
        int32_t m_nStartFrame; // 0x20        
        int32_t m_nPeakFrame; // 0x24        
        int32_t m_nTailFrame; // 0x28        
        int32_t m_nEndFrame; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimLocalHierarchy, m_sBone) == 0x0);
    static_assert(offsetof(CAnimLocalHierarchy, m_sNewParent) == 0x10);
    static_assert(offsetof(CAnimLocalHierarchy, m_nStartFrame) == 0x20);
    static_assert(offsetof(CAnimLocalHierarchy, m_nPeakFrame) == 0x24);
    static_assert(offsetof(CAnimLocalHierarchy, m_nTailFrame) == 0x28);
    static_assert(offsetof(CAnimLocalHierarchy, m_nEndFrame) == 0x2c);
    
    static_assert(sizeof(CAnimLocalHierarchy) == 0x30);
};
