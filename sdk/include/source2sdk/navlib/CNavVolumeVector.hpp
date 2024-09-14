#pragma once
#include "source2sdk/navlib/CNavVolume.hpp"
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
    class CNavVolumeVector : public navlib::CNavVolume
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x8]; // 0x70
        bool m_bHasBeenPreFiltered; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x79[0x1f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavVolumeVector because it is not a standard-layout class
    static_assert(sizeof(CNavVolumeVector) == 0x98);
};
