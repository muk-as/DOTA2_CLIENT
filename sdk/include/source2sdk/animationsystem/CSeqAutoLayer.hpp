#pragma once
#include "source2sdk/animationsystem/CSeqAutoLayerFlag.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x1c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqAutoLayer
    {
    public:
        int16_t m_nLocalReference; // 0x0        
        int16_t m_nLocalPose; // 0x2        
        animationsystem::CSeqAutoLayerFlag m_flags; // 0x4        
        float m_start; // 0xc        
        float m_peak; // 0x10        
        float m_tail; // 0x14        
        float m_end; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqAutoLayer, m_nLocalReference) == 0x0);
    static_assert(offsetof(CSeqAutoLayer, m_nLocalPose) == 0x2);
    static_assert(offsetof(CSeqAutoLayer, m_flags) == 0x4);
    static_assert(offsetof(CSeqAutoLayer, m_start) == 0xc);
    static_assert(offsetof(CSeqAutoLayer, m_peak) == 0x10);
    static_assert(offsetof(CSeqAutoLayer, m_tail) == 0x14);
    static_assert(offsetof(CSeqAutoLayer, m_end) == 0x18);
    
    static_assert(sizeof(CSeqAutoLayer) == 0x1c);
};
