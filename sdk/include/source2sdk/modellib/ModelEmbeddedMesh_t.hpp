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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ModelEmbeddedMesh_t
        {
        public:
            CUtlString m_Name; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nMeshIndex; // 0x_            
            std::int32_t m_nDataBlock; // 0x_            
            std::int32_t m_nMorphBlock; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vertexBuffers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::ModelMeshBufferData_t> m_vertexBuffers;
            char m_vertexBuffers[0x_]; // 0x_            
            // m_indexBuffers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::ModelMeshBufferData_t> m_indexBuffers;
            char m_indexBuffers[0x_]; // 0x_            
            // m_toolsBuffers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::ModelMeshBufferData_t> m_toolsBuffers;
            char m_toolsBuffers[0x_]; // 0x_            
            std::int32_t m_nVBIBBlock; // 0x_            
            std::int32_t m_nToolsVBBlock; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nMeshIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nDataBlock) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nMorphBlock) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_vertexBuffers) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_indexBuffers) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_toolsBuffers) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nVBIBBlock) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelEmbeddedMesh_t, m_nToolsVBBlock) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::ModelEmbeddedMesh_t) == 0x_);
    };
};
