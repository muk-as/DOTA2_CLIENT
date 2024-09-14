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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x80
    // Has VTable
    #pragma pack(push, 1)
    class CNavVolumeSphere : public navlib::CNavVolume
    {
    public:
        Vector m_vCenter; // 0x70        
        float m_flRadius; // 0x7c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavVolumeSphere because it is not a standard-layout class
    static_assert(sizeof(CNavVolumeSphere) == 0x80);
};
