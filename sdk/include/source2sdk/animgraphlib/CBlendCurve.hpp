#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBlendCurve
    {
    public:
        float m_flControlPoint1; // 0x0        
        float m_flControlPoint2; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBlendCurve, m_flControlPoint1) == 0x0);
    static_assert(offsetof(CBlendCurve, m_flControlPoint2) == 0x4);
    
    static_assert(sizeof(CBlendCurve) == 0x8);
};
