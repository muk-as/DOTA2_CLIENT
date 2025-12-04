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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct VertexPositionNormal_t
        {
        public:
            Vector m_vPosition; // 0x_            
            Vector m_vNormal; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::VertexPositionNormal_t, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::VertexPositionNormal_t, m_vNormal) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::VertexPositionNormal_t) == 0x_);
    };
};
