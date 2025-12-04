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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct TrackedStatCombatQueryData_t
        {
        public:
            // metadata: MPropertyDescription "the combat query file"
            CUtlString strCombatQueryPath; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TrackedStatCombatQueryData_t, strCombatQueryPath) == 0x_);
        
        static_assert(sizeof(source2sdk::client::TrackedStatCombatQueryData_t) == 0x_);
    };
};
