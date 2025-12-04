#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class PARTICLE_EHANDLE
        {
        public:
            std::int32_t unused; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::PARTICLE_EHANDLE, unused) == 0x_);
        
        static_assert(sizeof(source2sdk::particleslib::PARTICLE_EHANDLE) == 0x_);
    };
};
