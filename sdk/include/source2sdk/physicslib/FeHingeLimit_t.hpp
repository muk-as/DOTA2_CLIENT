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
        struct FeHingeLimit_t
        {
        public:
            std::uint16_t nNode[6]; // 0x_            
            std::uint32_t nFlags; // 0x_            
            float flWeight4; // 0x_            
            float flWeight5; // 0x_            
            float flAngleCenter; // 0x_            
            float flAngleExtents; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeHingeLimit_t, nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeHingeLimit_t, nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeHingeLimit_t, flWeight4) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeHingeLimit_t, flWeight5) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeHingeLimit_t, flAngleCenter) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeHingeLimit_t, flAngleExtents) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeHingeLimit_t) == 0x_);
    };
};
