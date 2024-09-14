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
    // Registered alignment: 0x1
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x6
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqMultiFetchFlag
    {
    public:
        bool m_bRealtime; // 0x0        
        bool m_bCylepose; // 0x1        
        bool m_b0D; // 0x2        
        bool m_b1D; // 0x3        
        bool m_b2D; // 0x4        
        bool m_b2D_TRI; // 0x5        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqMultiFetchFlag, m_bRealtime) == 0x0);
    static_assert(offsetof(CSeqMultiFetchFlag, m_bCylepose) == 0x1);
    static_assert(offsetof(CSeqMultiFetchFlag, m_b0D) == 0x2);
    static_assert(offsetof(CSeqMultiFetchFlag, m_b1D) == 0x3);
    static_assert(offsetof(CSeqMultiFetchFlag, m_b2D) == 0x4);
    static_assert(offsetof(CSeqMultiFetchFlag, m_b2D_TRI) == 0x5);
    
    static_assert(sizeof(CSeqMultiFetchFlag) == 0x6);
};
