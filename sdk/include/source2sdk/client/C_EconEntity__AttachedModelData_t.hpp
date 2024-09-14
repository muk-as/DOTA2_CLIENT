#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct C_EconEntity__AttachedModelData_t
    {
    public:
        int32_t m_iModelDisplayFlags; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_EconEntity__AttachedModelData_t, m_iModelDisplayFlags) == 0x0);
    
    static_assert(sizeof(C_EconEntity__AttachedModelData_t) == 0x4);
};
