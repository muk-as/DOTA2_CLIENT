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
    struct LookAtBone_t
    {
    public:
        int32_t m_index; // 0x0        
        float m_weight; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(LookAtBone_t, m_index) == 0x0);
    static_assert(offsetof(LookAtBone_t, m_weight) == 0x4);
    
    static_assert(sizeof(LookAtBone_t) == 0x8);
};
