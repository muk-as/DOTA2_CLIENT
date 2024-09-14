#pragma once
#include "source2sdk/navlib/CNavVolumeSphere.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    #pragma pack(push, 1)
    class CNavVolumeSphericalShell : public navlib::CNavVolumeSphere
    {
    public:
        float m_flRadiusInner; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x84[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavVolumeSphericalShell because it is not a standard-layout class
    static_assert(sizeof(CNavVolumeSphericalShell) == 0x88);
};
