#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CRenderSkeleton.hpp"
#include "source2sdk/modellib/CSceneObjectData.hpp"
#include "source2sdk/modellib/DynamicMeshDeformParams_t.hpp"
namespace source2sdk
{
    namespace modellib
    {
        struct CBaseConstraint;
    };
};
namespace source2sdk
{
    namespace modellib
    {
        struct CRenderGroom;
    };
};

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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderMesh
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::modellib::CSceneObjectData,1> m_sceneObjects;
            char m_sceneObjects[0x_]; // 0x_            
            // m_constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CBaseConstraint*> m_constraints;
            char m_constraints[0x_]; // 0x_            
            source2sdk::modellib::CRenderSkeleton m_skeleton; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bUseUV2ForCharting; // 0x_            
            bool m_bEmbeddedMapMesh; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::DynamicMeshDeformParams_t m_meshDeformParams; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::CRenderGroom* m_pGroomData; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_sceneObjects) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_constraints) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_skeleton) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bUseUV2ForCharting) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bEmbeddedMapMesh) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_meshDeformParams) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_pGroomData) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CRenderMesh) == 0x_);
    };
};
