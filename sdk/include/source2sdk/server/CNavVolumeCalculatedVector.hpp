#pragma once
#include "source2sdk/navlib/CNavVolume.hpp"
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
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x98
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CNavVolumeCalculatedVector : public navlib::CNavVolume
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x28];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNavVolumeCalculatedVector) == 0x98);
};
