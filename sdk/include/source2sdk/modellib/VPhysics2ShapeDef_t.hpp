#pragma once
#include "source2sdk/physicslib/RnCapsuleDesc_t.hpp"
#include "source2sdk/physicslib/RnHullDesc_t.hpp"
#include "source2sdk/physicslib/RnMeshDesc_t.hpp"
#include "source2sdk/physicslib/RnSphereDesc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x78
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VPhysics2ShapeDef_t
    {
    public:
        // m_spheres has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnSphereDesc_t> m_spheres;
        char m_spheres[0x18]; // 0x0        
        // m_capsules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnCapsuleDesc_t> m_capsules;
        char m_capsules[0x18]; // 0x18        
        // m_hulls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnHullDesc_t> m_hulls;
        char m_hulls[0x18]; // 0x30        
        // m_meshes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnMeshDesc_t> m_meshes;
        char m_meshes[0x18]; // 0x48        
        // m_CollisionAttributeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_CollisionAttributeIndices;
        char m_CollisionAttributeIndices[0x18]; // 0x60        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VPhysics2ShapeDef_t, m_spheres) == 0x0);
    static_assert(offsetof(VPhysics2ShapeDef_t, m_capsules) == 0x18);
    static_assert(offsetof(VPhysics2ShapeDef_t, m_hulls) == 0x30);
    static_assert(offsetof(VPhysics2ShapeDef_t, m_meshes) == 0x48);
    static_assert(offsetof(VPhysics2ShapeDef_t, m_CollisionAttributeIndices) == 0x60);
    
    static_assert(sizeof(VPhysics2ShapeDef_t) == 0x78);
};
