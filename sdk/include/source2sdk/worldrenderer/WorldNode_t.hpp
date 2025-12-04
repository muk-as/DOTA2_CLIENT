#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/AggregateInstanceStreamOnDiskData_t.hpp"
#include "source2sdk/worldrenderer/AggregateSceneObject_t.hpp"
#include "source2sdk/worldrenderer/AggregateVertexAlbedoStreamOnDiskData_t.hpp"
#include "source2sdk/worldrenderer/BakedLightingInfo_t.hpp"
#include "source2sdk/worldrenderer/ClutterSceneObject_t.hpp"
#include "source2sdk/worldrenderer/ExtraVertexStreamOverride_t.hpp"
#include "source2sdk/worldrenderer/MaterialOverride_t.hpp"
#include "source2sdk/worldrenderer/SceneObject_t.hpp"
#include "source2sdk/worldrenderer/WorldNodeOnDiskBufferData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct WorldNode_t
        {
        public:
            // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::SceneObject_t> m_sceneObjects;
            char m_sceneObjects[0x_]; // 0x_            
            // m_visClusterMembership has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_visClusterMembership;
            char m_visClusterMembership[0x_]; // 0x_            
            // m_aggregateSceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::AggregateSceneObject_t> m_aggregateSceneObjects;
            char m_aggregateSceneObjects[0x_]; // 0x_            
            // m_clutterSceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::ClutterSceneObject_t> m_clutterSceneObjects;
            char m_clutterSceneObjects[0x_]; // 0x_            
            // m_extraVertexStreamOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::ExtraVertexStreamOverride_t> m_extraVertexStreamOverrides;
            char m_extraVertexStreamOverrides[0x_]; // 0x_            
            // m_materialOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::MaterialOverride_t> m_materialOverrides;
            char m_materialOverrides[0x_]; // 0x_            
            // m_extraVertexStreams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::WorldNodeOnDiskBufferData_t> m_extraVertexStreams;
            char m_extraVertexStreams[0x_]; // 0x_            
            // m_aggregateInstanceStreams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::AggregateInstanceStreamOnDiskData_t> m_aggregateInstanceStreams;
            char m_aggregateInstanceStreams[0x_]; // 0x_            
            // m_vertexAlbedoStreams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::AggregateVertexAlbedoStreamOnDiskData_t> m_vertexAlbedoStreams;
            char m_vertexAlbedoStreams[0x_]; // 0x_            
            // m_layerNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_layerNames;
            char m_layerNames[0x_]; // 0x_            
            // m_sceneObjectLayerIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_sceneObjectLayerIndices;
            char m_sceneObjectLayerIndices[0x_]; // 0x_            
            CUtlString m_grassFileName; // 0x_            
            source2sdk::worldrenderer::BakedLightingInfo_t m_nodeLightingInfo; // 0x_            
            bool m_bHasBakedGeometryFlag; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_sceneObjects) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_visClusterMembership) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_aggregateSceneObjects) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_clutterSceneObjects) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_extraVertexStreamOverrides) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_materialOverrides) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_extraVertexStreams) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_aggregateInstanceStreams) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_vertexAlbedoStreams) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_layerNames) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_sceneObjectLayerIndices) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_grassFileName) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_nodeLightingInfo) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNode_t, m_bHasBakedGeometryFlag) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::WorldNode_t) == 0x_);
    };
};
