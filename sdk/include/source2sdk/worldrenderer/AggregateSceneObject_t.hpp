#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/worldrenderer/AggregateLODSetup_t.hpp"
#include "source2sdk/worldrenderer/AggregateMeshInfo_t.hpp"
#include "source2sdk/worldrenderer/ObjectTypeFlags_t.hpp"
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
    // Size: 0x78
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AggregateSceneObject_t
    {
    public:
        worldrenderer::ObjectTypeFlags_t m_allFlags; // 0x0        
        worldrenderer::ObjectTypeFlags_t m_anyFlags; // 0x4        
        int16_t m_nLayer; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x6]; // 0xa
        // m_aggregateMeshes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::AggregateMeshInfo_t> m_aggregateMeshes;
        char m_aggregateMeshes[0x18]; // 0x10        
        // m_lodSetups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::AggregateLODSetup_t> m_lodSetups;
        char m_lodSetups[0x18]; // 0x28        
        // m_visClusterMembership has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_visClusterMembership;
        char m_visClusterMembership[0x18]; // 0x40        
        // m_fragmentTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<matrix3x4_t> m_fragmentTransforms;
        char m_fragmentTransforms[0x18]; // 0x58        
        // m_renderableModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_renderableModel;
        char m_renderableModel[0x8]; // 0x70        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AggregateSceneObject_t, m_allFlags) == 0x0);
    static_assert(offsetof(AggregateSceneObject_t, m_anyFlags) == 0x4);
    static_assert(offsetof(AggregateSceneObject_t, m_nLayer) == 0x8);
    static_assert(offsetof(AggregateSceneObject_t, m_aggregateMeshes) == 0x10);
    static_assert(offsetof(AggregateSceneObject_t, m_lodSetups) == 0x28);
    static_assert(offsetof(AggregateSceneObject_t, m_visClusterMembership) == 0x40);
    static_assert(offsetof(AggregateSceneObject_t, m_fragmentTransforms) == 0x58);
    static_assert(offsetof(AggregateSceneObject_t, m_renderableModel) == 0x70);
    
    static_assert(sizeof(AggregateSceneObject_t) == 0x78);
};
