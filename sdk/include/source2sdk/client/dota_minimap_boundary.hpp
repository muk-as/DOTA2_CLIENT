#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEmptyEntityInstance.hpp"

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
        // Construct disallowed
        #pragma pack(push, 1)
        class dota_minimap_boundary : public source2sdk::entity2::CEmptyEntityInstance
        {
        public:
            uint8_t _pad0001[0x7];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::dota_minimap_boundary) == 0x8);
    };
};
