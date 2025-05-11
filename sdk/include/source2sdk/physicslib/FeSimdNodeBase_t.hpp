#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/FourQuaternions.hpp"

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
        // Size: 0x70
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeSimdNodeBase_t
        {
        public:
            std::uint16_t nNode[4]; // 0x0            
            std::uint16_t nNodeX0[4]; // 0x8            
            std::uint16_t nNodeX1[4]; // 0x10            
            std::uint16_t nNodeY0[4]; // 0x18            
            std::uint16_t nNodeY1[4]; // 0x20            
            std::uint16_t nDummy[4]; // 0x28            
            source2sdk::mathlib_extended::FourQuaternions qAdjust; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNode) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeX0) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeX1) == 0x10);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeY0) == 0x18);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeY1) == 0x20);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nDummy) == 0x28);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, qAdjust) == 0x30);
        
        static_assert(sizeof(source2sdk::physicslib::FeSimdNodeBase_t) == 0x70);
    };
};
