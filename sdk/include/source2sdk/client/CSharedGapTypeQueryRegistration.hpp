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
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x8
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MGapTypeQueriesForScopeSingleton
        #pragma pack(push, 1)
        class CSharedGapTypeQueryRegistration
        {
        public:
            uint8_t _pad0000[0x8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CSharedGapTypeQueryRegistration) == 0x8);
    };
};
