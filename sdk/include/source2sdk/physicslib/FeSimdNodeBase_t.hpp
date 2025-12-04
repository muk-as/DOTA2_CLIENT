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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeSimdNodeBase_t
        {
        public:
            std::uint16_t nNode[4]; // 0x_            
            std::uint16_t nNodeX0[4]; // 0x_            
            std::uint16_t nNodeX1[4]; // 0x_            
            std::uint16_t nNodeY0[4]; // 0x_            
            std::uint16_t nNodeY1[4]; // 0x_            
            std::uint16_t nDummy[4]; // 0x_            
            source2sdk::mathlib_extended::FourQuaternions qAdjust; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeX0) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeX1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeY0) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nNodeY1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, nDummy) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSimdNodeBase_t, qAdjust) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeSimdNodeBase_t) == 0x_);
    };
};
