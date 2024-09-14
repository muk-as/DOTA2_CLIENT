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
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x1
    // Has Trivial Destructor
    // 
    // static metadata: MPropertyEditClassAsString
    #pragma pack(push, 1)
    class CAnimEnum
    {
    public:
        uint8_t m_value; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimEnum, m_value) == 0x0);
    
    static_assert(sizeof(CAnimEnum) == 0x1);
};
