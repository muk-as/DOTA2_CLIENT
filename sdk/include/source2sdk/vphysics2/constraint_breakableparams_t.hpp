#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace vphysics2
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct constraint_breakableparams_t
        {
        public:
            float strength; // 0x_            
            float forceLimit; // 0x_            
            float torqueLimit; // 0x_            
            float bodyMassScale[2]; // 0x_            
            bool isActive; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::vphysics2::constraint_breakableparams_t, strength) == 0x_);
        static_assert(offsetof(source2sdk::vphysics2::constraint_breakableparams_t, forceLimit) == 0x_);
        static_assert(offsetof(source2sdk::vphysics2::constraint_breakableparams_t, torqueLimit) == 0x_);
        static_assert(offsetof(source2sdk::vphysics2::constraint_breakableparams_t, bodyMassScale) == 0x_);
        static_assert(offsetof(source2sdk::vphysics2::constraint_breakableparams_t, isActive) == 0x_);
        
        static_assert(sizeof(source2sdk::vphysics2::constraint_breakableparams_t) == 0x_);
    };
};
