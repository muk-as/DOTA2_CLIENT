#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/physicslib/RnFace_t.hpp"
#include "source2sdk/physicslib/RnHalfEdge_t.hpp"
#include "source2sdk/physicslib/RnPlane_t.hpp"
#include "source2sdk/physicslib/RnVertex_t.hpp"
namespace source2sdk
{
    namespace physicslib
    {
        struct CRegionSVM;
    };
};

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnHull_t
        {
        public:
            Vector m_vCentroid; // 0x_            
            float m_flMaxAngularRadius; // 0x_            
            source2sdk::mathlib_extended::AABB_t m_Bounds; // 0x_            
            Vector m_vOrthographicAreas; // 0x_            
            matrix3x4_t m_MassProperties; // 0x_            
            float m_flVolume; // 0x_            
            float m_flSurfaceArea; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Vertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnVertex_t> m_Vertices;
            char m_Vertices[0x_]; // 0x_            
            // m_VertexPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_VertexPositions;
            char m_VertexPositions[0x_]; // 0x_            
            // m_Edges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnHalfEdge_t> m_Edges;
            char m_Edges[0x_]; // 0x_            
            // m_Faces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnFace_t> m_Faces;
            char m_Faces[0x_]; // 0x_            
            // m_FacePlanes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnPlane_t> m_FacePlanes;
            char m_FacePlanes[0x_]; // 0x_            
            std::uint32_t m_nFlags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::physicslib::CRegionSVM* m_pRegionSVM; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_vCentroid) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_flMaxAngularRadius) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_Bounds) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_vOrthographicAreas) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_MassProperties) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_flVolume) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_flSurfaceArea) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_Vertices) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_VertexPositions) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_Edges) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_Faces) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_FacePlanes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnHull_t, m_pRegionSVM) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::RnHull_t) == 0x_);
    };
};
