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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct ragdollhierarchyjoint_t
        {
        public:
            std::int32_t parentIndex; // 0x0            
            std::int32_t childIndex; // 0x4            
            uint8_t _pad0008[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ragdollhierarchyjoint_t, parentIndex) == 0x0);
        static_assert(offsetof(source2sdk::client::ragdollhierarchyjoint_t, childIndex) == 0x4);
        
        static_assert(sizeof(source2sdk::client::ragdollhierarchyjoint_t) == 0x10);
    };
};
