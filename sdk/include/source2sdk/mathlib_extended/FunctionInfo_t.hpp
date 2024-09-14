#pragma once
#include "source2sdk/mathlib_extended/FuseFunctionIndex_t.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FunctionInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        CUtlString m_name; // 0x8        
        CUtlStringToken m_nameToken; // 0x10        
        int32_t m_nParamCount; // 0x14        
        mathlib_extended::FuseFunctionIndex_t m_nIndex; // 0x18        
        bool m_bIsPure; // 0x1a        
        [[maybe_unused]] std::uint8_t pad_0x1b[0x5];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FunctionInfo_t, m_name) == 0x8);
    static_assert(offsetof(FunctionInfo_t, m_nameToken) == 0x10);
    static_assert(offsetof(FunctionInfo_t, m_nParamCount) == 0x14);
    static_assert(offsetof(FunctionInfo_t, m_nIndex) == 0x18);
    static_assert(offsetof(FunctionInfo_t, m_bIsPure) == 0x1a);
    
    static_assert(sizeof(FunctionInfo_t) == 0x20);
};
