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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x2c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimMovement
        {
        public:
            std::int32_t endframe; // 0x0            
            std::int32_t motionflags; // 0x4            
            float v0; // 0x8            
            float v1; // 0xc            
            float angle; // 0x10            
            Vector vector; // 0x14            
            Vector position; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, endframe) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, motionflags) == 0x4);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, v0) == 0x8);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, v1) == 0xc);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, angle) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, vector) == 0x14);
        static_assert(offsetof(source2sdk::animationsystem::CAnimMovement, position) == 0x20);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimMovement) == 0x2c);
    };
};
