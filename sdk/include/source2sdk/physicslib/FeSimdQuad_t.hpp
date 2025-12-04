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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeSimdQuad_t
        {
        public:
            std::uint16_t nNode[4][4]; // 0x_            
            fltx4 f4Slack; // 0x_            
            FourVectors vShape[4]; // 0x_            
            fltx4 f4Weights[4]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSimdQuad_t, nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdQuad_t, f4Slack) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdQuad_t, vShape) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdQuad_t, f4Weights) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeSimdQuad_t) == 0x_);
    };
};
