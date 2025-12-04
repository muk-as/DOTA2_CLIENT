#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace mathlib_extended
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class FourQuaternions
        {
        public:
            fltx4 x; // 0x_            
            fltx4 y; // 0x_            
            fltx4 z; // 0x_            
            fltx4 w; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::FourQuaternions, x) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::FourQuaternions, y) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::FourQuaternions, z) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::FourQuaternions, w) == 0x_);
        
        static_assert(sizeof(source2sdk::mathlib_extended::FourQuaternions) == 0x_);
    };
};
