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
        struct FeWorldCollisionParams_t
        {
        public:
            float flWorldFriction; // 0x_            
            float flGroundFriction; // 0x_            
            std::uint16_t nListBegin; // 0x_            
            std::uint16_t nListEnd; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, flWorldFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, flGroundFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, nListBegin) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeWorldCollisionParams_t, nListEnd) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeWorldCollisionParams_t) == 0x_);
    };
};
