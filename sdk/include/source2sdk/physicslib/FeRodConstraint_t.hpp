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
        // Size: 0x14
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeRodConstraint_t
        {
        public:
            std::uint16_t nNode[2]; // 0x0            
            float flMaxDist; // 0x4            
            float flMinDist; // 0x8            
            float flWeight0; // 0xc            
            float flRelaxationFactor; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeRodConstraint_t, nNode) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeRodConstraint_t, flMaxDist) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::FeRodConstraint_t, flMinDist) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeRodConstraint_t, flWeight0) == 0xc);
        static_assert(offsetof(source2sdk::physicslib::FeRodConstraint_t, flRelaxationFactor) == 0x10);
        
        static_assert(sizeof(source2sdk::physicslib::FeRodConstraint_t) == 0x14);
    };
};
