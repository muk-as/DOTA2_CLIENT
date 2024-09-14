#pragma once
#include "source2sdk/physicslib/RnNode_t.hpp"
#include "source2sdk/physicslib/RnTriangle_t.hpp"
#include "source2sdk/physicslib/RnWing_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnMesh_t
    {
    public:
        Vector m_vMin; // 0x0        
        Vector m_vMax; // 0xc        
        // m_Nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnNode_t> m_Nodes;
        char m_Nodes[0x18]; // 0x18        
        CUtlVectorSIMDPaddedVector m_Vertices; // 0x30        
        // m_Triangles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnTriangle_t> m_Triangles;
        char m_Triangles[0x18]; // 0x48        
        // m_Wings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnWing_t> m_Wings;
        char m_Wings[0x18]; // 0x60        
        // m_Materials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_Materials;
        char m_Materials[0x18]; // 0x78        
        Vector m_vOrthographicAreas; // 0x90        
        uint32_t m_nFlags; // 0x9c        
        uint32_t m_nDebugFlags; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa4[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnMesh_t, m_vMin) == 0x0);
    static_assert(offsetof(RnMesh_t, m_vMax) == 0xc);
    static_assert(offsetof(RnMesh_t, m_Nodes) == 0x18);
    static_assert(offsetof(RnMesh_t, m_Vertices) == 0x30);
    static_assert(offsetof(RnMesh_t, m_Triangles) == 0x48);
    static_assert(offsetof(RnMesh_t, m_Wings) == 0x60);
    static_assert(offsetof(RnMesh_t, m_Materials) == 0x78);
    static_assert(offsetof(RnMesh_t, m_vOrthographicAreas) == 0x90);
    static_assert(offsetof(RnMesh_t, m_nFlags) == 0x9c);
    static_assert(offsetof(RnMesh_t, m_nDebugFlags) == 0xa0);
    
    static_assert(sizeof(RnMesh_t) == 0xa8);
};
