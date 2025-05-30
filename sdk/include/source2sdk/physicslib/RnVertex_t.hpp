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
        // Registered alignment: 0x1
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x1
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnVertex_t
        {
        public:
            std::uint8_t m_nEdge; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnVertex_t, m_nEdge) == 0x0);
        
        static_assert(sizeof(source2sdk::physicslib::RnVertex_t) == 0x1);
    };
};
