#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/VertexAlbedoFormat_t.hpp"
#include "source2sdk/worldrenderer/RTProxyInstanceFlags_t.hpp"

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
        struct RTProxyInstanceInfo_t
        {
        public:
            source2sdk::worldrenderer::RTProxyInstanceFlags_t m_nFlags; // 0x_            
            source2sdk::modellib::VertexAlbedoFormat_t m_albedoFormat; // 0x_            
            std::uint16_t m_nBLASCount; // 0x_            
            std::uint32_t m_nBLASIndex; // 0x_            
            std::uint32_t m_nVertexAlbedoByteOffset; // 0x_            
            matrix3x4_t m_mWorldFromLocal; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_albedoFormat) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nBLASCount) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nBLASIndex) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nVertexAlbedoByteOffset) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_mWorldFromLocal) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::RTProxyInstanceInfo_t) == 0x_);
    };
};
