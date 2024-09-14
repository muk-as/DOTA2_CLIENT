#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MaterialParam_t
    {
    public:
        CUtlString m_name; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MaterialParam_t, m_name) == 0x0);
    
    static_assert(sizeof(MaterialParam_t) == 0x8);
};
