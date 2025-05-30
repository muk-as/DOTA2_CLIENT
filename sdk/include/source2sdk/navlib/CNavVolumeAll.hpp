#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/CNavVolumeVector.hpp"

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0x98
        // Has VTable
        #pragma pack(push, 1)
        class CNavVolumeAll : public source2sdk::navlib::CNavVolumeVector
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::navlib::CNavVolumeAll) == 0x98);
    };
};
