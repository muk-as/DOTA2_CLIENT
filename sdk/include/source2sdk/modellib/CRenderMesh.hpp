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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x1f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderMesh
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::modellib::CSceneObjectData,1> m_sceneObjects;
            char m_sceneObjects[0x98]; // 0x10            
            // m_constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CBaseConstraint*> m_constraints;
            char m_constraints[0x10]; // 0xa8            
            source2sdk::modellib::CRenderSkeleton m_skeleton; // 0xb8            
            uint8_t _pad0108[0xac]; // 0x108
            bool m_bUseUV2ForCharting; // 0x1b4            
            bool m_bEmbeddedMapMesh; // 0x1b5            
            uint8_t _pad01b6[0x22]; // 0x1b6
            source2sdk::modellib::DynamicMeshDeformParams_t m_meshDeformParams; // 0x1d8            
            uint8_t _pad01e4[0x4]; // 0x1e4
            source2sdk::modellib::CRenderGroom* m_pGroomData; // 0x1e8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_sceneObjects) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_constraints) == 0xa8);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_skeleton) == 0xb8);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bUseUV2ForCharting) == 0x1b4);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bEmbeddedMapMesh) == 0x1b5);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_meshDeformParams) == 0x1d8);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_pGroomData) == 0x1e8);
        
        static_assert(sizeof(source2sdk::modellib::CRenderMesh) == 0x1f0);
    };
};
