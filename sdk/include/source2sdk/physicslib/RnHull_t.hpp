#pragma once
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/physicslib/RnFace_t.hpp"
#include "source2sdk/physicslib/RnHalfEdge_t.hpp"
#include "source2sdk/physicslib/RnPlane_t.hpp"
#include "source2sdk/physicslib/RnVertex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    class CRegionSVM;
};

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xf8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnHull_t
    {
    public:
        Vector m_vCentroid; // 0x0        
        float m_flMaxAngularRadius; // 0xc        
        mathlib_extended::AABB_t m_Bounds; // 0x10        
        Vector m_vOrthographicAreas; // 0x28        
        matrix3x4_t m_MassProperties; // 0x34        
        float m_flVolume; // 0x64        
        float m_flSurfaceArea; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4]; // 0x6c
        // m_Vertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnVertex_t> m_Vertices;
        char m_Vertices[0x18]; // 0x70        
        // m_VertexPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_VertexPositions;
        char m_VertexPositions[0x18]; // 0x88        
        // m_Edges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnHalfEdge_t> m_Edges;
        char m_Edges[0x18]; // 0xa0        
        // m_Faces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnFace_t> m_Faces;
        char m_Faces[0x18]; // 0xb8        
        // m_FacePlanes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnPlane_t> m_FacePlanes;
        char m_FacePlanes[0x18]; // 0xd0        
        uint32_t m_nFlags; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4]; // 0xec
        physicslib::CRegionSVM* m_pRegionSVM; // 0xf0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnHull_t, m_vCentroid) == 0x0);
    static_assert(offsetof(RnHull_t, m_flMaxAngularRadius) == 0xc);
    static_assert(offsetof(RnHull_t, m_Bounds) == 0x10);
    static_assert(offsetof(RnHull_t, m_vOrthographicAreas) == 0x28);
    static_assert(offsetof(RnHull_t, m_MassProperties) == 0x34);
    static_assert(offsetof(RnHull_t, m_flVolume) == 0x64);
    static_assert(offsetof(RnHull_t, m_flSurfaceArea) == 0x68);
    static_assert(offsetof(RnHull_t, m_Vertices) == 0x70);
    static_assert(offsetof(RnHull_t, m_VertexPositions) == 0x88);
    static_assert(offsetof(RnHull_t, m_Edges) == 0xa0);
    static_assert(offsetof(RnHull_t, m_Faces) == 0xb8);
    static_assert(offsetof(RnHull_t, m_FacePlanes) == 0xd0);
    static_assert(offsetof(RnHull_t, m_nFlags) == 0xe8);
    static_assert(offsetof(RnHull_t, m_pRegionSVM) == 0xf0);
    
    static_assert(sizeof(RnHull_t) == 0xf8);
};
