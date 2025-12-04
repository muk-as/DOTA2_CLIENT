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
        struct FeNodeIntegrator_t
        {
        public:
            float flPointDamping; // 0x_            
            float flAnimationForceAttraction; // 0x_            
            float flAnimationVertexAttraction; // 0x_            
            float flGravity; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeNodeIntegrator_t, flPointDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeNodeIntegrator_t, flAnimationForceAttraction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeNodeIntegrator_t, flAnimationVertexAttraction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeNodeIntegrator_t, flGravity) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeNodeIntegrator_t) == 0x_);
    };
};
