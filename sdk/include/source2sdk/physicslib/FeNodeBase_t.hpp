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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeNodeBase_t
        {
        public:
            std::uint16_t nNode; // 0x0            
            std::uint16_t nDummy[3]; // 0x2            
            std::uint16_t nNodeX0; // 0x8            
            std::uint16_t nNodeX1; // 0xa            
            std::uint16_t nNodeY0; // 0xc            
            std::uint16_t nNodeY1; // 0xe            
            QuaternionStorage qAdjust; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeNodeBase_t, nNode) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeNodeBase_t, nDummy) == 0x2);
        static_assert(offsetof(source2sdk::physicslib::FeNodeBase_t, nNodeX0) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeNodeBase_t, nNodeX1) == 0xa);
        static_assert(offsetof(source2sdk::physicslib::FeNodeBase_t, nNodeY0) == 0xc);
        static_assert(offsetof(source2sdk::physicslib::FeNodeBase_t, nNodeY1) == 0xe);
        static_assert(offsetof(source2sdk::physicslib::FeNodeBase_t, qAdjust) == 0x10);
        
        static_assert(sizeof(source2sdk::physicslib::FeNodeBase_t) == 0x20);
    };
};
