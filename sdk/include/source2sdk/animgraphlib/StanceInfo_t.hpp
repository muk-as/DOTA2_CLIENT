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
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct StanceInfo_t
    {
    public:
        Vector m_vPosition; // 0x0        
        float m_flDirection; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(StanceInfo_t, m_vPosition) == 0x0);
    static_assert(offsetof(StanceInfo_t, m_flDirection) == 0xc);
    
    static_assert(sizeof(StanceInfo_t) == 0x10);
};
