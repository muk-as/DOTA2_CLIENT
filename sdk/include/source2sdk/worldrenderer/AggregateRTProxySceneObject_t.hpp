#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/RTProxyBLAS_t.hpp"
#include "source2sdk/worldrenderer/RTProxyInstanceInfo_t.hpp"

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
        struct AggregateRTProxySceneObject_t
        {
        public:
            std::int16_t m_nLayer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_BLASes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::RTProxyBLAS_t> m_BLASes;
            char m_BLASes[0x_]; // 0x_            
            // m_Instances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::RTProxyInstanceInfo_t> m_Instances;
            char m_Instances[0x_]; // 0x_            
            CUtlBinaryBlock m_VBData; // 0x_            
            CUtlBinaryBlock m_IBData; // 0x_            
            CUtlBinaryBlock m_InstanceAlbedoData; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_nLayer) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_BLASes) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_Instances) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_VBData) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_IBData) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_InstanceAlbedoData) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t) == 0x_);
    };
};
