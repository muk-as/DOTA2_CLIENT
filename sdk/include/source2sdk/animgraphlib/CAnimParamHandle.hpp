#pragma once
#include "source2sdk/animationsystem/AnimParamType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x1
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x2
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimParamHandle
    {
    public:
        animationsystem::AnimParamType_t m_type; // 0x0        
        uint8_t m_index; // 0x1        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimParamHandle, m_type) == 0x0);
    static_assert(offsetof(CAnimParamHandle, m_index) == 0x1);
    
    static_assert(sizeof(CAnimParamHandle) == 0x2);
};
