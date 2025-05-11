#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeQuad_t
        {
        public:
            std::uint16_t nNode[4]; // 0x0            
            float flSlack; // 0x8            
            Vector4D vShape[4]; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeQuad_t, nNode) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeQuad_t, flSlack) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeQuad_t, vShape) == 0xc);
        
        static_assert(sizeof(source2sdk::physicslib::FeQuad_t) == 0x4c);
    };
};
