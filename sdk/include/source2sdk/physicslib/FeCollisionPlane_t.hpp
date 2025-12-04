#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/RnPlane_t.hpp"

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
        struct FeCollisionPlane_t
        {
        public:
            std::uint16_t nCtrlParent; // 0x_            
            std::uint16_t nChildNode; // 0x_            
            source2sdk::physicslib::RnPlane_t m_Plane; // 0x_            
            float flStrength; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeCollisionPlane_t, nCtrlParent) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeCollisionPlane_t, nChildNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeCollisionPlane_t, m_Plane) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeCollisionPlane_t, flStrength) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeCollisionPlane_t) == 0x_);
    };
};
