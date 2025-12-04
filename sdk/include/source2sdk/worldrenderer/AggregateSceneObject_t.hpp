#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/worldrenderer/AggregateLODSetup_t.hpp"
#include "source2sdk/worldrenderer/AggregateMeshInfo_t.hpp"
#include "source2sdk/worldrenderer/ObjectTypeFlags_t.hpp"

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
        struct AggregateSceneObject_t
        {
        public:
            source2sdk::worldrenderer::ObjectTypeFlags_t m_allFlags; // 0x_            
            source2sdk::worldrenderer::ObjectTypeFlags_t m_anyFlags; // 0x_            
            std::int16_t m_nLayer; // 0x_            
            std::int16_t m_instanceStream; // 0x_            
            std::int16_t m_vertexAlbedoStream; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_aggregateMeshes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::AggregateMeshInfo_t> m_aggregateMeshes;
            char m_aggregateMeshes[0x_]; // 0x_            
            // m_lodSetups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::AggregateLODSetup_t> m_lodSetups;
            char m_lodSetups[0x_]; // 0x_            
            // m_visClusterMembership has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_visClusterMembership;
            char m_visClusterMembership[0x_]; // 0x_            
            // m_fragmentTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<matrix3x4_t> m_fragmentTransforms;
            char m_fragmentTransforms[0x_]; // 0x_            
            // m_renderableModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_renderableModel;
            char m_renderableModel[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_allFlags) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_anyFlags) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_nLayer) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_instanceStream) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_vertexAlbedoStream) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_aggregateMeshes) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_lodSetups) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_visClusterMembership) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_fragmentTransforms) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateSceneObject_t, m_renderableModel) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateSceneObject_t) == 0x_);
    };
};
