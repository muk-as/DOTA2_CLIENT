#pragma once
#include "source2sdk/physicslib/RnPlane_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeCollisionPlane_t
    {
    public:
        uint16_t nCtrlParent; // 0x0        
        uint16_t nChildNode; // 0x2        
        physicslib::RnPlane_t m_Plane; // 0x4        
        float flStrength; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeCollisionPlane_t, nCtrlParent) == 0x0);
    static_assert(offsetof(FeCollisionPlane_t, nChildNode) == 0x2);
    static_assert(offsetof(FeCollisionPlane_t, m_Plane) == 0x4);
    static_assert(offsetof(FeCollisionPlane_t, flStrength) == 0x14);
    
    static_assert(sizeof(FeCollisionPlane_t) == 0x18);
};
