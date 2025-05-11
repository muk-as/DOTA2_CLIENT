#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/CNavVolumeSphere.hpp"

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x88
        // Has VTable
        #pragma pack(push, 1)
        class CNavVolumeSphericalShell : public source2sdk::navlib::CNavVolumeSphere
        {
        public:
            float m_flRadiusInner; // 0x80            
            uint8_t _pad0084[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavVolumeSphericalShell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::navlib::CNavVolumeSphericalShell) == 0x88);
    };
};
