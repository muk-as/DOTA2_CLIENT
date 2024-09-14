#pragma once
#include "source2sdk/server/dynpitchvol_base_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x64
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct dynpitchvol_t : public server::dynpitchvol_base_t
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(dynpitchvol_t) == 0x64);
};
