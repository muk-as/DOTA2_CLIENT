#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x2
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0xa
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeRigidColliderIndices_t
    {
    public:
        uint16_t m_nTaperedCapsuleRigidIndex; // 0x0        
        uint16_t m_nSphereRigidIndex; // 0x2        
        uint16_t m_nBoxRigidIndex; // 0x4        
        uint16_t m_nSDFRigidIndex; // 0x6        
        uint16_t m_nCollisionPlaneIndex; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeRigidColliderIndices_t, m_nTaperedCapsuleRigidIndex) == 0x0);
    static_assert(offsetof(FeRigidColliderIndices_t, m_nSphereRigidIndex) == 0x2);
    static_assert(offsetof(FeRigidColliderIndices_t, m_nBoxRigidIndex) == 0x4);
    static_assert(offsetof(FeRigidColliderIndices_t, m_nSDFRigidIndex) == 0x6);
    static_assert(offsetof(FeRigidColliderIndices_t, m_nCollisionPlaneIndex) == 0x8);
    
    static_assert(sizeof(FeRigidColliderIndices_t) == 0xa);
};
