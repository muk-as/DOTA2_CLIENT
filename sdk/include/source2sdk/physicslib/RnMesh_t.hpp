#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/RnNode_t.hpp"
#include "source2sdk/physicslib/RnTriangle_t.hpp"
#include "source2sdk/physicslib/RnWing_t.hpp"

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
        struct RnMesh_t
        {
        public:
            Vector m_vMin; // 0x_            
            Vector m_vMax; // 0x_            
            // m_Nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnNode_t> m_Nodes;
            char m_Nodes[0x_]; // 0x_            
            CUtlVectorSIMDPaddedVector m_Vertices; // 0x_            
            // m_Triangles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnTriangle_t> m_Triangles;
            char m_Triangles[0x_]; // 0x_            
            // m_Wings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnWing_t> m_Wings;
            char m_Wings[0x_]; // 0x_            
            // m_TriangleEdgeFlags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_TriangleEdgeFlags;
            char m_TriangleEdgeFlags[0x_]; // 0x_            
            // m_Materials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_Materials;
            char m_Materials[0x_]; // 0x_            
            Vector m_vOrthographicAreas; // 0x_            
            std::uint32_t m_nFlags; // 0x_            
            std::uint32_t m_nDebugFlags; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_vMin) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_vMax) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_Nodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_Vertices) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_Triangles) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_Wings) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_TriangleEdgeFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_Materials) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_vOrthographicAreas) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnMesh_t, m_nDebugFlags) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::RnMesh_t) == 0x_);
    };
};
