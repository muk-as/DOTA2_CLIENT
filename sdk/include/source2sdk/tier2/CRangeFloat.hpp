#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: tier2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::tier2
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // 
    // static metadata: MPropertyCustomEditor "multi_float(2)"
    #pragma pack(push, 1)
    class CRangeFloat
    {
    public:
        float m_pValue[2]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRangeFloat, m_pValue) == 0x0);
    
    static_assert(sizeof(CRangeFloat) == 0x8);
};
