#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnBlendVertex_t
    {
    public:
        uint16_t m_nWeight0; // 0x0        
        uint16_t m_nIndex0; // 0x2        
        uint16_t m_nWeight1; // 0x4        
        uint16_t m_nIndex1; // 0x6        
        uint16_t m_nWeight2; // 0x8        
        uint16_t m_nIndex2; // 0xa        
        uint16_t m_nFlags; // 0xc        
        uint16_t m_nTargetIndex; // 0xe        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnBlendVertex_t, m_nWeight0) == 0x0);
    static_assert(offsetof(RnBlendVertex_t, m_nIndex0) == 0x2);
    static_assert(offsetof(RnBlendVertex_t, m_nWeight1) == 0x4);
    static_assert(offsetof(RnBlendVertex_t, m_nIndex1) == 0x6);
    static_assert(offsetof(RnBlendVertex_t, m_nWeight2) == 0x8);
    static_assert(offsetof(RnBlendVertex_t, m_nIndex2) == 0xa);
    static_assert(offsetof(RnBlendVertex_t, m_nFlags) == 0xc);
    static_assert(offsetof(RnBlendVertex_t, m_nTargetIndex) == 0xe);
    
    static_assert(sizeof(RnBlendVertex_t) == 0x10);
};
