#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/CNavVolume.hpp"

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
        // Size: 0x80
        // Has VTable
        #pragma pack(push, 1)
        class CNavVolumeSphere : public source2sdk::navlib::CNavVolume
        {
        public:
            Vector m_vCenter; // 0x70            
            float m_flRadius; // 0x7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavVolumeSphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::navlib::CNavVolumeSphere) == 0x80);
    };
};
