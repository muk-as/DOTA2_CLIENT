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
        // Registered alignment: 0x2
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeNodeWindBase_t
        {
        public:
            std::uint16_t nNodeX0; // 0x0            
            std::uint16_t nNodeX1; // 0x2            
            std::uint16_t nNodeY0; // 0x4            
            std::uint16_t nNodeY1; // 0x6            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeNodeWindBase_t, nNodeX0) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeNodeWindBase_t, nNodeX1) == 0x2);
        static_assert(offsetof(source2sdk::physicslib::FeNodeWindBase_t, nNodeY0) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::FeNodeWindBase_t, nNodeY1) == 0x6);
        
        static_assert(sizeof(source2sdk::physicslib::FeNodeWindBase_t) == 0x8);
    };
};
