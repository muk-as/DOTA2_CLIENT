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
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimDesc_Flag
    {
    public:
        bool m_bLooping; // 0x0        
        bool m_bAllZeros; // 0x1        
        bool m_bHidden; // 0x2        
        bool m_bDelta; // 0x3        
        bool m_bLegacyWorldspace; // 0x4        
        bool m_bModelDoc; // 0x5        
        bool m_bImplicitSeqIgnoreDelta; // 0x6        
        bool m_bAnimGraphAdditive; // 0x7        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimDesc_Flag, m_bLooping) == 0x0);
    static_assert(offsetof(CAnimDesc_Flag, m_bAllZeros) == 0x1);
    static_assert(offsetof(CAnimDesc_Flag, m_bHidden) == 0x2);
    static_assert(offsetof(CAnimDesc_Flag, m_bDelta) == 0x3);
    static_assert(offsetof(CAnimDesc_Flag, m_bLegacyWorldspace) == 0x4);
    static_assert(offsetof(CAnimDesc_Flag, m_bModelDoc) == 0x5);
    static_assert(offsetof(CAnimDesc_Flag, m_bImplicitSeqIgnoreDelta) == 0x6);
    static_assert(offsetof(CAnimDesc_Flag, m_bAnimGraphAdditive) == 0x7);
    
    static_assert(sizeof(CAnimDesc_Flag) == 0x8);
};
