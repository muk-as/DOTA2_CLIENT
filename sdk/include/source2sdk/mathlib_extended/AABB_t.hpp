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
        struct AABB_t
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMinBounds; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vMaxBounds; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::AABB_t, m_vMinBounds) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::AABB_t, m_vMaxBounds) == 0x_);
        
        static_assert(sizeof(source2sdk::mathlib_extended::AABB_t) == 0x_);
    };
};
