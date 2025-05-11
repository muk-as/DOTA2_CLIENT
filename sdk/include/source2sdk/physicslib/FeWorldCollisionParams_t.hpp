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
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeWorldCollisionParams_t
        {
        public:
            float flWorldFriction; // 0x0            
            float flGroundFriction; // 0x4            
            std::uint16_t nListBegin; // 0x8            
            std::uint16_t nListEnd; // 0xa            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, flWorldFriction) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, flGroundFriction) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, nListBegin) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, nListEnd) == 0xa);
        
        static_assert(sizeof(source2sdk::physicslib::FeWorldCollisionParams_t) == 0xc);
    };
};
