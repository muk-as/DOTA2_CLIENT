#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/AggregateInstanceStream_t.hpp"
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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AggregateMeshInfo_t
        {
        public:
            std::uint32_t m_nVisClusterMemberOffset; // 0x_            
            std::uint8_t m_nVisClusterMemberCount; // 0x_            
            bool m_bHasTransform; // 0x_            
            std::uint8_t m_nLODGroupMask; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int16_t m_nDrawCallIndex; // 0x_            
            std::int16_t m_nLODSetupIndex; // 0x_            
            Color m_vTintColor; // 0x_            
            source2sdk::worldrenderer::ObjectTypeFlags_t m_objectFlags; // 0x_            
            std::int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x_            
            std::uint32_t m_nInstanceStreamOffset; // 0x_            
            std::uint32_t m_nVertexAlbedoStreamOffset; // 0x_            
            source2sdk::worldrenderer::AggregateInstanceStream_t m_instanceStreams; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nVisClusterMemberOffset) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nVisClusterMemberCount) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_bHasTransform) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nLODGroupMask) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nDrawCallIndex) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nLODSetupIndex) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_vTintColor) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_objectFlags) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nLightProbeVolumePrecomputedHandshake) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nInstanceStreamOffset) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nVertexAlbedoStreamOffset) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_instanceStreams) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateMeshInfo_t) == 0x_);
    };
};
