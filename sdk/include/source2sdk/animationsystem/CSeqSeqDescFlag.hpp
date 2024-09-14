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
    // Size: 0xb
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqSeqDescFlag
    {
    public:
        bool m_bLooping; // 0x0        
        bool m_bSnap; // 0x1        
        bool m_bAutoplay; // 0x2        
        bool m_bPost; // 0x3        
        bool m_bHidden; // 0x4        
        bool m_bMulti; // 0x5        
        bool m_bLegacyDelta; // 0x6        
        bool m_bLegacyWorldspace; // 0x7        
        bool m_bLegacyCyclepose; // 0x8        
        bool m_bLegacyRealtime; // 0x9        
        bool m_bModelDoc; // 0xa        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqSeqDescFlag, m_bLooping) == 0x0);
    static_assert(offsetof(CSeqSeqDescFlag, m_bSnap) == 0x1);
    static_assert(offsetof(CSeqSeqDescFlag, m_bAutoplay) == 0x2);
    static_assert(offsetof(CSeqSeqDescFlag, m_bPost) == 0x3);
    static_assert(offsetof(CSeqSeqDescFlag, m_bHidden) == 0x4);
    static_assert(offsetof(CSeqSeqDescFlag, m_bMulti) == 0x5);
    static_assert(offsetof(CSeqSeqDescFlag, m_bLegacyDelta) == 0x6);
    static_assert(offsetof(CSeqSeqDescFlag, m_bLegacyWorldspace) == 0x7);
    static_assert(offsetof(CSeqSeqDescFlag, m_bLegacyCyclepose) == 0x8);
    static_assert(offsetof(CSeqSeqDescFlag, m_bLegacyRealtime) == 0x9);
    static_assert(offsetof(CSeqSeqDescFlag, m_bModelDoc) == 0xa);
    
    static_assert(sizeof(CSeqSeqDescFlag) == 0xb);
};
