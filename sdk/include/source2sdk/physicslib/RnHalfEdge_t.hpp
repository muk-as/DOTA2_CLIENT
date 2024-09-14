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
    // Registered alignment: 0x1
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnHalfEdge_t
    {
    public:
        uint8_t m_nNext; // 0x0        
        uint8_t m_nTwin; // 0x1        
        uint8_t m_nOrigin; // 0x2        
        uint8_t m_nFace; // 0x3        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnHalfEdge_t, m_nNext) == 0x0);
    static_assert(offsetof(RnHalfEdge_t, m_nTwin) == 0x1);
    static_assert(offsetof(RnHalfEdge_t, m_nOrigin) == 0x2);
    static_assert(offsetof(RnHalfEdge_t, m_nFace) == 0x3);
    
    static_assert(sizeof(RnHalfEdge_t) == 0x4);
};
