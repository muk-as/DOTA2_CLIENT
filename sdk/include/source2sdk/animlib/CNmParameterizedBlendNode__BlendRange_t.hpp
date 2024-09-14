#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmParameterizedBlendNode__BlendRange_t
    {
    public:
        int16_t m_nInputIdx0; // 0x0        
        int16_t m_nInputIdx1; // 0x2        
        Range_t m_parameterValueRange; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmParameterizedBlendNode__BlendRange_t, m_nInputIdx0) == 0x0);
    static_assert(offsetof(CNmParameterizedBlendNode__BlendRange_t, m_nInputIdx1) == 0x2);
    static_assert(offsetof(CNmParameterizedBlendNode__BlendRange_t, m_parameterValueRange) == 0x4);
    
    static_assert(sizeof(CNmParameterizedBlendNode__BlendRange_t) == 0xc);
};
