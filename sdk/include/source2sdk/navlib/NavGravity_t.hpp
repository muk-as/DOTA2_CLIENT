#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct NavGravity_t
        {
        public:
            Vector m_vGravity; // 0x0            
            bool m_bDefault; // 0xc            
            uint8_t _pad000d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::navlib::NavGravity_t, m_vGravity) == 0x0);
        static_assert(offsetof(source2sdk::navlib::NavGravity_t, m_bDefault) == 0xc);
        
        static_assert(sizeof(source2sdk::navlib::NavGravity_t) == 0x10);
    };
};
