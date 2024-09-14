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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnTriangle_t
    {
    public:
        int32_t m_nIndex[3]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnTriangle_t, m_nIndex) == 0x0);
    
    static_assert(sizeof(RnTriangle_t) == 0xc);
};
