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
        struct RnNode_t
        {
        public:
            Vector m_vMin; // 0x_            
            std::uint32_t m_nChildren; // 0x_            
            Vector m_vMax; // 0x_            
            std::uint32_t m_nTriangleOffset; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnNode_t, m_vMin) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnNode_t, m_nChildren) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnNode_t, m_vMax) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnNode_t, m_nTriangleOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::RnNode_t) == 0x_);
    };
};
