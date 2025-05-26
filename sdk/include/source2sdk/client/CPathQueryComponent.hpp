#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"

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
        // Standard-layout class: false
        // Size: 0xa0
        // Has VTable
        #pragma pack(push, 1)
        class CPathQueryComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x98];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CPathQueryComponent) == 0xa0);
    };
};
