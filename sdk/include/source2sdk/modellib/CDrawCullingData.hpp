#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDrawCullingData
    {
    public:
        Vector m_vConeApex; // 0x0        
        int8_t m_ConeAxis[3]; // 0xc        
        int8_t m_ConeCutoff; // 0xf        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDrawCullingData, m_vConeApex) == 0x0);
    static_assert(offsetof(CDrawCullingData, m_ConeAxis) == 0xc);
    static_assert(offsetof(CDrawCullingData, m_ConeCutoff) == 0xf);
    
    static_assert(sizeof(CDrawCullingData) == 0x10);
};
