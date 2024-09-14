#pragma once
#include "source2sdk/worldrenderer/AggregateSceneObject_t.hpp"
#include "source2sdk/worldrenderer/BakedLightingInfo_t.hpp"
#include "source2sdk/worldrenderer/ClutterSceneObject_t.hpp"
#include "source2sdk/worldrenderer/ExtraVertexStreamOverride_t.hpp"
#include "source2sdk/worldrenderer/InfoOverlayData_t.hpp"
#include "source2sdk/worldrenderer/MaterialOverride_t.hpp"
#include "source2sdk/worldrenderer/SceneObject_t.hpp"
#include "source2sdk/worldrenderer/WorldNodeOnDiskBufferData_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x140
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct WorldNode_t
    {
    public:
        // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::SceneObject_t> m_sceneObjects;
        char m_sceneObjects[0x18]; // 0x0        
        // m_infoOverlays has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::InfoOverlayData_t> m_infoOverlays;
        char m_infoOverlays[0x18]; // 0x18        
        // m_visClusterMembership has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_visClusterMembership;
        char m_visClusterMembership[0x18]; // 0x30        
        // m_aggregateSceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::AggregateSceneObject_t> m_aggregateSceneObjects;
        char m_aggregateSceneObjects[0x18]; // 0x48        
        // m_clutterSceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::ClutterSceneObject_t> m_clutterSceneObjects;
        char m_clutterSceneObjects[0x18]; // 0x60        
        // m_extraVertexStreamOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::ExtraVertexStreamOverride_t> m_extraVertexStreamOverrides;
        char m_extraVertexStreamOverrides[0x18]; // 0x78        
        // m_materialOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::MaterialOverride_t> m_materialOverrides;
        char m_materialOverrides[0x18]; // 0x90        
        // m_extraVertexStreams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::WorldNodeOnDiskBufferData_t> m_extraVertexStreams;
        char m_extraVertexStreams[0x18]; // 0xa8        
        // m_layerNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_layerNames;
        char m_layerNames[0x18]; // 0xc0        
        // m_sceneObjectLayerIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_sceneObjectLayerIndices;
        char m_sceneObjectLayerIndices[0x18]; // 0xd8        
        // m_overlayLayerIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_overlayLayerIndices;
        char m_overlayLayerIndices[0x18]; // 0xf0        
        CUtlString m_grassFileName; // 0x108        
        worldrenderer::BakedLightingInfo_t m_nodeLightingInfo; // 0x110        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WorldNode_t, m_sceneObjects) == 0x0);
    static_assert(offsetof(WorldNode_t, m_infoOverlays) == 0x18);
    static_assert(offsetof(WorldNode_t, m_visClusterMembership) == 0x30);
    static_assert(offsetof(WorldNode_t, m_aggregateSceneObjects) == 0x48);
    static_assert(offsetof(WorldNode_t, m_clutterSceneObjects) == 0x60);
    static_assert(offsetof(WorldNode_t, m_extraVertexStreamOverrides) == 0x78);
    static_assert(offsetof(WorldNode_t, m_materialOverrides) == 0x90);
    static_assert(offsetof(WorldNode_t, m_extraVertexStreams) == 0xa8);
    static_assert(offsetof(WorldNode_t, m_layerNames) == 0xc0);
    static_assert(offsetof(WorldNode_t, m_sceneObjectLayerIndices) == 0xd8);
    static_assert(offsetof(WorldNode_t, m_overlayLayerIndices) == 0xf0);
    static_assert(offsetof(WorldNode_t, m_grassFileName) == 0x108);
    static_assert(offsetof(WorldNode_t, m_nodeLightingInfo) == 0x110);
    
    static_assert(sizeof(WorldNode_t) == 0x140);
};
