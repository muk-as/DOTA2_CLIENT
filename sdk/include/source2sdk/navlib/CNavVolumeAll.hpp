#pragma once
#include "source2sdk/navlib/CNavVolumeVector.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x98
    // Has VTable
    #pragma pack(push, 1)
    class CNavVolumeAll : public navlib::CNavVolumeVector
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNavVolumeAll) == 0x98);
};
