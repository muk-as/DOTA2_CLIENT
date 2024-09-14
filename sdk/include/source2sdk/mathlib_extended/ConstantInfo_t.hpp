#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ConstantInfo_t
    {
    public:
        CUtlString m_name; // 0x0        
        CUtlStringToken m_nameToken; // 0x8        
        float m_flValue; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ConstantInfo_t, m_name) == 0x0);
    static_assert(offsetof(ConstantInfo_t, m_nameToken) == 0x8);
    static_assert(offsetof(ConstantInfo_t, m_flValue) == 0xc);
    
    static_assert(sizeof(ConstantInfo_t) == 0x10);
};
