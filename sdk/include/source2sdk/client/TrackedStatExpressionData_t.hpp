#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            uint8_t _pad0008[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TrackedStatExpressionData_t, strExpression) == 0x0);
        
        static_assert(sizeof(source2sdk::client::TrackedStatExpressionData_t) == 0x10);
    };
};
