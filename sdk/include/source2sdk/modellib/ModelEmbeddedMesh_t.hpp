#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/ModelMeshBufferData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ModelEmbeddedMesh_t
        {
        public:
            CUtlString m_Name; // 0x0            
            uint8_t _pad0008[0x8]; // 0x8
            std::int32_t m_nMeshIndex; // 0x10            
            std::int32_t m_nDataBlock; // 0x14            
            std::int32_t m_nMorphBlock; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            // m_vertexBuffers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::ModelMeshBufferData_t> m_vertexBuffers;
            char m_vertexBuffers[0x18]; // 0x20            
            // m_indexBuffers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::ModelMeshBufferData_t> m_indexBuffers;
            char m_indexBuffers[0x18]; // 0x38            
            // m_toolsBuffers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::ModelMeshBufferData_t> m_toolsBuffers;
            char m_toolsBuffers[0x18]; // 0x50            
            std::int32_t m_nVBIBBlock; // 0x68            
            std::int32_t m_nToolsVBBlock; // 0x6c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nMeshIndex) == 0x10);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nDataBlock) == 0x14);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nMorphBlock) == 0x18);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_vertexBuffers) == 0x20);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_indexBuffers) == 0x38);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_toolsBuffers) == 0x50);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nVBIBBlock) == 0x68);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nToolsVBBlock) == 0x6c);
        
        static_assert(sizeof(source2sdk::modellib::ModelEmbeddedMesh_t) == 0x70);
    };
};
