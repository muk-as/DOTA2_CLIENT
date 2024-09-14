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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimMorphDifference
    {
    public:
        CBufferString m_name; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimMorphDifference, m_name) == 0x0);
    
    static_assert(sizeof(CAnimMorphDifference) == 0x10);
};
