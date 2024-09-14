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
    class CSeqAutoLayerFlag
    {
    public:
        bool m_bPost; // 0x0        
        bool m_bSpline; // 0x1        
        bool m_bXFade; // 0x2        
        bool m_bNoBlend; // 0x3        
        bool m_bLocal; // 0x4        
        bool m_bPose; // 0x5        
        bool m_bFetchFrame; // 0x6        
        bool m_bSubtract; // 0x7        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqAutoLayerFlag, m_bPost) == 0x0);
    static_assert(offsetof(CSeqAutoLayerFlag, m_bSpline) == 0x1);
    static_assert(offsetof(CSeqAutoLayerFlag, m_bXFade) == 0x2);
    static_assert(offsetof(CSeqAutoLayerFlag, m_bNoBlend) == 0x3);
    static_assert(offsetof(CSeqAutoLayerFlag, m_bLocal) == 0x4);
    static_assert(offsetof(CSeqAutoLayerFlag, m_bPose) == 0x5);
    static_assert(offsetof(CSeqAutoLayerFlag, m_bFetchFrame) == 0x6);
    static_assert(offsetof(CSeqAutoLayerFlag, m_bSubtract) == 0x7);
    
    static_assert(sizeof(CSeqAutoLayerFlag) == 0x8);
};
