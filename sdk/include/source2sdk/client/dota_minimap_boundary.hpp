#pragma once
#include "source2sdk/entity2/CEmptyEntityInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x8
    // Has VTable
    // Has Trivial Destructor
    // Construct disallowed
    #pragma pack(push, 1)
    class dota_minimap_boundary : public entity2::CEmptyEntityInstance
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x01[0x7];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(dota_minimap_boundary) == 0x8);
};
