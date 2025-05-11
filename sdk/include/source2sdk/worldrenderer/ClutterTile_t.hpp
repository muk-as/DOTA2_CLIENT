#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ClutterTile_t
        {
        public:
            std::uint32_t m_nFirstInstance; // 0x0            
            std::uint32_t m_nLastInstance; // 0x4            
            source2sdk::mathlib_extended::AABB_t m_BoundsWs; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::ClutterTile_t, m_nFirstInstance) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterTile_t, m_nLastInstance) == 0x4);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterTile_t, m_BoundsWs) == 0x8);
        
        static_assert(sizeof(source2sdk::worldrenderer::ClutterTile_t) == 0x20);
    };
};
