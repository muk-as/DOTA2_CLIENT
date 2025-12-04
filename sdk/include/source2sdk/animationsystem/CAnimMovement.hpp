#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
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
        class CAnimMovement
        {
        public:
            std::int32_t endframe; // 0x_            
            std::int32_t motionflags; // 0x_            
            float v0; // 0x_            
            float v1; // 0x_            
            float angle; // 0x_            
            Vector vector; // 0x_            
            Vector position; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, endframe) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, motionflags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, v0) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, v1) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, angle) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, vector) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, position) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimMovement) == 0x_);
    };
};
