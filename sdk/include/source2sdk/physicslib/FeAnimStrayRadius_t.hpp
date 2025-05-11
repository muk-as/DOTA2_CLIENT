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
        struct FeAnimStrayRadius_t
        {
        public:
            std::uint16_t nNode[2]; // 0x0            
            float flMaxDist; // 0x4            
            float flRelaxationFactor; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeAnimStrayRadius_t, nNode) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeAnimStrayRadius_t, flMaxDist) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::FeAnimStrayRadius_t, flRelaxationFactor) == 0x8);
        
        static_assert(sizeof(source2sdk::physicslib::FeAnimStrayRadius_t) == 0xc);
    };
};
