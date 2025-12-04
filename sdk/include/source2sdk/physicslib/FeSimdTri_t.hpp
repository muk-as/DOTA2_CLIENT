#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/FourVectors2D.hpp"

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeSimdTri_t
        {
        public:
            std::uint32_t nNode[3][4]; // 0x_            
            fltx4 w1; // 0x_            
            fltx4 w2; // 0x_            
            fltx4 v1x; // 0x_            
            source2sdk::physicslib::FourVectors2D v2; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSimdTri_t, nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdTri_t, w1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdTri_t, w2) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdTri_t, v1x) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdTri_t, v2) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeSimdTri_t) == 0x_);
    };
};
