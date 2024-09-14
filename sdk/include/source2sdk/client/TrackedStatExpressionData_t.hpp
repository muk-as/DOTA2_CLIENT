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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct TrackedStatExpressionData_t
    {
    public:
        // metadata: MPropertyDescription "The expression"
        CUtlString strExpression; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x08[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TrackedStatExpressionData_t, strExpression) == 0x0);
    
    static_assert(sizeof(TrackedStatExpressionData_t) == 0x10);
};
